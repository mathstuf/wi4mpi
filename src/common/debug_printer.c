#include <stdio.h>
#include <string.h>
#include "app_mpi.h"
#include <stdarg.h>
__thread int debug_act;
void print_status(A_MPI_Status);
#define print_type(type,printf_string) \
                    if(nb_elt==0)\
                   printf(#printf_string ,pointer_disp?*(va_arg(ap,type*)):(va_arg(ap,type)));\
                    else\
                    {\
                    type *s=pointer_disp?*va_arg(ap,type **):va_arg(ap,type*);\
                    printf("[\n");\
                    for(ii=0;ii<nb_elt;ii++)\
                    {if(ii) printf(",\n"); printf( #printf_string,s[ii]);}\
                    printf("]\n");\
                    }

#define print_named_type(type,printf_string,func)\
                    if(nb_elt==0){\
                    type dat=pointer_disp?*(va_arg(ap,type*)):(va_arg(ap,type));\
                    func(dat,cname,namelen);\
                   printf("{ value : "#printf_string ", name :%s }" ,dat,cname);\
                    }else\
                    {\
                    type *s=pointer_disp?*va_arg(ap,type **):va_arg(ap,type*);\
                    printf("[\n");\
                    for(ii=0;ii<nb_elt;ii++)\
                    {\
                        func(s[ii],cname,namelen);\
                        if(ii) printf(,\n');\
             printf("{ value : "#printf_string ", name :%s }" ,ss[ii],cname);\
                    }\
                    printf("]\n");\
                    }
void debug_printer(const char *ctr_str,...)
{
    if(debug_act!=0)
{
    int len=strlen(ctr_str);
    char print_str[4096];
    
    va_list ap;
    int it,i,ii;
    va_start(ap,ctr_str);
    int pointer_disp;
    it=0;i=0;
    while(ctr_str[it]!='\0')
    {
        int        nb_elt=0;
        print_str[i]=ctr_str[it];
        if(ctr_str[it]=='%')
        {
            int to_dec;
            print_str[i]='\0';
            printf("%s",print_str);
            pointer_disp=0;
            to_dec=1;
            void *parg;
            while(to_dec)
            {
                    char cname[2048];int namelen;
                it++;
                to_dec=0;
            switch (ctr_str[it]){
                case '*':
                    pointer_disp++;
                    to_dec=1;    
                    break;
                case 'n':
                    if(nb_elt==0)
                    print_status(pointer_disp?*va_arg(ap,A_MPI_Status *):va_arg(ap,A_MPI_Status));
                    else
                    {
                    A_MPI_Status *s=pointer_disp?*va_arg(ap,A_MPI_Status **):va_arg(ap,A_MPI_Status*);
                    printf("[\n");
                    for(ii=0;ii<nb_elt;ii++)
                    {if(!ii) printf(",");print_status(s[ii]);}
                    printf("]\n");
                    }
                    break;
                case 'd':
                  /*  if(nb_elt==0)
                   printf("%d",pointer_disp?*(va_arg(ap,int*)):(va_arg(ap,int)));
                    else
                    {
                    int *s=pointer_disp?*va_arg(ap,int **):va_arg(ap,int*);
                    printf("[\n");
                    for(ii=0;ii<nb_elt;ii++)
                    {if(ii) printf(",\n%d",s[ii]);else printf("%d",s[ii]);}
                    printf("]\n");
                    }*/
                    
                    print_type(int,%d)
                    break;
                case 'D':
                    /*{ A_MPI_Datatype dat=pointer_disp?*(va_arg(ap,A_MPI_Datatype*)):(va_arg(ap,A_MPI_Datatype));
                    debug_act=0;
                    A_MPI_Type_get_name(dat,&cname[0],&namelen);
                    debug_act=1;
                    printf("{ \nvalue :%p ,\n name: %s\n}",dat,cname);
                    }*/
                    print_named_type(A_MPI_Datatype,%p,A_MPI_Type_get_name)
                    break; 
                case 'a':
                    nb_elt=va_arg(ap,int);
                    to_dec=1; 
                    break;
                case 's':
                 /*   if(nb_elt==0)
                        printf("%s",pointer_disp?*(va_arg(ap,char **)):va_arg(ap,char*));
                    else
                   { 
                    char **s=pointer_disp?*va_arg(ap,char ***):va_arg(ap,char**);
                    printf("[\n");
                    for(ii=0;ii<nb_elt;ii++)
                    {if(ii) printf(",\n%s",s[ii]);else printf("%s",s[ii]);}
                    printf("\n]\n");
                    }
*/
                    print_type(char *,"%s")
                    break;
                case 'C':
                    /*A_MPI_Comm cc=pointer_disp?*(va_arg(ap,A_MPI_Comm*)):(va_arg(ap,A_MPI_Comm));
                    debug_act=0;
                    A_MPI_Comm_get_name(cc,&cname[0],&namelen);
                    debug_act=1;
                    printf("{ \nvalue :%p ,\n name: %s\n}",cc,cname);
                    break;
*/
                    print_named_type(A_MPI_Comm,"%p",A_MPI_Comm_get_name)
               case 'p':
                  //  printf("%p",va_arg(ap,void*)); 
                     print_type(void *,%p)
                     break;
               default:
                    va_arg(ap,void*);
                    break;
            }
            }
            i=-1;
        }
        i++;
        it++;
    } 
    print_str[i]='\0';
    printf("%s",print_str);
    va_end(ap);       
    
}}
__attribute__((constructor)) void init_debug(void)
{
    debug_act=1;
}
void print_status(A_MPI_Status stat)
{
    printf("{ source :%d, tag : %d ,error :%d}",stat.A_MPI_SOURCE,stat.A_MPI_TAG,stat.A_MPI_ERROR);
}
