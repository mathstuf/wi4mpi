#!/bin/bash

source ../etc/batch.cfg || exit 1

export WI4MPI_ROOT
export WI4MPI_CXX
${WI4MPI_ROOT}/bin/mpic++ mpi_init.cpp
