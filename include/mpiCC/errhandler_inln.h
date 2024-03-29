// -*- c++ -*-
//
// $Id$
//
// Copyright (c) 2001-2002 The Trustees of Indiana University.
//                         All rights reserved.
// Copyright (c) 1998-2001 University of Notre Dame.
//                         All rights reserved.
// Copyright (c) 1994-1998 The Ohio State University.
//                         All rights reserved.
//
// This file is part of the LAM/MPI software package.  For license
// information, see the LICENSE file in the top level directory of the
// LAM/MPI source distribution.
//
// $HEADER$
//

inline void
_REAL_MPI_::Errhandler::Free()
{
  (void)MPI_Errhandler_free(&mpi_errhandler);
}

