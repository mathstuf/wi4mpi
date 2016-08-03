//############################# Wi4MPI License ###########################
//# `04/04/2016`                                                         #
//# Copyright or (C) or Copr. Commissariat a l'Energie Atomique         #
//#                                                                      #
//# IDDN.FR.001.210022.001.S.P.2014.000.10800                            #
//# This file is part of the Wi4MPI library.                             #
//#                                                                      #
//# This software is governed by the CeCILL-C license under French law   #
//# and abiding by the rules of distribution of free software. You can   #
//# use, modify and/ or redistribute the software under the terms of     #
//# the CeCILL-C license as circulated by CEA, CNRS and INRIA at the     #
//# following URL http://www.cecill.info.                                #
//#                                                                      #
//# The fact that you are presently reading this means that you have     #
//# had knowledge of the CeCILL-C license and that you accept its        #
//# terms.                                                               #
//#                                                                      #
//# Authors:                                                             #
//#   - Delforge Tony <tony.delforge.tgcc@cea.fr>                        #
//#   - Ducrot Vincent <vincent.ducrot.tgcc@cea.fr>                      #
//#                                                                      #
//########################################################################
/*
 * This code is full generated
 */
#define _GNU_SOURCE
#include <stdio.h>
#include <dlfcn.h>
/*ompi constante*/
#include "manual_interface.h"
void (*local_mpi_dup_fn_)(int *a,int *b,int *c,int *d,int *e,int *f,int *g);
void (*local_mpi_null_delete_fn_)(int *a,int *b,int *c,int *d,int *e,int *f);
void (*local_mpi_null_copy_fn_)(int *a,int *b,int *c,int *d,int *e,int *f,int *g);
void mpi_dup_fn_(int *a,int *b,int *c,int *d,int *e,int *f,int *g)
{
    local_mpi_dup_fn_(a,b,c,d,e,f,g);
}
void mpi_null_delete_fn_(int *a,int *b,int *c,int *d,int *e,int *f)
{
    local_mpi_null_delete_fn_(a,b,c,d,e,f);
}
void mpi_null_copy_fn_(int *a,int *b,int *c,int *d,int *e,int *f,int *g)
{
    local_mpi_null_copy_fn_(a,b,c,d,e,f,g);
}
void mpi_pcontrol_(int *level);
#pragma weak mpi_pcontrol_=pmpi_pcontrol_
void (*INTERFACE_F_LOCAL_MPI_Pcontrol)(int *);
void pmpi_pcontrol_(int *l)
{
INTERFACE_F_LOCAL_MPI_Pcontrol(l);
}
void  mpi_send_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * ret);
#pragma weak mpi_send_=pmpi_send_
void  (*INTERFACE_F_LOCAL_MPI_Send)(void *,int *,int *,int *,int *,int *,int *);

void pmpi_send_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Send(buf, count,datatype,dest,tag,comm, ret);
}

void  mpi_recv_(void * buf,int * count,int * datatype,int * source,int * tag,int * comm,int * status,int * ret);
#pragma weak mpi_recv_=pmpi_recv_
void  (*INTERFACE_F_LOCAL_MPI_Recv)(void *,int *,int *,int *,int *,int *,int *,int *);

void pmpi_recv_(void * buf,int * count,int * datatype,int * source,int * tag,int * comm,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_Recv(buf, count,datatype,source,tag,comm,status, ret);
}

void  mpi_get_count_(int * status,int * datatype,int * count,int * ret);
#pragma weak mpi_get_count_=pmpi_get_count_
void  (*INTERFACE_F_LOCAL_MPI_Get_count)(int *,int *,int *,int *);

void pmpi_get_count_(int * status,int * datatype,int * count,int * ret){

return  INTERFACE_F_LOCAL_MPI_Get_count(status,datatype, count, ret);
}

void  mpi_bsend_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * ret);
#pragma weak mpi_bsend_=pmpi_bsend_
void  (*INTERFACE_F_LOCAL_MPI_Bsend)(void *,int *,int *,int *,int *,int *,int *);

void pmpi_bsend_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Bsend(buf, count,datatype,dest,tag,comm, ret);
}

void  mpi_ssend_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * ret);
#pragma weak mpi_ssend_=pmpi_ssend_
void  (*INTERFACE_F_LOCAL_MPI_Ssend)(void *,int *,int *,int *,int *,int *,int *);

void pmpi_ssend_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Ssend(buf, count,datatype, dest,tag,comm, ret);
}

void  mpi_rsend_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * ret);
#pragma weak mpi_rsend_=pmpi_rsend_
void  (*INTERFACE_F_LOCAL_MPI_Rsend)(void *,int *,int *,int *,int *,int *,int *);

void pmpi_rsend_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Rsend(buf, count,datatype,dest,tag,comm, ret);
}

void  mpi_buffer_attach_(void * buffer,int * size,int * ret);
#pragma weak mpi_buffer_attach_=pmpi_buffer_attach_
void  (*INTERFACE_F_LOCAL_MPI_Buffer_attach)(void *,int *,int *);

void pmpi_buffer_attach_(void * buffer,int * size,int * ret){

return  INTERFACE_F_LOCAL_MPI_Buffer_attach(buffer, size, ret);
}

void  mpi_buffer_detach_(void * buffer_addr,int * size,int * ret);
#pragma weak mpi_buffer_detach_=pmpi_buffer_detach_
void  (*INTERFACE_F_LOCAL_MPI_Buffer_detach)(void *,int *,int *);

void pmpi_buffer_detach_(void * buffer_addr,int * size,int * ret){

return  INTERFACE_F_LOCAL_MPI_Buffer_detach(buffer_addr, size, ret);
}

void  mpi_isend_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * request,int * ret);
#pragma weak mpi_isend_=pmpi_isend_
void  (*INTERFACE_F_LOCAL_MPI_Isend)(void *,int *,int *,int *,int *,int *,int *,int *);

void pmpi_isend_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * request,int * ret){

return  INTERFACE_F_LOCAL_MPI_Isend(buf, count,datatype,dest,tag,comm,request, ret);
}

void  mpi_ibsend_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * request,int * ret);
#pragma weak mpi_ibsend_=pmpi_ibsend_
void  (*INTERFACE_F_LOCAL_MPI_Ibsend)(void *,int *,int *,int *,int *,int *,int *,int *);

void pmpi_ibsend_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * request,int * ret){

return  INTERFACE_F_LOCAL_MPI_Ibsend(buf, count,datatype,dest,tag,comm,request, ret);
}

void  mpi_issend_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * request,int * ret);
#pragma weak mpi_issend_=pmpi_issend_
void  (*INTERFACE_F_LOCAL_MPI_Issend)(void *,int *,int *,int *,int *,int *,int *,int *);

void pmpi_issend_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * request,int * ret){

return  INTERFACE_F_LOCAL_MPI_Issend(buf, count,datatype,dest,tag,comm,request, ret);
}

void  mpi_irsend_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * request,int * ret);
#pragma weak mpi_irsend_=pmpi_irsend_
void  (*INTERFACE_F_LOCAL_MPI_Irsend)(void *,int *,int *,int *,int *,int *,int *,int *);

void pmpi_irsend_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * request,int * ret){

return  INTERFACE_F_LOCAL_MPI_Irsend(buf, count,datatype,dest,tag,comm,request, ret);
}

void  mpi_irecv_(void * buf,int * count,int * datatype,int * source,int * tag,int * comm,int * request,int * ret);
#pragma weak mpi_irecv_=pmpi_irecv_
void  (*INTERFACE_F_LOCAL_MPI_Irecv)(void *,int *,int *,int *,int *,int *,int *,int *);

void pmpi_irecv_(void * buf,int * count,int * datatype,int * source,int * tag,int * comm,int * request,int * ret){

return  INTERFACE_F_LOCAL_MPI_Irecv(buf, count,datatype,source,tag,comm,request, ret);
}

void  mpi_wait_(int * request,int * status,int * ret);
#pragma weak mpi_wait_=pmpi_wait_
void  (*INTERFACE_F_LOCAL_MPI_Wait)(int *,int *,int *);

void pmpi_wait_(int * request,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_Wait(request,status, ret);
}

void  mpi_test_(int * request,int * flag,int * status,int * ret);
#pragma weak mpi_test_=pmpi_test_
void  (*INTERFACE_F_LOCAL_MPI_Test)(int *,int *,int *,int *);

void pmpi_test_(int * request,int * flag,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_Test(request, flag,status, ret);
}

void  mpi_request_free_(int * request,int * ret);
#pragma weak mpi_request_free_=pmpi_request_free_
void  (*INTERFACE_F_LOCAL_MPI_Request_free)(int *,int *);

void pmpi_request_free_(int * request,int * ret){

return  INTERFACE_F_LOCAL_MPI_Request_free(request, ret);
}

void  mpi_iprobe_(int * source,int * tag,int * comm,int * flag,int * status,int * ret);
#pragma weak mpi_iprobe_=pmpi_iprobe_
void  (*INTERFACE_F_LOCAL_MPI_Iprobe)(int *,int *,int *,int *,int *,int *);

void pmpi_iprobe_(int * source,int * tag,int * comm,int * flag,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_Iprobe(source,tag,comm, flag,status, ret);
}

void  mpi_probe_(int * source,int * tag,int * comm,int * status,int * ret);
#pragma weak mpi_probe_=pmpi_probe_
void  (*INTERFACE_F_LOCAL_MPI_Probe)(int *,int *,int *,int *,int *);

void pmpi_probe_(int * source,int * tag,int * comm,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_Probe(source,tag,comm,status, ret);
}

void  mpi_cancel_(int * request,int * ret);
#pragma weak mpi_cancel_=pmpi_cancel_
void  (*INTERFACE_F_LOCAL_MPI_Cancel)(int *,int *);

void pmpi_cancel_(int * request,int * ret){

return  INTERFACE_F_LOCAL_MPI_Cancel(request, ret);
}

void  mpi_test_cancelled_(int * status,int * flag,int * ret);
#pragma weak mpi_test_cancelled_=pmpi_test_cancelled_
void  (*INTERFACE_F_LOCAL_MPI_Test_cancelled)(int *,int *,int *);

void pmpi_test_cancelled_(int * status,int * flag,int * ret){

return  INTERFACE_F_LOCAL_MPI_Test_cancelled(status, flag, ret);
}

void  mpi_send_init_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * request,int * ret);
#pragma weak mpi_send_init_=pmpi_send_init_
void  (*INTERFACE_F_LOCAL_MPI_Send_init)(void *,int *,int *,int *,int *,int *,int *,int *);

void pmpi_send_init_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * request,int * ret){

return  INTERFACE_F_LOCAL_MPI_Send_init(buf, count,datatype,dest,tag,comm,request, ret);
}

void  mpi_bsend_init_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * request,int * ret);
#pragma weak mpi_bsend_init_=pmpi_bsend_init_
void  (*INTERFACE_F_LOCAL_MPI_Bsend_init)(void *,int *,int *,int *,int *,int *,int *,int *);

void pmpi_bsend_init_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * request,int * ret){

return  INTERFACE_F_LOCAL_MPI_Bsend_init(buf, count,datatype,dest,tag,comm,request, ret);
}

void  mpi_ssend_init_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * request,int * ret);
#pragma weak mpi_ssend_init_=pmpi_ssend_init_
void  (*INTERFACE_F_LOCAL_MPI_Ssend_init)(void *,int *,int *,int *,int *,int *,int *,int *);

void pmpi_ssend_init_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * request,int * ret){

return  INTERFACE_F_LOCAL_MPI_Ssend_init(buf, count,datatype,dest,tag,comm,request, ret);
}

void  mpi_rsend_init_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * request,int * ret);
#pragma weak mpi_rsend_init_=pmpi_rsend_init_
void  (*INTERFACE_F_LOCAL_MPI_Rsend_init)(void *,int *,int *,int *,int *,int *,int *,int *);

void pmpi_rsend_init_(void * buf,int * count,int * datatype,int * dest,int * tag,int * comm,int * request,int * ret){

return  INTERFACE_F_LOCAL_MPI_Rsend_init(buf, count,datatype,dest,tag,comm,request, ret);
}

void  mpi_recv_init_(void * buf,int * count,int * datatype,int * source,int * tag,int * comm,int * request,int * ret);
#pragma weak mpi_recv_init_=pmpi_recv_init_
void  (*INTERFACE_F_LOCAL_MPI_Recv_init)(void *,int *,int *,int *,int *,int *,int *,int *);

void pmpi_recv_init_(void * buf,int * count,int * datatype,int * source,int * tag,int * comm,int * request,int * ret){

return  INTERFACE_F_LOCAL_MPI_Recv_init(buf, count,datatype,source,tag,comm,request, ret);
}

void  mpi_start_(int * request,int * ret);
#pragma weak mpi_start_=pmpi_start_
void  (*INTERFACE_F_LOCAL_MPI_Start)(int *,int *);

void pmpi_start_(int * request,int * ret){

return  INTERFACE_F_LOCAL_MPI_Start(request, ret);
}

void  mpi_sendrecv_(void * sendbuf,int * sendcount,int * sendtype,int * dest,int * sendtag,void * recvbuf,int * recvcount,int * recvtype,int * source,int * recvtag,int * comm,int * status,int * ret);
#pragma weak mpi_sendrecv_=pmpi_sendrecv_
void  (*INTERFACE_F_LOCAL_MPI_Sendrecv)(void *,int *,int *,int *,int *,void *,int *,int *,int *,int *,int *,int *,int *);

void pmpi_sendrecv_(void * sendbuf,int * sendcount,int * sendtype,int * dest,int * sendtag,void * recvbuf,int * recvcount,int * recvtype,int * source,int * recvtag,int * comm,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_Sendrecv(sendbuf, sendcount,sendtype,dest,sendtag,recvbuf, recvcount,recvtype,source,recvtag,comm,status, ret);
}

void  mpi_sendrecv_replace_(void * buf,int * count,int * datatype,int * dest,int * sendtag,int * source,int * recvtag,int * comm,int * status,int * ret);
#pragma weak mpi_sendrecv_replace_=pmpi_sendrecv_replace_
void  (*INTERFACE_F_LOCAL_MPI_Sendrecv_replace)(void *,int *,int *,int *,int *,int *,int *,int *,int *,int *);

void pmpi_sendrecv_replace_(void * buf,int * count,int * datatype,int * dest,int * sendtag,int * source,int * recvtag,int * comm,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_Sendrecv_replace(buf, count,datatype,dest,sendtag,source,recvtag,comm,status, ret);
}

void  mpi_type_contiguous_(int * count,int * oldtype,int * newtype,int * ret);
#pragma weak mpi_type_contiguous_=pmpi_type_contiguous_
void  (*INTERFACE_F_LOCAL_MPI_Type_contiguous)(int *,int *,int *,int *);

void pmpi_type_contiguous_(int * count,int * oldtype,int * newtype,int * ret){

return  INTERFACE_F_LOCAL_MPI_Type_contiguous( count,oldtype,newtype, ret);
}

void  mpi_type_vector_(int * count,int * blocklength,int * stride,int * oldtype,int * newtype,int * ret);
#pragma weak mpi_type_vector_=pmpi_type_vector_
void  (*INTERFACE_F_LOCAL_MPI_Type_vector)(int *,int *,int *,int *,int *,int *);

void pmpi_type_vector_(int * count,int * blocklength,int * stride,int * oldtype,int * newtype,int * ret){

return  INTERFACE_F_LOCAL_MPI_Type_vector( count, blocklength, stride,oldtype,newtype, ret);
}

void  mpi_type_hvector_(int * count,int * blocklength,size_t * stride,int * oldtype,int * newtype,int * ret);
#pragma weak mpi_type_hvector_=pmpi_type_hvector_
void  (*INTERFACE_F_LOCAL_MPI_Type_hvector)(int *,int *,size_t *,int *,int *,int *);

void pmpi_type_hvector_(int * count,int * blocklength,size_t * stride,int * oldtype,int * newtype,int * ret){

return  INTERFACE_F_LOCAL_MPI_Type_hvector( count, blocklength, stride,oldtype,newtype, ret);
}

void  mpi_type_indexed_(int * count,int * array_of_blocklengths,int * array_of_displacements,int * oldtype,int * newtype,int * ret);
#pragma weak mpi_type_indexed_=pmpi_type_indexed_
void  (*INTERFACE_F_LOCAL_MPI_Type_indexed)(int *,int *,int *,int *,int *,int *);

void pmpi_type_indexed_(int * count,int * array_of_blocklengths,int * array_of_displacements,int * oldtype,int * newtype,int * ret){

return  INTERFACE_F_LOCAL_MPI_Type_indexed( count, array_of_blocklengths, array_of_displacements,oldtype,newtype, ret);
}

void  mpi_type_hindexed_(int * count,int * array_of_blocklengths,size_t * array_of_displacements,int * oldtype,int * newtype,int * ret);
#pragma weak mpi_type_hindexed_=pmpi_type_hindexed_
void  (*INTERFACE_F_LOCAL_MPI_Type_hindexed)(int *,int *,size_t *,int *,int *,int *);

void pmpi_type_hindexed_(int * count,int * array_of_blocklengths,size_t * array_of_displacements,int * oldtype,int * newtype,int * ret){

return  INTERFACE_F_LOCAL_MPI_Type_hindexed( count, array_of_blocklengths, array_of_displacements,oldtype,newtype, ret);
}

void  mpi_type_struct_(int * count,int * array_of_blocklengths,size_t * array_of_displacements,int * array_of_types,int * newtype,int * ret);
#pragma weak mpi_type_struct_=pmpi_type_struct_
void  (*INTERFACE_F_LOCAL_MPI_Type_struct)(int *,int *,size_t *,int *,int *,int *);

void pmpi_type_struct_(int * count,int * array_of_blocklengths,size_t * array_of_displacements,int * array_of_types,int * newtype,int * ret){

return  INTERFACE_F_LOCAL_MPI_Type_struct( count, array_of_blocklengths, array_of_displacements,array_of_types,newtype, ret);
}

void  mpi_address_(void * location,size_t * address,int * ret);
#pragma weak mpi_address_=pmpi_address_
void  (*INTERFACE_F_LOCAL_MPI_Address)(void *,size_t *,int *);

void pmpi_address_(void * location,size_t * address,int * ret){

return  INTERFACE_F_LOCAL_MPI_Address(location, address, ret);
}

void  mpi_type_extent_(int * datatype,size_t * extent,int * ret);
#pragma weak mpi_type_extent_=pmpi_type_extent_
void  (*INTERFACE_F_LOCAL_MPI_Type_extent)(int *,size_t *,int *);

void pmpi_type_extent_(int * datatype,size_t * extent,int * ret){

return  INTERFACE_F_LOCAL_MPI_Type_extent(datatype, extent, ret);
}

void  mpi_type_size_(int * datatype,int * size,int * ret);
#pragma weak mpi_type_size_=pmpi_type_size_
void  (*INTERFACE_F_LOCAL_MPI_Type_size)(int *,int *,int *);

void pmpi_type_size_(int * datatype,int * size,int * ret){

return  INTERFACE_F_LOCAL_MPI_Type_size(datatype, size, ret);
}

void  mpi_type_lb_(int * datatype,size_t * displacement,int * ret);
#pragma weak mpi_type_lb_=pmpi_type_lb_
void  (*INTERFACE_F_LOCAL_MPI_Type_lb)(int *,size_t *,int *);

void pmpi_type_lb_(int * datatype,size_t * displacement,int * ret){

return  INTERFACE_F_LOCAL_MPI_Type_lb(datatype, displacement, ret);
}

void  mpi_type_ub_(int * datatype,size_t * displacement,int * ret);
#pragma weak mpi_type_ub_=pmpi_type_ub_
void  (*INTERFACE_F_LOCAL_MPI_Type_ub)(int *,size_t *,int *);

void pmpi_type_ub_(int * datatype,size_t * displacement,int * ret){

return  INTERFACE_F_LOCAL_MPI_Type_ub(datatype, displacement, ret);
}

void  mpi_type_commit_(int * datatype,int * ret);
#pragma weak mpi_type_commit_=pmpi_type_commit_
void  (*INTERFACE_F_LOCAL_MPI_Type_commit)(int *,int *);

void pmpi_type_commit_(int * datatype,int * ret){

return  INTERFACE_F_LOCAL_MPI_Type_commit(datatype, ret);
}

void  mpi_type_free_(int * datatype,int * ret);
#pragma weak mpi_type_free_=pmpi_type_free_
void  (*INTERFACE_F_LOCAL_MPI_Type_free)(int *,int *);

void pmpi_type_free_(int * datatype,int * ret){

return  INTERFACE_F_LOCAL_MPI_Type_free(datatype, ret);
}

void  mpi_get_elements_(int * status,int * datatype,int * count,int * ret);
#pragma weak mpi_get_elements_=pmpi_get_elements_
void  (*INTERFACE_F_LOCAL_MPI_Get_elements)(int *,int *,int *,int *);

void pmpi_get_elements_(int * status,int * datatype,int * count,int * ret){

return  INTERFACE_F_LOCAL_MPI_Get_elements(status,datatype, count, ret);
}

void  mpi_pack_(void * inbuf,int * incount,int * datatype,void * outbuf,int * outsize,int * position,int * comm,int * ret);
#pragma weak mpi_pack_=pmpi_pack_
void  (*INTERFACE_F_LOCAL_MPI_Pack)(void *,int *,int *,void *,int *,int *,int *,int *);

void pmpi_pack_(void * inbuf,int * incount,int * datatype,void * outbuf,int * outsize,int * position,int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Pack(inbuf, incount,datatype,outbuf, outsize, position,comm, ret);
}

void  mpi_unpack_(void * inbuf,int * insize,int * position,void * outbuf,int * outcount,int * datatype,int * comm,int * ret);
#pragma weak mpi_unpack_=pmpi_unpack_
void  (*INTERFACE_F_LOCAL_MPI_Unpack)(void *,int *,int *,void *,int *,int *,int *,int *);

void pmpi_unpack_(void * inbuf,int * insize,int * position,void * outbuf,int * outcount,int * datatype,int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Unpack(inbuf, insize, position,outbuf, outcount,datatype,comm, ret);
}

void  mpi_pack_size_(int * incount,int * datatype,int * comm,int * size,int * ret);
#pragma weak mpi_pack_size_=pmpi_pack_size_
void  (*INTERFACE_F_LOCAL_MPI_Pack_size)(int *,int *,int *,int *,int *);

void pmpi_pack_size_(int * incount,int * datatype,int * comm,int * size,int * ret){

return  INTERFACE_F_LOCAL_MPI_Pack_size( incount,datatype,comm, size, ret);
}

void  mpi_barrier_(int * comm,int * ret);
#pragma weak mpi_barrier_=pmpi_barrier_
void  (*INTERFACE_F_LOCAL_MPI_Barrier)(int *,int *);

void pmpi_barrier_(int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Barrier(comm, ret);
}

void  mpi_bcast_(void * buffer,int * count,int * datatype,int * root,int * comm,int * ret);
#pragma weak mpi_bcast_=pmpi_bcast_
void  (*INTERFACE_F_LOCAL_MPI_Bcast)(void *,int *,int *,int *,int *,int *);

void pmpi_bcast_(void * buffer,int * count,int * datatype,int * root,int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Bcast(buffer, count,datatype, root,comm, ret);
}

void  mpi_gather_(void * sendbuf,int * sendcount,int * sendtype,void * recvbuf,int * recvcount,int * recvtype,int * root,int * comm,int * ret);
#pragma weak mpi_gather_=pmpi_gather_
void  (*INTERFACE_F_LOCAL_MPI_Gather)(void *,int *,int *,void *,int *,int *,int *,int *,int *);

void pmpi_gather_(void * sendbuf,int * sendcount,int * sendtype,void * recvbuf,int * recvcount,int * recvtype,int * root,int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Gather(sendbuf, sendcount,sendtype,recvbuf, recvcount,recvtype, root,comm, ret);
}

void  mpi_gatherv_(void * sendbuf,int * sendcount,int * sendtype,void * recvbuf,int * recvcounts,int * displs,int * recvtype,int * root,int * comm,int * ret);
#pragma weak mpi_gatherv_=pmpi_gatherv_
void  (*INTERFACE_F_LOCAL_MPI_Gatherv)(void *,int *,int *,void *,int *,int *,int *,int *,int *,int *);

void pmpi_gatherv_(void * sendbuf,int * sendcount,int * sendtype,void * recvbuf,int * recvcounts,int * displs,int * recvtype,int * root,int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Gatherv(sendbuf, sendcount,sendtype,recvbuf, recvcounts, displs,recvtype, root,comm, ret);
}

void  mpi_scatter_(void * sendbuf,int * sendcount,int * sendtype,void * recvbuf,int * recvcount,int * recvtype,int * root,int * comm,int * ret);
#pragma weak mpi_scatter_=pmpi_scatter_
void  (*INTERFACE_F_LOCAL_MPI_Scatter)(void *,int *,int *,void *,int *,int *,int *,int *,int *);

void pmpi_scatter_(void * sendbuf,int * sendcount,int * sendtype,void * recvbuf,int * recvcount,int * recvtype,int * root,int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Scatter(sendbuf, sendcount,sendtype,recvbuf, recvcount,recvtype, root,comm, ret);
}

void  mpi_scatterv_(void * sendbuf,int * sendcounts,int * displs,int * sendtype,void * recvbuf,int * recvcount,int * recvtype,int * root,int * comm,int * ret);
#pragma weak mpi_scatterv_=pmpi_scatterv_
void  (*INTERFACE_F_LOCAL_MPI_Scatterv)(void *,int *,int *,int *,void *,int *,int *,int *,int *,int *);

void pmpi_scatterv_(void * sendbuf,int * sendcounts,int * displs,int * sendtype,void * recvbuf,int * recvcount,int * recvtype,int * root,int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Scatterv(sendbuf, sendcounts, displs,sendtype,recvbuf, recvcount,recvtype, root,comm, ret);
}

void  mpi_allgather_(void * sendbuf,int * sendcount,int * sendtype,void * recvbuf,int * recvcount,int * recvtype,int * comm,int * ret);
#pragma weak mpi_allgather_=pmpi_allgather_
void  (*INTERFACE_F_LOCAL_MPI_Allgather)(void *,int *,int *,void *,int *,int *,int *,int *);

void pmpi_allgather_(void * sendbuf,int * sendcount,int * sendtype,void * recvbuf,int * recvcount,int * recvtype,int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Allgather(sendbuf, sendcount,sendtype,recvbuf, recvcount,recvtype,comm, ret);
}

void  mpi_allgatherv_(void * sendbuf,int * sendcount,int * sendtype,void * recvbuf,int * recvcounts,int * displs,int * recvtype,int * comm,int * ret);
#pragma weak mpi_allgatherv_=pmpi_allgatherv_
void  (*INTERFACE_F_LOCAL_MPI_Allgatherv)(void *,int *,int *,void *,int *,int *,int *,int *,int *);

void pmpi_allgatherv_(void * sendbuf,int * sendcount,int * sendtype,void * recvbuf,int * recvcounts,int * displs,int * recvtype,int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Allgatherv(sendbuf, sendcount,sendtype,recvbuf, recvcounts, displs,recvtype,comm, ret);
}

void  mpi_alltoall_(void * sendbuf,int * sendcount,int * sendtype,void * recvbuf,int * recvcount,int * recvtype,int * comm,int * ret);
#pragma weak mpi_alltoall_=pmpi_alltoall_
void  (*INTERFACE_F_LOCAL_MPI_Alltoall)(void *,int *,int *,void *,int *,int *,int *,int *);

void pmpi_alltoall_(void * sendbuf,int * sendcount,int * sendtype,void * recvbuf,int * recvcount,int * recvtype,int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Alltoall(sendbuf, sendcount,sendtype,recvbuf, recvcount,recvtype,comm, ret);
}

void  mpi_alltoallv_(void * sendbuf,int * sendcounts,int * sdispls,int * sendtype,void * recvbuf,int * recvcounts,int * rdispls,int * recvtype,int * comm,int * ret);
#pragma weak mpi_alltoallv_=pmpi_alltoallv_
void  (*INTERFACE_F_LOCAL_MPI_Alltoallv)(void *,int *,int *,int *,void *,int *,int *,int *,int *,int *);

void pmpi_alltoallv_(void * sendbuf,int * sendcounts,int * sdispls,int * sendtype,void * recvbuf,int * recvcounts,int * rdispls,int * recvtype,int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Alltoallv(sendbuf, sendcounts, sdispls,sendtype,recvbuf, recvcounts, rdispls,recvtype,comm, ret);
}

void  mpi_reduce_(void * sendbuf,void * recvbuf,int * count,int * datatype,int * op,int * root,int * comm,int * ret);
#pragma weak mpi_reduce_=pmpi_reduce_
void  (*INTERFACE_F_LOCAL_MPI_Reduce)(void *,void *,int *,int *,int *,int *,int *,int *);

void pmpi_reduce_(void * sendbuf,void * recvbuf,int * count,int * datatype,int * op,int * root,int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Reduce(sendbuf,recvbuf, count,datatype,op, root,comm, ret);
}

void  mpi_op_create_(void * user_fn,int * commute,int * op,int * ret);
#pragma weak mpi_op_create_=pmpi_op_create_
void  (*INTERFACE_F_LOCAL_MPI_Op_create)(void *,int *,int *,int *);

void pmpi_op_create_(void * user_fn,int * commute,int * op,int * ret){

return  INTERFACE_F_LOCAL_MPI_Op_create(user_fn, commute,op, ret);
}

void  mpi_op_free_(int * op,int * ret);
#pragma weak mpi_op_free_=pmpi_op_free_
void  (*INTERFACE_F_LOCAL_MPI_Op_free)(int *,int *);

void pmpi_op_free_(int * op,int * ret){

return  INTERFACE_F_LOCAL_MPI_Op_free(op, ret);
}

void  mpi_allreduce_(void * sendbuf,void * recvbuf,int * count,int * datatype,int * op,int * comm,int * ret);
#pragma weak mpi_allreduce_=pmpi_allreduce_
void  (*INTERFACE_F_LOCAL_MPI_Allreduce)(void *,void *,int *,int *,int *,int *,int *);

void pmpi_allreduce_(void * sendbuf,void * recvbuf,int * count,int * datatype,int * op,int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Allreduce(sendbuf,recvbuf, count,datatype,op,comm, ret);
}

void  mpi_scan_(void * sendbuf,void * recvbuf,int * count,int * datatype,int * op,int * comm,int * ret);
#pragma weak mpi_scan_=pmpi_scan_
void  (*INTERFACE_F_LOCAL_MPI_Scan)(void *,void *,int *,int *,int *,int *,int *);

void pmpi_scan_(void * sendbuf,void * recvbuf,int * count,int * datatype,int * op,int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Scan(sendbuf,recvbuf, count,datatype,op,comm, ret);
}

void  mpi_group_size_(int * group,int * size,int * ret);
#pragma weak mpi_group_size_=pmpi_group_size_
void  (*INTERFACE_F_LOCAL_MPI_Group_size)(int *,int *,int *);

void pmpi_group_size_(int * group,int * size,int * ret){

return  INTERFACE_F_LOCAL_MPI_Group_size(group, size, ret);
}

void  mpi_group_rank_(int * group,int * rank,int * ret);
#pragma weak mpi_group_rank_=pmpi_group_rank_
void  (*INTERFACE_F_LOCAL_MPI_Group_rank)(int *,int *,int *);

void pmpi_group_rank_(int * group,int * rank,int * ret){

return  INTERFACE_F_LOCAL_MPI_Group_rank(group, rank, ret);
}

void  mpi_group_compare_(int * group1,int * group2,int * result,int * ret);
#pragma weak mpi_group_compare_=pmpi_group_compare_
void  (*INTERFACE_F_LOCAL_MPI_Group_compare)(int *,int *,int *,int *);

void pmpi_group_compare_(int * group1,int * group2,int * result,int * ret){

return  INTERFACE_F_LOCAL_MPI_Group_compare(group1,group2, result, ret);
}

void  mpi_comm_group_(int * comm,int * group,int * ret);
#pragma weak mpi_comm_group_=pmpi_comm_group_
void  (*INTERFACE_F_LOCAL_MPI_Comm_group)(int *,int *,int *);

void pmpi_comm_group_(int * comm,int * group,int * ret){

return  INTERFACE_F_LOCAL_MPI_Comm_group(comm,group, ret);
}

void  mpi_group_union_(int * group1,int * group2,int * newgroup,int * ret);
#pragma weak mpi_group_union_=pmpi_group_union_
void  (*INTERFACE_F_LOCAL_MPI_Group_union)(int *,int *,int *,int *);

void pmpi_group_union_(int * group1,int * group2,int * newgroup,int * ret){

return  INTERFACE_F_LOCAL_MPI_Group_union(group1,group2,newgroup, ret);
}

void  mpi_group_intersection_(int * group1,int * group2,int * newgroup,int * ret);
#pragma weak mpi_group_intersection_=pmpi_group_intersection_
void  (*INTERFACE_F_LOCAL_MPI_Group_intersection)(int *,int *,int *,int *);

void pmpi_group_intersection_(int * group1,int * group2,int * newgroup,int * ret){

return  INTERFACE_F_LOCAL_MPI_Group_intersection(group1,group2,newgroup, ret);
}

void  mpi_group_difference_(int * group1,int * group2,int * newgroup,int * ret);
#pragma weak mpi_group_difference_=pmpi_group_difference_
void  (*INTERFACE_F_LOCAL_MPI_Group_difference)(int *,int *,int *,int *);

void pmpi_group_difference_(int * group1,int * group2,int * newgroup,int * ret){

return  INTERFACE_F_LOCAL_MPI_Group_difference(group1,group2,newgroup, ret);
}

void  mpi_group_free_(int * group,int * ret);
#pragma weak mpi_group_free_=pmpi_group_free_
void  (*INTERFACE_F_LOCAL_MPI_Group_free)(int *,int *);

void pmpi_group_free_(int * group,int * ret){

return  INTERFACE_F_LOCAL_MPI_Group_free(group, ret);
}

void  mpi_comm_size_(int * comm,int * size,int * ret);
#pragma weak mpi_comm_size_=pmpi_comm_size_
void  (*INTERFACE_F_LOCAL_MPI_Comm_size)(int *,int *,int *);

void pmpi_comm_size_(int * comm,int * size,int * ret){

return  INTERFACE_F_LOCAL_MPI_Comm_size(comm, size, ret);
}

void  mpi_comm_rank_(int * comm,int * rank,int * ret);
#pragma weak mpi_comm_rank_=pmpi_comm_rank_
void  (*INTERFACE_F_LOCAL_MPI_Comm_rank)(int *,int *,int *);

void pmpi_comm_rank_(int * comm,int * rank,int * ret){

return  INTERFACE_F_LOCAL_MPI_Comm_rank(comm, rank, ret);
}

void  mpi_comm_compare_(int * comm1,int * comm2,int * result,int * ret);
#pragma weak mpi_comm_compare_=pmpi_comm_compare_
void  (*INTERFACE_F_LOCAL_MPI_Comm_compare)(int *,int *,int *,int *);

void pmpi_comm_compare_(int * comm1,int * comm2,int * result,int * ret){

return  INTERFACE_F_LOCAL_MPI_Comm_compare(comm1,comm2, result, ret);
}

void  mpi_comm_dup_(int * comm,int * newcomm,int * ret);
#pragma weak mpi_comm_dup_=pmpi_comm_dup_
void  (*INTERFACE_F_LOCAL_MPI_Comm_dup)(int *,int *,int *);

void pmpi_comm_dup_(int * comm,int * newcomm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Comm_dup(comm,newcomm, ret);
}

void  mpi_comm_create_(int * comm,int * group,int * newcomm,int * ret);
#pragma weak mpi_comm_create_=pmpi_comm_create_
void  (*INTERFACE_F_LOCAL_MPI_Comm_create)(int *,int *,int *,int *);

void pmpi_comm_create_(int * comm,int * group,int * newcomm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Comm_create(comm,group,newcomm, ret);
}

void  mpi_comm_split_(int * comm,int * color,int * key,int * newcomm,int * ret);
#pragma weak mpi_comm_split_=pmpi_comm_split_
void  (*INTERFACE_F_LOCAL_MPI_Comm_split)(int *,int *,int *,int *,int *);

void pmpi_comm_split_(int * comm,int * color,int * key,int * newcomm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Comm_split(comm, color, key,newcomm, ret);
}

void  mpi_comm_free_(int * comm,int * ret);
#pragma weak mpi_comm_free_=pmpi_comm_free_
void  (*INTERFACE_F_LOCAL_MPI_Comm_free)(int *,int *);

void pmpi_comm_free_(int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Comm_free(comm, ret);
}

void  mpi_comm_test_inter_(int * comm,int * flag,int * ret);
#pragma weak mpi_comm_test_inter_=pmpi_comm_test_inter_
void  (*INTERFACE_F_LOCAL_MPI_Comm_test_inter)(int *,int *,int *);

void pmpi_comm_test_inter_(int * comm,int * flag,int * ret){

return  INTERFACE_F_LOCAL_MPI_Comm_test_inter(comm, flag, ret);
}

void  mpi_comm_remote_size_(int * comm,int * size,int * ret);
#pragma weak mpi_comm_remote_size_=pmpi_comm_remote_size_
void  (*INTERFACE_F_LOCAL_MPI_Comm_remote_size)(int *,int *,int *);

void pmpi_comm_remote_size_(int * comm,int * size,int * ret){

return  INTERFACE_F_LOCAL_MPI_Comm_remote_size(comm, size, ret);
}

void  mpi_comm_remote_group_(int * comm,int * group,int * ret);
#pragma weak mpi_comm_remote_group_=pmpi_comm_remote_group_
void  (*INTERFACE_F_LOCAL_MPI_Comm_remote_group)(int *,int *,int *);

void pmpi_comm_remote_group_(int * comm,int * group,int * ret){

return  INTERFACE_F_LOCAL_MPI_Comm_remote_group(comm,group, ret);
}

void  mpi_intercomm_create_(int * local_comm,int * local_leader,int * peer_comm,int * remote_leader,int * tag,int * newintercomm,int * ret);
#pragma weak mpi_intercomm_create_=pmpi_intercomm_create_
void  (*INTERFACE_F_LOCAL_MPI_Intercomm_create)(int *,int *,int *,int *,int *,int *,int *);

void pmpi_intercomm_create_(int * local_comm,int * local_leader,int * peer_comm,int * remote_leader,int * tag,int * newintercomm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Intercomm_create(local_comm, local_leader,peer_comm, remote_leader,tag,newintercomm, ret);
}

void  mpi_intercomm_merge_(int * intercomm,int * high,int * newintracomm,int * ret);
#pragma weak mpi_intercomm_merge_=pmpi_intercomm_merge_
void  (*INTERFACE_F_LOCAL_MPI_Intercomm_merge)(int *,int *,int *,int *);

void pmpi_intercomm_merge_(int * intercomm,int * high,int * newintracomm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Intercomm_merge(intercomm, high,newintracomm, ret);
}

void  mpi_keyval_create_(void * copy_fn,void * delete_fn,int * keyval,void * extra_state,int * ret);
#pragma weak mpi_keyval_create_=pmpi_keyval_create_
void  (*INTERFACE_F_LOCAL_MPI_Keyval_create)(void *,void *,int *,void *,int *);

void pmpi_keyval_create_(void * copy_fn,void * delete_fn,int * keyval,void * extra_state,int * ret){

return  INTERFACE_F_LOCAL_MPI_Keyval_create(copy_fn,delete_fn, keyval,extra_state, ret);
}

void  mpi_keyval_free_(int * keyval,int * ret);
#pragma weak mpi_keyval_free_=pmpi_keyval_free_
void  (*INTERFACE_F_LOCAL_MPI_Keyval_free)(int *,int *);

void pmpi_keyval_free_(int * keyval,int * ret){

return  INTERFACE_F_LOCAL_MPI_Keyval_free( keyval, ret);
}

void  mpi_attr_put_(int * comm,int * keyval,int * attribute_val,int * ret);
#pragma weak mpi_attr_put_=pmpi_attr_put_
void  (*INTERFACE_F_LOCAL_MPI_Attr_put)(int *,int *,int *,int *);

void pmpi_attr_put_(int * comm,int * keyval,int * attribute_val,int * ret){

return  INTERFACE_F_LOCAL_MPI_Attr_put(comm, keyval, attribute_val, ret);
}

void  mpi_attr_get_(int * comm,int * keyval,int * attribute_val,int * flag,int * ret);
#pragma weak mpi_attr_get_=pmpi_attr_get_
void  (*INTERFACE_F_LOCAL_MPI_Attr_get)(int *,int *,int *,int *,int *);

void pmpi_attr_get_(int * comm,int * keyval,int * attribute_val,int * flag,int * ret){

return  INTERFACE_F_LOCAL_MPI_Attr_get(comm,keyval, attribute_val, flag, ret);
}

void  mpi_attr_delete_(int * comm,int * keyval,int * ret);
#pragma weak mpi_attr_delete_=pmpi_attr_delete_
void  (*INTERFACE_F_LOCAL_MPI_Attr_delete)(int *,int *,int *);

void pmpi_attr_delete_(int * comm,int * keyval,int * ret){

return  INTERFACE_F_LOCAL_MPI_Attr_delete(comm,keyval, ret);
}

void  mpi_topo_test_(int * comm,int * status,int * ret);
#pragma weak mpi_topo_test_=pmpi_topo_test_
void  (*INTERFACE_F_LOCAL_MPI_Topo_test)(int *,int *,int *);

void pmpi_topo_test_(int * comm,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_Topo_test(comm,status, ret);
}

void  mpi_graphdims_get_(int * comm,int * nnodes,int * nedges,int * ret);
#pragma weak mpi_graphdims_get_=pmpi_graphdims_get_
void  (*INTERFACE_F_LOCAL_MPI_Graphdims_get)(int *,int *,int *,int *);

void pmpi_graphdims_get_(int * comm,int * nnodes,int * nedges,int * ret){

return  INTERFACE_F_LOCAL_MPI_Graphdims_get(comm, nnodes, nedges, ret);
}

void  mpi_cartdim_get_(int * comm,int * ndims,int * ret);
#pragma weak mpi_cartdim_get_=pmpi_cartdim_get_
void  (*INTERFACE_F_LOCAL_MPI_Cartdim_get)(int *,int *,int *);

void pmpi_cartdim_get_(int * comm,int * ndims,int * ret){

return  INTERFACE_F_LOCAL_MPI_Cartdim_get(comm, ndims, ret);
}

void  mpi_graph_neighbors_count_(int * comm,int * rank,int * nneighbors,int * ret);
#pragma weak mpi_graph_neighbors_count_=pmpi_graph_neighbors_count_
void  (*INTERFACE_F_LOCAL_MPI_Graph_neighbors_count)(int *,int *,int *,int *);

void pmpi_graph_neighbors_count_(int * comm,int * rank,int * nneighbors,int * ret){

return  INTERFACE_F_LOCAL_MPI_Graph_neighbors_count(comm, rank, nneighbors, ret);
}

void  mpi_cart_shift_(int * comm,int * direction,int * disp,int * rank_source,int * rank_dest,int * ret);
#pragma weak mpi_cart_shift_=pmpi_cart_shift_
void  (*INTERFACE_F_LOCAL_MPI_Cart_shift)(int *,int *,int *,int *,int *,int *);

void pmpi_cart_shift_(int * comm,int * direction,int * disp,int * rank_source,int * rank_dest,int * ret){

return  INTERFACE_F_LOCAL_MPI_Cart_shift(comm, direction, disp, rank_source, rank_dest, ret);
}

void  mpi_get_version_(int * version,int * subversion,int * ret);
#pragma weak mpi_get_version_=pmpi_get_version_
void  (*INTERFACE_F_LOCAL_MPI_Get_version)(int *,int *,int *);

void pmpi_get_version_(int * version,int * subversion,int * ret){

return  INTERFACE_F_LOCAL_MPI_Get_version( version, subversion, ret);
}

void  mpi_errhandler_create_(void * function,int * errhandler,int * ret);
#pragma weak mpi_errhandler_create_=pmpi_errhandler_create_
void  (*INTERFACE_F_LOCAL_MPI_Errhandler_create)(void *,int *,int *);

void pmpi_errhandler_create_(void * function,int * errhandler,int * ret){

return  INTERFACE_F_LOCAL_MPI_Errhandler_create(function,errhandler, ret);
}

void  mpi_errhandler_set_(int * comm,int * errhandler,int * ret);
#pragma weak mpi_errhandler_set_=pmpi_errhandler_set_
void  (*INTERFACE_F_LOCAL_MPI_Errhandler_set)(int *,int *,int *);

void pmpi_errhandler_set_(int * comm,int * errhandler,int * ret){

return  INTERFACE_F_LOCAL_MPI_Errhandler_set(comm,errhandler, ret);
}

void  mpi_errhandler_get_(int * comm,int * errhandler,int * ret);
#pragma weak mpi_errhandler_get_=pmpi_errhandler_get_
void  (*INTERFACE_F_LOCAL_MPI_Errhandler_get)(int *,int *,int *);

void pmpi_errhandler_get_(int * comm,int * errhandler,int * ret){

return  INTERFACE_F_LOCAL_MPI_Errhandler_get(comm,errhandler, ret);
}

void  mpi_errhandler_free_(int * errhandler,int * ret);
#pragma weak mpi_errhandler_free_=pmpi_errhandler_free_
void  (*INTERFACE_F_LOCAL_MPI_Errhandler_free)(int *,int *);

void pmpi_errhandler_free_(int * errhandler,int * ret){

return  INTERFACE_F_LOCAL_MPI_Errhandler_free(errhandler, ret);
}

void  mpi_error_class_(int * errorcode,int * errorclass,int * ret);
#pragma weak mpi_error_class_=pmpi_error_class_
void  (*INTERFACE_F_LOCAL_MPI_Error_class)(int *,int *,int *);

void pmpi_error_class_(int * errorcode,int * errorclass,int * ret){

return  INTERFACE_F_LOCAL_MPI_Error_class(errorcode, errorclass, ret);
}

void  mpi_initialized_(int * flag,int * ret);
#pragma weak mpi_initialized_=pmpi_initialized_
void  (*INTERFACE_F_LOCAL_MPI_Initialized)(int *,int *);

void pmpi_initialized_(int * flag,int * ret){

return  INTERFACE_F_LOCAL_MPI_Initialized( flag, ret);
}

void  mpi_abort_(int * comm,int * errorcode,int * ret);
#pragma weak mpi_abort_=pmpi_abort_
void  (*INTERFACE_F_LOCAL_MPI_Abort)(int *,int *,int *);

void pmpi_abort_(int * comm,int * errorcode,int * ret){

return  INTERFACE_F_LOCAL_MPI_Abort(comm,errorcode, ret);
}

void  mpi_init_(int * ret);
#pragma weak mpi_init_=pmpi_init_
void  (*INTERFACE_F_LOCAL_MPI_Init)(int *);

void pmpi_init_(int * ret){

return  INTERFACE_F_LOCAL_MPI_Init( ret);
}

void  mpi_file_get_errhandler_(int * file,int * errhandler,int * ret);
#pragma weak mpi_file_get_errhandler_=pmpi_file_get_errhandler_
void  (*INTERFACE_F_LOCAL_MPI_File_get_errhandler)(int *,int *,int *);

void pmpi_file_get_errhandler_(int * file,int * errhandler,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_get_errhandler( file,errhandler, ret);
}

void  mpi_file_set_errhandler_(int * file,int * errhandler,int * ret);
#pragma weak mpi_file_set_errhandler_=pmpi_file_set_errhandler_
void  (*INTERFACE_F_LOCAL_MPI_File_set_errhandler)(int *,int *,int *);

void pmpi_file_set_errhandler_(int * file,int * errhandler,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_set_errhandler( file,errhandler, ret);
}

void  mpi_info_create_(int * info,int * ret);
#pragma weak mpi_info_create_=pmpi_info_create_
void  (*INTERFACE_F_LOCAL_MPI_Info_create)(int *,int *);

void pmpi_info_create_(int * info,int * ret){

return  INTERFACE_F_LOCAL_MPI_Info_create(info, ret);
}

void  mpi_info_dup_(int * info,int * newinfo,int * ret);
#pragma weak mpi_info_dup_=pmpi_info_dup_
void  (*INTERFACE_F_LOCAL_MPI_Info_dup)(int *,int *,int *);

void pmpi_info_dup_(int * info,int * newinfo,int * ret){

return  INTERFACE_F_LOCAL_MPI_Info_dup(info,newinfo, ret);
}

void  mpi_info_free_(int * info,int * ret);
#pragma weak mpi_info_free_=pmpi_info_free_
void  (*INTERFACE_F_LOCAL_MPI_Info_free)(int *,int *);

void pmpi_info_free_(int * info,int * ret){

return  INTERFACE_F_LOCAL_MPI_Info_free(info, ret);
}

void  mpi_info_get_nkeys_(int * info,int * nkeys,int * ret);
#pragma weak mpi_info_get_nkeys_=pmpi_info_get_nkeys_
void  (*INTERFACE_F_LOCAL_MPI_Info_get_nkeys)(int *,int *,int *);

void pmpi_info_get_nkeys_(int * info,int * nkeys,int * ret){

return  INTERFACE_F_LOCAL_MPI_Info_get_nkeys(info, nkeys, ret);
}

void  mpi_request_get_status_(int * request,int * flag,int * status,int * ret);
#pragma weak mpi_request_get_status_=pmpi_request_get_status_
void  (*INTERFACE_F_LOCAL_MPI_Request_get_status)(int *,int *,int *,int *);

void pmpi_request_get_status_(int * request,int * flag,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_Request_get_status(request, flag,status, ret);
}

void  mpi_type_create_hvector_(int * count,int * blocklength,size_t * stride,int * oldtype,int * newtype,int * ret);
#pragma weak mpi_type_create_hvector_=pmpi_type_create_hvector_
void  (*INTERFACE_F_LOCAL_MPI_Type_create_hvector)(int *,int *,size_t *,int *,int *,int *);

void pmpi_type_create_hvector_(int * count,int * blocklength,size_t * stride,int * oldtype,int * newtype,int * ret){

return  INTERFACE_F_LOCAL_MPI_Type_create_hvector( count, blocklength, stride,oldtype,newtype, ret);
}

void  mpi_type_get_extent_(int * datatype,size_t * lb,size_t * extent,int * ret);
#pragma weak mpi_type_get_extent_=pmpi_type_get_extent_
void  (*INTERFACE_F_LOCAL_MPI_Type_get_extent)(int *,size_t *,size_t *,int *);

void pmpi_type_get_extent_(int * datatype,size_t * lb,size_t * extent,int * ret){

return  INTERFACE_F_LOCAL_MPI_Type_get_extent(datatype, lb, extent, ret);
}

void  mpi_file_close_(int * fh,int * ret);
#pragma weak mpi_file_close_=pmpi_file_close_
void  (*INTERFACE_F_LOCAL_MPI_File_close)(int *,int *);

void pmpi_file_close_(int * fh,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_close( fh, ret);
}

void  mpi_file_set_size_(int * fh,int* size,int * ret);
#pragma weak mpi_file_set_size_=pmpi_file_set_size_
void  (*INTERFACE_F_LOCAL_MPI_File_set_size)(int *,int*,int *);

void pmpi_file_set_size_(int * fh,int* size,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_set_size( fh, size, ret);
}

void  mpi_file_preallocate_(int * fh,int* size,int * ret);
#pragma weak mpi_file_preallocate_=pmpi_file_preallocate_
void  (*INTERFACE_F_LOCAL_MPI_File_preallocate)(int *,int*,int *);

void pmpi_file_preallocate_(int * fh,int* size,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_preallocate( fh, size, ret);
}

void  mpi_file_get_size_(int * fh,int* size,int * ret);
#pragma weak mpi_file_get_size_=pmpi_file_get_size_
void  (*INTERFACE_F_LOCAL_MPI_File_get_size)(int *,int*,int *);

void pmpi_file_get_size_(int * fh,int* size,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_get_size( fh, size, ret);
}

void  mpi_file_get_group_(int * fh,int * group,int * ret);
#pragma weak mpi_file_get_group_=pmpi_file_get_group_
void  (*INTERFACE_F_LOCAL_MPI_File_get_group)(int *,int *,int *);

void pmpi_file_get_group_(int * fh,int * group,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_get_group( fh,group, ret);
}

void  mpi_file_get_amode_(int * fh,int * amode,int * ret);
#pragma weak mpi_file_get_amode_=pmpi_file_get_amode_
void  (*INTERFACE_F_LOCAL_MPI_File_get_amode)(int *,int *,int *);

void pmpi_file_get_amode_(int * fh,int * amode,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_get_amode( fh, amode, ret);
}

void  mpi_file_set_info_(int * fh,int * info,int * ret);
#pragma weak mpi_file_set_info_=pmpi_file_set_info_
void  (*INTERFACE_F_LOCAL_MPI_File_set_info)(int *,int *,int *);

void pmpi_file_set_info_(int * fh,int * info,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_set_info( fh,info, ret);
}

void  mpi_file_get_info_(int * fh,int * info_used,int * ret);
#pragma weak mpi_file_get_info_=pmpi_file_get_info_
void  (*INTERFACE_F_LOCAL_MPI_File_get_info)(int *,int *,int *);

void pmpi_file_get_info_(int * fh,int * info_used,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_get_info( fh,info_used, ret);
}

void  mpi_file_read_at_(int * fh,int* offset,void * buf,int * count,int * datatype,int * status,int * ret);
#pragma weak mpi_file_read_at_=pmpi_file_read_at_
void  (*INTERFACE_F_LOCAL_MPI_File_read_at)(int *,int*,void *,int *,int *,int *,int *);

void pmpi_file_read_at_(int * fh,int* offset,void * buf,int * count,int * datatype,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_read_at( fh, offset,buf, count,datatype,status, ret);
}

void  mpi_file_read_at_all_(int * fh,int* offset,void *  buf,int * count,int * datatype,int * status,int * ret);
#pragma weak mpi_file_read_at_all_=pmpi_file_read_at_all_
void  (*INTERFACE_F_LOCAL_MPI_File_read_at_all)(int *,int*,void *,int *,int *,int *,int *);

void pmpi_file_read_at_all_(int * fh,int* offset,void *  buf,int * count,int * datatype,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_read_at_all( fh, offset, buf, count,datatype,status, ret);
}

void  mpi_file_write_at_(int * fh,int* offset,void *  buf,int * count,int * datatype,int * status,int * ret);
#pragma weak mpi_file_write_at_=pmpi_file_write_at_
void  (*INTERFACE_F_LOCAL_MPI_File_write_at)(int *,int*,void *,int *,int *,int *,int *);

void pmpi_file_write_at_(int * fh,int* offset,void *  buf,int * count,int * datatype,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_write_at( fh, offset, buf, count,datatype,status, ret);
}

void  mpi_file_write_at_all_(int * fh,int* offset,void * buf,int * count,int * datatype,int * status,int * ret);
#pragma weak mpi_file_write_at_all_=pmpi_file_write_at_all_
void  (*INTERFACE_F_LOCAL_MPI_File_write_at_all)(int *,int*,void *,int *,int *,int *,int *);

void pmpi_file_write_at_all_(int * fh,int* offset,void * buf,int * count,int * datatype,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_write_at_all( fh, offset,buf, count,datatype,status, ret);
}

void  mpi_file_iread_at_(int * fh,int* offset,void * buf,int * count,int * datatype,int * request,int * ret);
#pragma weak mpi_file_iread_at_=pmpi_file_iread_at_
void  (*INTERFACE_F_LOCAL_MPI_File_iread_at)(int *,int*,void *,int *,int *,int *,int *);

void pmpi_file_iread_at_(int * fh,int* offset,void * buf,int * count,int * datatype,int * request,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_iread_at( fh, offset,buf, count,datatype,request, ret);
}

void  mpi_file_iwrite_at_(int * fh,int* offset,void * buf,int * count,int * datatype,int * request,int * ret);
#pragma weak mpi_file_iwrite_at_=pmpi_file_iwrite_at_
void  (*INTERFACE_F_LOCAL_MPI_File_iwrite_at)(int *,int*,void *,int *,int *,int *,int *);

void pmpi_file_iwrite_at_(int * fh,int* offset,void * buf,int * count,int * datatype,int * request,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_iwrite_at( fh, offset,buf, count,datatype,request, ret);
}

void  mpi_file_read_(int * fh,void * buf,int * count,int * datatype,int * status,int * ret);
#pragma weak mpi_file_read_=pmpi_file_read_
void  (*INTERFACE_F_LOCAL_MPI_File_read)(int *,void *,int *,int *,int *,int *);

void pmpi_file_read_(int * fh,void * buf,int * count,int * datatype,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_read( fh,buf, count,datatype,status, ret);
}

void  mpi_file_read_all_(int * fh,void * buf,int * count,int * datatype,int * status,int * ret);
#pragma weak mpi_file_read_all_=pmpi_file_read_all_
void  (*INTERFACE_F_LOCAL_MPI_File_read_all)(int *,void *,int *,int *,int *,int *);

void pmpi_file_read_all_(int * fh,void * buf,int * count,int * datatype,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_read_all( fh,buf, count,datatype,status, ret);
}

void  mpi_file_write_(int * fh,void * buf,int * count,int * datatype,int * status,int * ret);
#pragma weak mpi_file_write_=pmpi_file_write_
void  (*INTERFACE_F_LOCAL_MPI_File_write)(int *,void *,int *,int *,int *,int *);

void pmpi_file_write_(int * fh,void * buf,int * count,int * datatype,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_write( fh,buf, count,datatype,status, ret);
}

void  mpi_file_write_all_(int * fh,void * buf,int * count,int * datatype,int * status,int * ret);
#pragma weak mpi_file_write_all_=pmpi_file_write_all_
void  (*INTERFACE_F_LOCAL_MPI_File_write_all)(int *,void *,int *,int *,int *,int *);

void pmpi_file_write_all_(int * fh,void * buf,int * count,int * datatype,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_write_all( fh,buf, count,datatype,status, ret);
}

void  mpi_file_iread_(int * fh,void * buf,int * count,int * datatype,int * request,int * ret);
#pragma weak mpi_file_iread_=pmpi_file_iread_
void  (*INTERFACE_F_LOCAL_MPI_File_iread)(int *,void *,int *,int *,int *,int *);

void pmpi_file_iread_(int * fh,void * buf,int * count,int * datatype,int * request,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_iread( fh,buf, count,datatype,request, ret);
}

void  mpi_file_iwrite_(int * fh,void * buf,int * count,int * datatype,int * request,int * ret);
#pragma weak mpi_file_iwrite_=pmpi_file_iwrite_
void  (*INTERFACE_F_LOCAL_MPI_File_iwrite)(int *,void *,int *,int *,int *,int *);

void pmpi_file_iwrite_(int * fh,void * buf,int * count,int * datatype,int * request,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_iwrite( fh,buf,count,datatype,request, ret);
}

void  mpi_file_seek_(int * fh,int* offset,int * whence,int * ret);
#pragma weak mpi_file_seek_=pmpi_file_seek_
void  (*INTERFACE_F_LOCAL_MPI_File_seek)(int *,int*,int *,int *);

void pmpi_file_seek_(int * fh,int* offset,int * whence,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_seek( fh, offset, whence, ret);
}

void  mpi_file_get_position_(int * fh,int* offset,int * ret);
#pragma weak mpi_file_get_position_=pmpi_file_get_position_
void  (*INTERFACE_F_LOCAL_MPI_File_get_position)(int *,int*,int *);

void pmpi_file_get_position_(int * fh,int* offset,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_get_position( fh, offset, ret);
}

void  mpi_file_get_byte_offset_(int * fh,int* offset,int* disp,int * ret);
#pragma weak mpi_file_get_byte_offset_=pmpi_file_get_byte_offset_
void  (*INTERFACE_F_LOCAL_MPI_File_get_byte_offset)(int *,int*,int*,int *);

void pmpi_file_get_byte_offset_(int * fh,int* offset,int* disp,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_get_byte_offset( fh, offset, disp, ret);
}

void  mpi_file_read_shared_(int * fh,void * buf,int * count,int * datatype,int * status,int * ret);
#pragma weak mpi_file_read_shared_=pmpi_file_read_shared_
void  (*INTERFACE_F_LOCAL_MPI_File_read_shared)(int *,void *,int *,int *,int *,int *);

void pmpi_file_read_shared_(int * fh,void * buf,int * count,int * datatype,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_read_shared( fh,buf, count,datatype,status, ret);
}

void  mpi_file_write_shared_(int * fh,void * buf,int * count,int * datatype,int * status,int * ret);
#pragma weak mpi_file_write_shared_=pmpi_file_write_shared_
void  (*INTERFACE_F_LOCAL_MPI_File_write_shared)(int *,void *,int *,int *,int *,int *);

void pmpi_file_write_shared_(int * fh,void * buf,int * count,int * datatype,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_write_shared( fh,buf, count,datatype,status, ret);
}

void  mpi_file_iread_shared_(int * fh,void * buf,int * count,int * datatype,int * request,int * ret);
#pragma weak mpi_file_iread_shared_=pmpi_file_iread_shared_
void  (*INTERFACE_F_LOCAL_MPI_File_iread_shared)(int *,void *,int *,int *,int *,int *);

void pmpi_file_iread_shared_(int * fh,void * buf,int * count,int * datatype,int * request,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_iread_shared( fh,buf, count,datatype,request, ret);
}

void  mpi_file_iwrite_shared_(int * fh,void * buf,int * count,int * datatype,int * request,int * ret);
#pragma weak mpi_file_iwrite_shared_=pmpi_file_iwrite_shared_
void  (*INTERFACE_F_LOCAL_MPI_File_iwrite_shared)(int *,void *,int *,int *,int *,int *);

void pmpi_file_iwrite_shared_(int * fh,void * buf,int * count,int * datatype,int * request,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_iwrite_shared( fh,buf, count,datatype,request, ret);
}

void  mpi_file_read_ordered_(int * fh,void * buf,int * count,int * datatype,int * status,int * ret);
#pragma weak mpi_file_read_ordered_=pmpi_file_read_ordered_
void  (*INTERFACE_F_LOCAL_MPI_File_read_ordered)(int *,void *,int *,int *,int *,int *);

void pmpi_file_read_ordered_(int * fh,void * buf,int * count,int * datatype,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_read_ordered( fh,buf, count,datatype,status, ret);
}

void  mpi_file_write_ordered_(int * fh,void * buf,int * count,int * datatype,int * status,int * ret);
#pragma weak mpi_file_write_ordered_=pmpi_file_write_ordered_
void  (*INTERFACE_F_LOCAL_MPI_File_write_ordered)(int *,void *,int *,int *,int *,int *);

void pmpi_file_write_ordered_(int * fh,void * buf,int * count,int * datatype,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_write_ordered( fh,buf, count,datatype,status, ret);
}

void  mpi_file_seek_shared_(int * fh,int* offset,int * whence,int * ret);
#pragma weak mpi_file_seek_shared_=pmpi_file_seek_shared_
void  (*INTERFACE_F_LOCAL_MPI_File_seek_shared)(int *,int*,int *,int *);

void pmpi_file_seek_shared_(int * fh,int* offset,int * whence,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_seek_shared( fh, offset, whence, ret);
}

void  mpi_file_get_position_shared_(int * fh,int* offset,int * ret);
#pragma weak mpi_file_get_position_shared_=pmpi_file_get_position_shared_
void  (*INTERFACE_F_LOCAL_MPI_File_get_position_shared)(int *,int*,int *);

void pmpi_file_get_position_shared_(int * fh,int* offset,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_get_position_shared( fh, offset, ret);
}

void  mpi_file_read_at_all_begin_(int * fh,int* offset,void * buf,int * count,int * datatype,int * ret);
#pragma weak mpi_file_read_at_all_begin_=pmpi_file_read_at_all_begin_
void  (*INTERFACE_F_LOCAL_MPI_File_read_at_all_begin)(int *,int*,void *,int *,int *,int *);

void pmpi_file_read_at_all_begin_(int * fh,int* offset,void * buf,int * count,int * datatype,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_read_at_all_begin( fh, offset,buf, count,datatype, ret);
}

void  mpi_file_read_at_all_end_(int * fh,void * buf,int * status,int * ret);
#pragma weak mpi_file_read_at_all_end_=pmpi_file_read_at_all_end_
void  (*INTERFACE_F_LOCAL_MPI_File_read_at_all_end)(int *,void *,int *,int *);

void pmpi_file_read_at_all_end_(int * fh,void * buf,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_read_at_all_end( fh,buf,status, ret);
}

void  mpi_file_write_at_all_begin_(int * fh,int* offset,void * buf,int * count,int * datatype,int * ret);
#pragma weak mpi_file_write_at_all_begin_=pmpi_file_write_at_all_begin_
void  (*INTERFACE_F_LOCAL_MPI_File_write_at_all_begin)(int *,int*,void *,int *,int *,int *);

void pmpi_file_write_at_all_begin_(int * fh,int* offset,void * buf,int * count,int * datatype,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_write_at_all_begin( fh, offset,buf, count,datatype, ret);
}

void  mpi_file_write_at_all_end_(int * fh,void * buf,int * status,int * ret);
#pragma weak mpi_file_write_at_all_end_=pmpi_file_write_at_all_end_
void  (*INTERFACE_F_LOCAL_MPI_File_write_at_all_end)(int *,void *,int *,int *);

void pmpi_file_write_at_all_end_(int * fh,void * buf,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_write_at_all_end( fh,buf,status, ret);
}

void  mpi_file_read_all_begin_(int * fh,void * buf,int * count,int * datatype,int * ret);
#pragma weak mpi_file_read_all_begin_=pmpi_file_read_all_begin_
void  (*INTERFACE_F_LOCAL_MPI_File_read_all_begin)(int *,void *,int *,int *,int *);

void pmpi_file_read_all_begin_(int * fh,void * buf,int * count,int * datatype,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_read_all_begin( fh,buf, count,datatype, ret);
}

void  mpi_file_read_all_end_(int * fh,void * buf,int * status,int * ret);
#pragma weak mpi_file_read_all_end_=pmpi_file_read_all_end_
void  (*INTERFACE_F_LOCAL_MPI_File_read_all_end)(int *,void *,int *,int *);

void pmpi_file_read_all_end_(int * fh,void * buf,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_read_all_end( fh,buf,status, ret);
}

void  mpi_file_write_all_begin_(int * fh,void * buf,int * count,int * datatype,int * ret);
#pragma weak mpi_file_write_all_begin_=pmpi_file_write_all_begin_
void  (*INTERFACE_F_LOCAL_MPI_File_write_all_begin)(int *,void *,int *,int *,int *);

void pmpi_file_write_all_begin_(int * fh,void * buf,int * count,int * datatype,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_write_all_begin( fh,buf,count,datatype, ret);
}

void  mpi_file_write_all_end_(int * fh,void * buf,int * status,int * ret);
#pragma weak mpi_file_write_all_end_=pmpi_file_write_all_end_
void  (*INTERFACE_F_LOCAL_MPI_File_write_all_end)(int *,void *,int *,int *);

void pmpi_file_write_all_end_(int * fh,void * buf,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_write_all_end( fh,buf,status, ret);
}

void  mpi_file_read_ordered_begin_(int * fh,void * buf,int * count,int * datatype,int * ret);
#pragma weak mpi_file_read_ordered_begin_=pmpi_file_read_ordered_begin_
void  (*INTERFACE_F_LOCAL_MPI_File_read_ordered_begin)(int *,void *,int *,int *,int *);

void pmpi_file_read_ordered_begin_(int * fh,void * buf,int * count,int * datatype,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_read_ordered_begin( fh,buf, count,datatype, ret);
}

void  mpi_file_read_ordered_end_(int * fh,void * buf,int * status,int * ret);
#pragma weak mpi_file_read_ordered_end_=pmpi_file_read_ordered_end_
void  (*INTERFACE_F_LOCAL_MPI_File_read_ordered_end)(int *,void *,int *,int *);

void pmpi_file_read_ordered_end_(int * fh,void * buf,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_read_ordered_end( fh,buf,status, ret);
}

void  mpi_file_write_ordered_begin_(int * fh,void * buf,int * count,int * datatype,int * ret);
#pragma weak mpi_file_write_ordered_begin_=pmpi_file_write_ordered_begin_
void  (*INTERFACE_F_LOCAL_MPI_File_write_ordered_begin)(int *,void *,int *,int *,int *);

void pmpi_file_write_ordered_begin_(int * fh,void * buf,int * count,int * datatype,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_write_ordered_begin( fh,buf, count,datatype, ret);
}

void  mpi_file_write_ordered_end_(int * fh,void * buf,int * status,int * ret);
#pragma weak mpi_file_write_ordered_end_=pmpi_file_write_ordered_end_
void  (*INTERFACE_F_LOCAL_MPI_File_write_ordered_end)(int *,void *,int *,int *);

void pmpi_file_write_ordered_end_(int * fh,void * buf,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_write_ordered_end( fh,buf,status, ret);
}

void  mpi_file_get_type_extent_(int * fh,int * datatype,size_t * extent,int * ret);
#pragma weak mpi_file_get_type_extent_=pmpi_file_get_type_extent_
void  (*INTERFACE_F_LOCAL_MPI_File_get_type_extent)(int *,int *,size_t *,int *);

void pmpi_file_get_type_extent_(int * fh,int * datatype,size_t * extent,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_get_type_extent( fh,datatype, extent, ret);
}

void  mpi_file_set_atomicity_(int * fh,int * flag,int * ret);
#pragma weak mpi_file_set_atomicity_=pmpi_file_set_atomicity_
void  (*INTERFACE_F_LOCAL_MPI_File_set_atomicity)(int *,int *,int *);

void pmpi_file_set_atomicity_(int * fh,int * flag,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_set_atomicity( fh, flag, ret);
}

void  mpi_file_get_atomicity_(int * fh,int * flag,int * ret);
#pragma weak mpi_file_get_atomicity_=pmpi_file_get_atomicity_
void  (*INTERFACE_F_LOCAL_MPI_File_get_atomicity)(int *,int *,int *);

void pmpi_file_get_atomicity_(int * fh,int * flag,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_get_atomicity( fh, flag, ret);
}

void  mpi_file_sync_(int * fh,int * ret);
#pragma weak mpi_file_sync_=pmpi_file_sync_
void  (*INTERFACE_F_LOCAL_MPI_File_sync)(int *,int *);

void pmpi_file_sync_(int * fh,int * ret){

return  INTERFACE_F_LOCAL_MPI_File_sync( fh, ret);
}

void  mpi_wtime_(double * ret);
#pragma weak mpi_wtime_=pmpi_wtime_
void  (*INTERFACE_F_LOCAL_MPI_Wtime)(double *);

void pmpi_wtime_(double * ret){

return  INTERFACE_F_LOCAL_MPI_Wtime( ret);
}

void  mpi_wtick_(double * ret);
#pragma weak mpi_wtick_=pmpi_wtick_
void  (*INTERFACE_F_LOCAL_MPI_Wtick)(double *);

void pmpi_wtick_(double * ret){

return  INTERFACE_F_LOCAL_MPI_Wtick( ret);
}

void  mpi_finalize_(int * ret);
#pragma weak mpi_finalize_=pmpi_finalize_
void  (*INTERFACE_F_LOCAL_MPI_Finalize)(int *);

void pmpi_finalize_(int * ret){

return  INTERFACE_F_LOCAL_MPI_Finalize( ret);
}

void  mpi_waitany_(int * count,int * array_of_requests,int * indx,int * status,int * ret);
#pragma weak mpi_waitany_=pmpi_waitany_
void  (*INTERFACE_F_LOCAL_MPI_Waitany)(int *,int *,int *,int *,int *);

void pmpi_waitany_(int * count,int * array_of_requests,int * indx,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_Waitany( count,array_of_requests, indx,status, ret);
}

void  mpi_testany_(int * count,int * array_of_requests,int * indx,int * flag,int * status,int * ret);
#pragma weak mpi_testany_=pmpi_testany_
void  (*INTERFACE_F_LOCAL_MPI_Testany)(int *,int *,int *,int *,int *,int *);

void pmpi_testany_(int * count,int * array_of_requests,int * indx,int * flag,int * status,int * ret){

return  INTERFACE_F_LOCAL_MPI_Testany( count,array_of_requests, indx, flag,status, ret);
}

void  mpi_waitall_(int * count,int * array_of_requests,int * array_of_statuses,int * ret);
#pragma weak mpi_waitall_=pmpi_waitall_
void  (*INTERFACE_F_LOCAL_MPI_Waitall)(int *,int *,int *,int *);

void pmpi_waitall_(int * count,int * array_of_requests,int * array_of_statuses,int * ret){

return  INTERFACE_F_LOCAL_MPI_Waitall( count,array_of_requests,array_of_statuses, ret);
}

void  mpi_testall_(int * count,int * array_of_requests,int * flag,int * array_of_statuses,int * ret);
#pragma weak mpi_testall_=pmpi_testall_
void  (*INTERFACE_F_LOCAL_MPI_Testall)(int *,int *,int *,int *,int *);

void pmpi_testall_(int * count,int * array_of_requests,int * flag,int * array_of_statuses,int * ret){

return  INTERFACE_F_LOCAL_MPI_Testall( count,array_of_requests, flag,array_of_statuses, ret);
}

void  mpi_waitsome_(int * incount,int * array_of_requests,int * outcount,int * array_of_indices,int * array_of_statuses,int * ret);
#pragma weak mpi_waitsome_=pmpi_waitsome_
void  (*INTERFACE_F_LOCAL_MPI_Waitsome)(int *,int *,int *,int *,int *,int *);

void pmpi_waitsome_(int * incount,int * array_of_requests,int * outcount,int * array_of_indices,int * array_of_statuses,int * ret){

return  INTERFACE_F_LOCAL_MPI_Waitsome( incount,array_of_requests, outcount, array_of_indices,array_of_statuses, ret);
}

void  mpi_testsome_(int * incount,int * array_of_requests,int * outcount,int * array_of_indices,int * array_of_statuses,int * ret);
#pragma weak mpi_testsome_=pmpi_testsome_
void  (*INTERFACE_F_LOCAL_MPI_Testsome)(int *,int *,int *,int *,int *,int *);

void pmpi_testsome_(int * incount,int * array_of_requests,int * outcount,int * array_of_indices,int * array_of_statuses,int * ret){

return  INTERFACE_F_LOCAL_MPI_Testsome( incount,array_of_requests, outcount, array_of_indices,array_of_statuses, ret);
}

void  mpi_startall_(int * count,int * array_of_requests,int * ret);
#pragma weak mpi_startall_=pmpi_startall_
void  (*INTERFACE_F_LOCAL_MPI_Startall)(int *,int *,int *);

void pmpi_startall_(int * count,int * array_of_requests,int * ret){

return  INTERFACE_F_LOCAL_MPI_Startall( count,array_of_requests, ret);
}

void  mpi_reduce_scatter_(void * sendbuf,void * recvbuf,int * recvcounts,int * datatype,int * op,int * comm,int * ret);
#pragma weak mpi_reduce_scatter_=pmpi_reduce_scatter_
void  (*INTERFACE_F_LOCAL_MPI_Reduce_scatter)(void *,void *,int *,int *,int *,int *,int *);

void pmpi_reduce_scatter_(void * sendbuf,void * recvbuf,int * recvcounts,int * datatype,int * op,int * comm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Reduce_scatter(sendbuf,recvbuf, recvcounts,datatype,op,comm, ret);
}

void  mpi_group_translate_ranks_(int * group1,int * n,int * ranks1,int * group2,int * ranks2,int * ret);
#pragma weak mpi_group_translate_ranks_=pmpi_group_translate_ranks_
void  (*INTERFACE_F_LOCAL_MPI_Group_translate_ranks)(int *,int *,int *,int *,int *,int *);

void pmpi_group_translate_ranks_(int * group1,int * n,int * ranks1,int * group2,int * ranks2,int * ret){

return  INTERFACE_F_LOCAL_MPI_Group_translate_ranks(group1, n, ranks1,group2, ranks2, ret);
}

void  mpi_group_incl_(int * group,int * n,int * ranks,int * newgroup,int * ret);
#pragma weak mpi_group_incl_=pmpi_group_incl_
void  (*INTERFACE_F_LOCAL_MPI_Group_incl)(int *,int *,int *,int *,int *);

void pmpi_group_incl_(int * group,int * n,int * ranks,int * newgroup,int * ret){

return  INTERFACE_F_LOCAL_MPI_Group_incl(group, n, ranks,newgroup, ret);
}

void  mpi_group_excl_(int * group,int * n,int * ranks,int * newgroup,int * ret);
#pragma weak mpi_group_excl_=pmpi_group_excl_
void  (*INTERFACE_F_LOCAL_MPI_Group_excl)(int *,int *,int *,int *,int *);

void pmpi_group_excl_(int * group,int * n,int * ranks,int * newgroup,int * ret){

return  INTERFACE_F_LOCAL_MPI_Group_excl(group, n, ranks,newgroup, ret);
}

void  mpi_group_range_incl_(int * group,int * n,int * ranges,int * newgroup,int * ret);
#pragma weak mpi_group_range_incl_=pmpi_group_range_incl_
void  (*INTERFACE_F_LOCAL_MPI_Group_range_incl)(int *,int *,int *,int *,int *);

void pmpi_group_range_incl_(int * group,int * n,int * ranges,int * newgroup,int * ret){

return  INTERFACE_F_LOCAL_MPI_Group_range_incl(group, n, ranges,newgroup, ret);
}

void  mpi_group_range_excl_(int * group,int * n,int * ranges,int * newgroup,int * ret);
#pragma weak mpi_group_range_excl_=pmpi_group_range_excl_
void  (*INTERFACE_F_LOCAL_MPI_Group_range_excl)(int *,int *,int *,int *,int *);

void pmpi_group_range_excl_(int * group,int * n,int * ranges,int * newgroup,int * ret){

return  INTERFACE_F_LOCAL_MPI_Group_range_excl(group, n, ranges,newgroup, ret);
}

void  mpi_cart_create_(int * comm_old,int * ndims,int * dims,int * periods,int * reorder,int * comm_cart,int * ret);
#pragma weak mpi_cart_create_=pmpi_cart_create_
void  (*INTERFACE_F_LOCAL_MPI_Cart_create)(int *,int *,int *,int *,int *,int *,int *);

void pmpi_cart_create_(int * comm_old,int * ndims,int * dims,int * periods,int * reorder,int * comm_cart,int * ret){

return  INTERFACE_F_LOCAL_MPI_Cart_create(comm_old, ndims, dims, periods, reorder,comm_cart, ret);
}

void  mpi_dims_create_(int * nnodes,int * ndims,int * dims,int * ret);
#pragma weak mpi_dims_create_=pmpi_dims_create_
void  (*INTERFACE_F_LOCAL_MPI_Dims_create)(int *,int *,int *,int *);

void pmpi_dims_create_(int * nnodes,int * ndims,int * dims,int * ret){

return  INTERFACE_F_LOCAL_MPI_Dims_create( nnodes, ndims, dims, ret);
}

void  mpi_graph_create_(int * comm_old,int * nnodes,int * indx,int * edges,int * reorder,int * comm_graph,int * ret);
#pragma weak mpi_graph_create_=pmpi_graph_create_
void  (*INTERFACE_F_LOCAL_MPI_Graph_create)(int *,int *,int *,int *,int *,int *,int *);

void pmpi_graph_create_(int * comm_old,int * nnodes,int * indx,int * edges,int * reorder,int * comm_graph,int * ret){

return  INTERFACE_F_LOCAL_MPI_Graph_create(comm_old, nnodes, indx, edges, reorder,comm_graph, ret);
}

void  mpi_graph_get_(int * comm,int * maxindex,int * maxedges,int * indx,int * edges,int * ret);
#pragma weak mpi_graph_get_=pmpi_graph_get_
void  (*INTERFACE_F_LOCAL_MPI_Graph_get)(int *,int *,int *,int *,int *,int *);

void pmpi_graph_get_(int * comm,int * maxindex,int * maxedges,int * indx,int * edges,int * ret){

return  INTERFACE_F_LOCAL_MPI_Graph_get(comm, maxindex, maxedges, indx, edges, ret);
}

void  mpi_cart_get_(int * comm,int * maxdims,int * dims,int * periods,int * coords,int * ret);
#pragma weak mpi_cart_get_=pmpi_cart_get_
void  (*INTERFACE_F_LOCAL_MPI_Cart_get)(int *,int *,int *,int *,int *,int *);

void pmpi_cart_get_(int * comm,int * maxdims,int * dims,int * periods,int * coords,int * ret){

return  INTERFACE_F_LOCAL_MPI_Cart_get(comm, maxdims, dims, periods, coords, ret);
}

void  mpi_cart_rank_(int * comm,int * coords,int * rank,int * ret);
#pragma weak mpi_cart_rank_=pmpi_cart_rank_
void  (*INTERFACE_F_LOCAL_MPI_Cart_rank)(int *,int *,int *,int *);

void pmpi_cart_rank_(int * comm,int * coords,int * rank,int * ret){

return  INTERFACE_F_LOCAL_MPI_Cart_rank(comm, coords, rank, ret);
}

void  mpi_cart_coords_(int * comm,int * rank,int * maxdims,int * coords,int * ret);
#pragma weak mpi_cart_coords_=pmpi_cart_coords_
void  (*INTERFACE_F_LOCAL_MPI_Cart_coords)(int *,int *,int *,int *,int *);

void pmpi_cart_coords_(int * comm,int * rank,int * maxdims,int * coords,int * ret){

return  INTERFACE_F_LOCAL_MPI_Cart_coords(comm, rank, maxdims, coords, ret);
}

void  mpi_graph_neighbors_(int * comm,int * rank,int * maxneighbors,int * neighbors,int * ret);
#pragma weak mpi_graph_neighbors_=pmpi_graph_neighbors_
void  (*INTERFACE_F_LOCAL_MPI_Graph_neighbors)(int *,int *,int *,int *,int *);

void pmpi_graph_neighbors_(int * comm,int * rank,int * maxneighbors,int * neighbors,int * ret){

return  INTERFACE_F_LOCAL_MPI_Graph_neighbors(comm, rank, maxneighbors, neighbors, ret);
}

void  mpi_cart_sub_(int * comm,int * remain_dims,int * newcomm,int * ret);
#pragma weak mpi_cart_sub_=pmpi_cart_sub_
void  (*INTERFACE_F_LOCAL_MPI_Cart_sub)(int *,int *,int *,int *);

void pmpi_cart_sub_(int * comm,int * remain_dims,int * newcomm,int * ret){

return  INTERFACE_F_LOCAL_MPI_Cart_sub(comm, remain_dims,newcomm, ret);
}

void  mpi_cart_map_(int * comm,int * ndims,int * dims,int * periods,int * newrank,int * ret);
#pragma weak mpi_cart_map_=pmpi_cart_map_
void  (*INTERFACE_F_LOCAL_MPI_Cart_map)(int *,int *,int *,int *,int *,int *);

void pmpi_cart_map_(int * comm,int * ndims,int * dims,int * periods,int * newrank,int * ret){

return  INTERFACE_F_LOCAL_MPI_Cart_map(comm, ndims, dims, periods, newrank, ret);
}

void  mpi_graph_map_(int * comm,int * nnodes,int * indx,int * edges,int * newrank,int * ret);
#pragma weak mpi_graph_map_=pmpi_graph_map_
void  (*INTERFACE_F_LOCAL_MPI_Graph_map)(int *,int *,int *,int *,int *,int *);

void pmpi_graph_map_(int * comm,int * nnodes,int * indx,int * edges,int * newrank,int * ret){

return  INTERFACE_F_LOCAL_MPI_Graph_map(comm, nnodes, indx, edges, newrank, ret);
}

void  mpi_type_create_darray_(int * size,int * rank,int * ndims,int * array_of_gsizes,int * array_of_distribs,int * array_of_dargs,int * array_of_psizes,int * order,int * oldtype,int * newtype,int * ret);
#pragma weak mpi_type_create_darray_=pmpi_type_create_darray_
void  (*INTERFACE_F_LOCAL_MPI_Type_create_darray)(int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *);

void pmpi_type_create_darray_(int * size,int * rank,int * ndims,int * array_of_gsizes,int * array_of_distribs,int * array_of_dargs,int * array_of_psizes,int * order,int * oldtype,int * newtype,int * ret){

return  INTERFACE_F_LOCAL_MPI_Type_create_darray( size, rank, ndims, array_of_gsizes, array_of_distribs, array_of_dargs, array_of_psizes,order,oldtype,newtype, ret);
}

void  mpi_type_create_hindexed_(int * count,int * array_of_blocklengths,size_t * array_of_displacements,int * oldtype,int * newtype,int * ret);
#pragma weak mpi_type_create_hindexed_=pmpi_type_create_hindexed_
void  (*INTERFACE_F_LOCAL_MPI_Type_create_hindexed)(int *,int *,size_t *,int *,int *,int *);

void pmpi_type_create_hindexed_(int * count,int * array_of_blocklengths,size_t * array_of_displacements,int * oldtype,int * newtype,int * ret){

return  INTERFACE_F_LOCAL_MPI_Type_create_hindexed( count, array_of_blocklengths, array_of_displacements,oldtype,newtype, ret);
}

void  mpi_type_create_struct_(int * count,int * array_of_blocklengths,size_t * array_of_displacements,int * array_of_types,int * newtype,int * ret);
#pragma weak mpi_type_create_struct_=pmpi_type_create_struct_
void  (*INTERFACE_F_LOCAL_MPI_Type_create_struct)(int *,int *,size_t *,int *,int *,int *);

void pmpi_type_create_struct_(int * count,int * array_of_blocklengths,size_t * array_of_displacements,int * array_of_types,int * newtype,int * ret){

return  INTERFACE_F_LOCAL_MPI_Type_create_struct( count, array_of_blocklengths, array_of_displacements,array_of_types,newtype, ret);
}

void  mpi_type_create_subarray_(int * ndims,int * array_of_sizes,int * array_of_subsizes,int * array_of_starts,int * order,int * oldtype,int * newtype,int * ret);
#pragma weak mpi_type_create_subarray_=pmpi_type_create_subarray_
void  (*INTERFACE_F_LOCAL_MPI_Type_create_subarray)(int *,int *,int *,int *,int *,int *,int *,int *);

void pmpi_type_create_subarray_(int * ndims,int * array_of_sizes,int * array_of_subsizes,int * array_of_starts,int * order,int * oldtype,int * newtype,int * ret){

return  INTERFACE_F_LOCAL_MPI_Type_create_subarray( ndims, array_of_sizes, array_of_subsizes, array_of_starts,order,oldtype,newtype, ret);
}

__attribute__((constructor)) void wrapper_interface_f(void) {
void *interface_handle=dlopen(getenv("WRAPPER_WI4MPI"),RTLD_NOW|RTLD_GLOBAL);
if(!interface_handle)
{    printf("%s\n",dlerror());
exit(10);
}INTERFACE_F_LOCAL_MPI_Send=dlsym(interface_handle,"A_f_MPI_Send");
INTERFACE_F_LOCAL_MPI_Recv=dlsym(interface_handle,"A_f_MPI_Recv");
INTERFACE_F_LOCAL_MPI_Get_count=dlsym(interface_handle,"A_f_MPI_Get_count");
INTERFACE_F_LOCAL_MPI_Bsend=dlsym(interface_handle,"A_f_MPI_Bsend");
INTERFACE_F_LOCAL_MPI_Ssend=dlsym(interface_handle,"A_f_MPI_Ssend");
INTERFACE_F_LOCAL_MPI_Rsend=dlsym(interface_handle,"A_f_MPI_Rsend");
INTERFACE_F_LOCAL_MPI_Buffer_attach=dlsym(interface_handle,"A_f_MPI_Buffer_attach");
INTERFACE_F_LOCAL_MPI_Buffer_detach=dlsym(interface_handle,"A_f_MPI_Buffer_detach");
INTERFACE_F_LOCAL_MPI_Isend=dlsym(interface_handle,"A_f_MPI_Isend");
INTERFACE_F_LOCAL_MPI_Ibsend=dlsym(interface_handle,"A_f_MPI_Ibsend");
INTERFACE_F_LOCAL_MPI_Issend=dlsym(interface_handle,"A_f_MPI_Issend");
INTERFACE_F_LOCAL_MPI_Irsend=dlsym(interface_handle,"A_f_MPI_Irsend");
INTERFACE_F_LOCAL_MPI_Irecv=dlsym(interface_handle,"A_f_MPI_Irecv");
INTERFACE_F_LOCAL_MPI_Wait=dlsym(interface_handle,"A_f_MPI_Wait");
INTERFACE_F_LOCAL_MPI_Test=dlsym(interface_handle,"A_f_MPI_Test");
INTERFACE_F_LOCAL_MPI_Request_free=dlsym(interface_handle,"A_f_MPI_Request_free");
INTERFACE_F_LOCAL_MPI_Iprobe=dlsym(interface_handle,"A_f_MPI_Iprobe");
INTERFACE_F_LOCAL_MPI_Probe=dlsym(interface_handle,"A_f_MPI_Probe");
INTERFACE_F_LOCAL_MPI_Cancel=dlsym(interface_handle,"A_f_MPI_Cancel");
INTERFACE_F_LOCAL_MPI_Test_cancelled=dlsym(interface_handle,"A_f_MPI_Test_cancelled");
INTERFACE_F_LOCAL_MPI_Send_init=dlsym(interface_handle,"A_f_MPI_Send_init");
INTERFACE_F_LOCAL_MPI_Bsend_init=dlsym(interface_handle,"A_f_MPI_Bsend_init");
INTERFACE_F_LOCAL_MPI_Ssend_init=dlsym(interface_handle,"A_f_MPI_Ssend_init");
INTERFACE_F_LOCAL_MPI_Rsend_init=dlsym(interface_handle,"A_f_MPI_Rsend_init");
INTERFACE_F_LOCAL_MPI_Recv_init=dlsym(interface_handle,"A_f_MPI_Recv_init");
INTERFACE_F_LOCAL_MPI_Start=dlsym(interface_handle,"A_f_MPI_Start");
INTERFACE_F_LOCAL_MPI_Sendrecv=dlsym(interface_handle,"A_f_MPI_Sendrecv");
INTERFACE_F_LOCAL_MPI_Sendrecv_replace=dlsym(interface_handle,"A_f_MPI_Sendrecv_replace");
INTERFACE_F_LOCAL_MPI_Type_contiguous=dlsym(interface_handle,"A_f_MPI_Type_contiguous");
INTERFACE_F_LOCAL_MPI_Type_vector=dlsym(interface_handle,"A_f_MPI_Type_vector");
INTERFACE_F_LOCAL_MPI_Type_hvector=dlsym(interface_handle,"A_f_MPI_Type_hvector");
INTERFACE_F_LOCAL_MPI_Type_indexed=dlsym(interface_handle,"A_f_MPI_Type_indexed");
INTERFACE_F_LOCAL_MPI_Type_hindexed=dlsym(interface_handle,"A_f_MPI_Type_hindexed");
INTERFACE_F_LOCAL_MPI_Type_struct=dlsym(interface_handle,"A_f_MPI_Type_struct");
INTERFACE_F_LOCAL_MPI_Address=dlsym(interface_handle,"A_f_MPI_Address");
INTERFACE_F_LOCAL_MPI_Type_extent=dlsym(interface_handle,"A_f_MPI_Type_extent");
INTERFACE_F_LOCAL_MPI_Type_size=dlsym(interface_handle,"A_f_MPI_Type_size");
INTERFACE_F_LOCAL_MPI_Type_lb=dlsym(interface_handle,"A_f_MPI_Type_lb");
INTERFACE_F_LOCAL_MPI_Type_ub=dlsym(interface_handle,"A_f_MPI_Type_ub");
INTERFACE_F_LOCAL_MPI_Type_commit=dlsym(interface_handle,"A_f_MPI_Type_commit");
INTERFACE_F_LOCAL_MPI_Type_free=dlsym(interface_handle,"A_f_MPI_Type_free");
INTERFACE_F_LOCAL_MPI_Get_elements=dlsym(interface_handle,"A_f_MPI_Get_elements");
INTERFACE_F_LOCAL_MPI_Pack=dlsym(interface_handle,"A_f_MPI_Pack");
INTERFACE_F_LOCAL_MPI_Unpack=dlsym(interface_handle,"A_f_MPI_Unpack");
INTERFACE_F_LOCAL_MPI_Pack_size=dlsym(interface_handle,"A_f_MPI_Pack_size");
INTERFACE_F_LOCAL_MPI_Barrier=dlsym(interface_handle,"A_f_MPI_Barrier");
INTERFACE_F_LOCAL_MPI_Bcast=dlsym(interface_handle,"A_f_MPI_Bcast");
INTERFACE_F_LOCAL_MPI_Gather=dlsym(interface_handle,"A_f_MPI_Gather");
INTERFACE_F_LOCAL_MPI_Gatherv=dlsym(interface_handle,"A_f_MPI_Gatherv");
INTERFACE_F_LOCAL_MPI_Scatter=dlsym(interface_handle,"A_f_MPI_Scatter");
INTERFACE_F_LOCAL_MPI_Scatterv=dlsym(interface_handle,"A_f_MPI_Scatterv");
INTERFACE_F_LOCAL_MPI_Allgather=dlsym(interface_handle,"A_f_MPI_Allgather");
INTERFACE_F_LOCAL_MPI_Allgatherv=dlsym(interface_handle,"A_f_MPI_Allgatherv");
INTERFACE_F_LOCAL_MPI_Alltoall=dlsym(interface_handle,"A_f_MPI_Alltoall");
INTERFACE_F_LOCAL_MPI_Alltoallv=dlsym(interface_handle,"A_f_MPI_Alltoallv");
INTERFACE_F_LOCAL_MPI_Reduce=dlsym(interface_handle,"A_f_MPI_Reduce");
INTERFACE_F_LOCAL_MPI_Op_create=dlsym(interface_handle,"A_f_MPI_Op_create");
INTERFACE_F_LOCAL_MPI_Op_free=dlsym(interface_handle,"A_f_MPI_Op_free");
INTERFACE_F_LOCAL_MPI_Allreduce=dlsym(interface_handle,"A_f_MPI_Allreduce");
INTERFACE_F_LOCAL_MPI_Scan=dlsym(interface_handle,"A_f_MPI_Scan");
INTERFACE_F_LOCAL_MPI_Group_size=dlsym(interface_handle,"A_f_MPI_Group_size");
INTERFACE_F_LOCAL_MPI_Group_rank=dlsym(interface_handle,"A_f_MPI_Group_rank");
INTERFACE_F_LOCAL_MPI_Group_compare=dlsym(interface_handle,"A_f_MPI_Group_compare");
INTERFACE_F_LOCAL_MPI_Comm_group=dlsym(interface_handle,"A_f_MPI_Comm_group");
INTERFACE_F_LOCAL_MPI_Group_union=dlsym(interface_handle,"A_f_MPI_Group_union");
INTERFACE_F_LOCAL_MPI_Group_intersection=dlsym(interface_handle,"A_f_MPI_Group_intersection");
INTERFACE_F_LOCAL_MPI_Group_difference=dlsym(interface_handle,"A_f_MPI_Group_difference");
INTERFACE_F_LOCAL_MPI_Group_free=dlsym(interface_handle,"A_f_MPI_Group_free");
INTERFACE_F_LOCAL_MPI_Comm_size=dlsym(interface_handle,"A_f_MPI_Comm_size");
INTERFACE_F_LOCAL_MPI_Comm_rank=dlsym(interface_handle,"A_f_MPI_Comm_rank");
INTERFACE_F_LOCAL_MPI_Comm_compare=dlsym(interface_handle,"A_f_MPI_Comm_compare");
INTERFACE_F_LOCAL_MPI_Comm_dup=dlsym(interface_handle,"A_f_MPI_Comm_dup");
INTERFACE_F_LOCAL_MPI_Comm_create=dlsym(interface_handle,"A_f_MPI_Comm_create");
INTERFACE_F_LOCAL_MPI_Comm_split=dlsym(interface_handle,"A_f_MPI_Comm_split");
INTERFACE_F_LOCAL_MPI_Comm_free=dlsym(interface_handle,"A_f_MPI_Comm_free");
INTERFACE_F_LOCAL_MPI_Comm_test_inter=dlsym(interface_handle,"A_f_MPI_Comm_test_inter");
INTERFACE_F_LOCAL_MPI_Comm_remote_size=dlsym(interface_handle,"A_f_MPI_Comm_remote_size");
INTERFACE_F_LOCAL_MPI_Comm_remote_group=dlsym(interface_handle,"A_f_MPI_Comm_remote_group");
INTERFACE_F_LOCAL_MPI_Intercomm_create=dlsym(interface_handle,"A_f_MPI_Intercomm_create");
INTERFACE_F_LOCAL_MPI_Intercomm_merge=dlsym(interface_handle,"A_f_MPI_Intercomm_merge");
INTERFACE_F_LOCAL_MPI_Keyval_create=dlsym(interface_handle,"A_f_MPI_Keyval_create");
INTERFACE_F_LOCAL_MPI_Keyval_free=dlsym(interface_handle,"A_f_MPI_Keyval_free");
INTERFACE_F_LOCAL_MPI_Attr_put=dlsym(interface_handle,"A_f_MPI_Attr_put");
INTERFACE_F_LOCAL_MPI_Attr_get=dlsym(interface_handle,"A_f_MPI_Attr_get");
INTERFACE_F_LOCAL_MPI_Attr_delete=dlsym(interface_handle,"A_f_MPI_Attr_delete");
INTERFACE_F_LOCAL_MPI_Topo_test=dlsym(interface_handle,"A_f_MPI_Topo_test");
INTERFACE_F_LOCAL_MPI_Graphdims_get=dlsym(interface_handle,"A_f_MPI_Graphdims_get");
INTERFACE_F_LOCAL_MPI_Cartdim_get=dlsym(interface_handle,"A_f_MPI_Cartdim_get");
INTERFACE_F_LOCAL_MPI_Graph_neighbors_count=dlsym(interface_handle,"A_f_MPI_Graph_neighbors_count");
INTERFACE_F_LOCAL_MPI_Cart_shift=dlsym(interface_handle,"A_f_MPI_Cart_shift");
INTERFACE_F_LOCAL_MPI_Get_version=dlsym(interface_handle,"A_f_MPI_Get_version");
INTERFACE_F_LOCAL_MPI_Errhandler_create=dlsym(interface_handle,"A_f_MPI_Errhandler_create");
INTERFACE_F_LOCAL_MPI_Errhandler_set=dlsym(interface_handle,"A_f_MPI_Errhandler_set");
INTERFACE_F_LOCAL_MPI_Errhandler_get=dlsym(interface_handle,"A_f_MPI_Errhandler_get");
INTERFACE_F_LOCAL_MPI_Errhandler_free=dlsym(interface_handle,"A_f_MPI_Errhandler_free");
INTERFACE_F_LOCAL_MPI_Error_class=dlsym(interface_handle,"A_f_MPI_Error_class");
INTERFACE_F_LOCAL_MPI_Initialized=dlsym(interface_handle,"A_f_MPI_Initialized");
INTERFACE_F_LOCAL_MPI_Abort=dlsym(interface_handle,"A_f_MPI_Abort");
INTERFACE_F_LOCAL_MPI_Init=dlsym(interface_handle,"A_f_MPI_Init");
INTERFACE_F_LOCAL_MPI_File_get_errhandler=dlsym(interface_handle,"A_f_MPI_File_get_errhandler");
INTERFACE_F_LOCAL_MPI_File_set_errhandler=dlsym(interface_handle,"A_f_MPI_File_set_errhandler");
INTERFACE_F_LOCAL_MPI_Info_create=dlsym(interface_handle,"A_f_MPI_Info_create");
INTERFACE_F_LOCAL_MPI_Info_dup=dlsym(interface_handle,"A_f_MPI_Info_dup");
INTERFACE_F_LOCAL_MPI_Info_free=dlsym(interface_handle,"A_f_MPI_Info_free");
INTERFACE_F_LOCAL_MPI_Info_get_nkeys=dlsym(interface_handle,"A_f_MPI_Info_get_nkeys");
INTERFACE_F_LOCAL_MPI_Request_get_status=dlsym(interface_handle,"A_f_MPI_Request_get_status");
INTERFACE_F_LOCAL_MPI_Type_create_hvector=dlsym(interface_handle,"A_f_MPI_Type_create_hvector");
INTERFACE_F_LOCAL_MPI_Type_get_extent=dlsym(interface_handle,"A_f_MPI_Type_get_extent");
INTERFACE_F_LOCAL_MPI_File_close=dlsym(interface_handle,"A_f_MPI_File_close");
INTERFACE_F_LOCAL_MPI_File_set_size=dlsym(interface_handle,"A_f_MPI_File_set_size");
INTERFACE_F_LOCAL_MPI_File_preallocate=dlsym(interface_handle,"A_f_MPI_File_preallocate");
INTERFACE_F_LOCAL_MPI_File_get_size=dlsym(interface_handle,"A_f_MPI_File_get_size");
INTERFACE_F_LOCAL_MPI_File_get_group=dlsym(interface_handle,"A_f_MPI_File_get_group");
INTERFACE_F_LOCAL_MPI_File_get_amode=dlsym(interface_handle,"A_f_MPI_File_get_amode");
INTERFACE_F_LOCAL_MPI_File_set_info=dlsym(interface_handle,"A_f_MPI_File_set_info");
INTERFACE_F_LOCAL_MPI_File_get_info=dlsym(interface_handle,"A_f_MPI_File_get_info");
INTERFACE_F_LOCAL_MPI_File_read_at=dlsym(interface_handle,"A_f_MPI_File_read_at");
INTERFACE_F_LOCAL_MPI_File_read_at_all=dlsym(interface_handle,"A_f_MPI_File_read_at_all");
INTERFACE_F_LOCAL_MPI_File_write_at=dlsym(interface_handle,"A_f_MPI_File_write_at");
INTERFACE_F_LOCAL_MPI_File_write_at_all=dlsym(interface_handle,"A_f_MPI_File_write_at_all");
INTERFACE_F_LOCAL_MPI_File_iread_at=dlsym(interface_handle,"A_f_MPI_File_iread_at");
INTERFACE_F_LOCAL_MPI_File_iwrite_at=dlsym(interface_handle,"A_f_MPI_File_iwrite_at");
INTERFACE_F_LOCAL_MPI_File_read=dlsym(interface_handle,"A_f_MPI_File_read");
INTERFACE_F_LOCAL_MPI_File_read_all=dlsym(interface_handle,"A_f_MPI_File_read_all");
INTERFACE_F_LOCAL_MPI_File_write=dlsym(interface_handle,"A_f_MPI_File_write");
INTERFACE_F_LOCAL_MPI_File_write_all=dlsym(interface_handle,"A_f_MPI_File_write_all");
INTERFACE_F_LOCAL_MPI_File_iread=dlsym(interface_handle,"A_f_MPI_File_iread");
INTERFACE_F_LOCAL_MPI_File_iwrite=dlsym(interface_handle,"A_f_MPI_File_iwrite");
INTERFACE_F_LOCAL_MPI_File_seek=dlsym(interface_handle,"A_f_MPI_File_seek");
INTERFACE_F_LOCAL_MPI_File_get_position=dlsym(interface_handle,"A_f_MPI_File_get_position");
INTERFACE_F_LOCAL_MPI_File_get_byte_offset=dlsym(interface_handle,"A_f_MPI_File_get_byte_offset");
INTERFACE_F_LOCAL_MPI_File_read_shared=dlsym(interface_handle,"A_f_MPI_File_read_shared");
INTERFACE_F_LOCAL_MPI_File_write_shared=dlsym(interface_handle,"A_f_MPI_File_write_shared");
INTERFACE_F_LOCAL_MPI_File_iread_shared=dlsym(interface_handle,"A_f_MPI_File_iread_shared");
INTERFACE_F_LOCAL_MPI_File_iwrite_shared=dlsym(interface_handle,"A_f_MPI_File_iwrite_shared");
INTERFACE_F_LOCAL_MPI_File_read_ordered=dlsym(interface_handle,"A_f_MPI_File_read_ordered");
INTERFACE_F_LOCAL_MPI_File_write_ordered=dlsym(interface_handle,"A_f_MPI_File_write_ordered");
INTERFACE_F_LOCAL_MPI_File_seek_shared=dlsym(interface_handle,"A_f_MPI_File_seek_shared");
INTERFACE_F_LOCAL_MPI_File_get_position_shared=dlsym(interface_handle,"A_f_MPI_File_get_position_shared");
INTERFACE_F_LOCAL_MPI_File_read_at_all_begin=dlsym(interface_handle,"A_f_MPI_File_read_at_all_begin");
INTERFACE_F_LOCAL_MPI_File_read_at_all_end=dlsym(interface_handle,"A_f_MPI_File_read_at_all_end");
INTERFACE_F_LOCAL_MPI_File_write_at_all_begin=dlsym(interface_handle,"A_f_MPI_File_write_at_all_begin");
INTERFACE_F_LOCAL_MPI_File_write_at_all_end=dlsym(interface_handle,"A_f_MPI_File_write_at_all_end");
INTERFACE_F_LOCAL_MPI_File_read_all_begin=dlsym(interface_handle,"A_f_MPI_File_read_all_begin");
INTERFACE_F_LOCAL_MPI_File_read_all_end=dlsym(interface_handle,"A_f_MPI_File_read_all_end");
INTERFACE_F_LOCAL_MPI_File_write_all_begin=dlsym(interface_handle,"A_f_MPI_File_write_all_begin");
INTERFACE_F_LOCAL_MPI_File_write_all_end=dlsym(interface_handle,"A_f_MPI_File_write_all_end");
INTERFACE_F_LOCAL_MPI_File_read_ordered_begin=dlsym(interface_handle,"A_f_MPI_File_read_ordered_begin");
INTERFACE_F_LOCAL_MPI_File_read_ordered_end=dlsym(interface_handle,"A_f_MPI_File_read_ordered_end");
INTERFACE_F_LOCAL_MPI_File_write_ordered_begin=dlsym(interface_handle,"A_f_MPI_File_write_ordered_begin");
INTERFACE_F_LOCAL_MPI_File_write_ordered_end=dlsym(interface_handle,"A_f_MPI_File_write_ordered_end");
INTERFACE_F_LOCAL_MPI_File_get_type_extent=dlsym(interface_handle,"A_f_MPI_File_get_type_extent");
INTERFACE_F_LOCAL_MPI_File_set_atomicity=dlsym(interface_handle,"A_f_MPI_File_set_atomicity");
INTERFACE_F_LOCAL_MPI_File_get_atomicity=dlsym(interface_handle,"A_f_MPI_File_get_atomicity");
INTERFACE_F_LOCAL_MPI_File_sync=dlsym(interface_handle,"A_f_MPI_File_sync");
INTERFACE_F_LOCAL_MPI_Wtime=dlsym(interface_handle,"A_f_MPI_Wtime");
INTERFACE_F_LOCAL_MPI_Wtick=dlsym(interface_handle,"A_f_MPI_Wtick");
INTERFACE_F_LOCAL_MPI_Finalize=dlsym(interface_handle,"A_f_MPI_Finalize");
INTERFACE_F_LOCAL_MPI_Waitany=dlsym(interface_handle,"A_f_MPI_Waitany");
INTERFACE_F_LOCAL_MPI_Testany=dlsym(interface_handle,"A_f_MPI_Testany");
INTERFACE_F_LOCAL_MPI_Waitall=dlsym(interface_handle,"A_f_MPI_Waitall");
INTERFACE_F_LOCAL_MPI_Testall=dlsym(interface_handle,"A_f_MPI_Testall");
INTERFACE_F_LOCAL_MPI_Waitsome=dlsym(interface_handle,"A_f_MPI_Waitsome");
INTERFACE_F_LOCAL_MPI_Testsome=dlsym(interface_handle,"A_f_MPI_Testsome");
INTERFACE_F_LOCAL_MPI_Startall=dlsym(interface_handle,"A_f_MPI_Startall");
INTERFACE_F_LOCAL_MPI_Reduce_scatter=dlsym(interface_handle,"A_f_MPI_Reduce_scatter");
INTERFACE_F_LOCAL_MPI_Group_translate_ranks=dlsym(interface_handle,"A_f_MPI_Group_translate_ranks");
INTERFACE_F_LOCAL_MPI_Group_incl=dlsym(interface_handle,"A_f_MPI_Group_incl");
INTERFACE_F_LOCAL_MPI_Group_excl=dlsym(interface_handle,"A_f_MPI_Group_excl");
INTERFACE_F_LOCAL_MPI_Group_range_incl=dlsym(interface_handle,"A_f_MPI_Group_range_incl");
INTERFACE_F_LOCAL_MPI_Group_range_excl=dlsym(interface_handle,"A_f_MPI_Group_range_excl");
INTERFACE_F_LOCAL_MPI_Cart_create=dlsym(interface_handle,"A_f_MPI_Cart_create");
INTERFACE_F_LOCAL_MPI_Dims_create=dlsym(interface_handle,"A_f_MPI_Dims_create");
INTERFACE_F_LOCAL_MPI_Graph_create=dlsym(interface_handle,"A_f_MPI_Graph_create");
INTERFACE_F_LOCAL_MPI_Graph_get=dlsym(interface_handle,"A_f_MPI_Graph_get");
INTERFACE_F_LOCAL_MPI_Cart_get=dlsym(interface_handle,"A_f_MPI_Cart_get");
INTERFACE_F_LOCAL_MPI_Cart_rank=dlsym(interface_handle,"A_f_MPI_Cart_rank");
INTERFACE_F_LOCAL_MPI_Cart_coords=dlsym(interface_handle,"A_f_MPI_Cart_coords");
INTERFACE_F_LOCAL_MPI_Graph_neighbors=dlsym(interface_handle,"A_f_MPI_Graph_neighbors");
INTERFACE_F_LOCAL_MPI_Cart_sub=dlsym(interface_handle,"A_f_MPI_Cart_sub");
INTERFACE_F_LOCAL_MPI_Cart_map=dlsym(interface_handle,"A_f_MPI_Cart_map");
INTERFACE_F_LOCAL_MPI_Graph_map=dlsym(interface_handle,"A_f_MPI_Graph_map");
INTERFACE_F_LOCAL_MPI_Type_create_darray=dlsym(interface_handle,"A_f_MPI_Type_create_darray");
INTERFACE_F_LOCAL_MPI_Type_create_hindexed=dlsym(interface_handle,"A_f_MPI_Type_create_hindexed");
INTERFACE_F_LOCAL_MPI_Type_create_struct=dlsym(interface_handle,"A_f_MPI_Type_create_struct");
INTERFACE_F_LOCAL_MPI_Type_create_subarray=dlsym(interface_handle,"A_f_MPI_Type_create_subarray");
INTERFACE_F_MPI_Get_processor_name=dlsym(interface_handle,"A_f_MPI_Get_processor_name");
INTERFACE_F_LOCAL_MPI_Pcontrol=dlsym(interface_handle,"A_f_MPI_Pcontrol");
INTERFACE_F_MPI_Error_string=dlsym(interface_handle,"A_f_MPI_Error_string");

}
