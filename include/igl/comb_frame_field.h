// This file is part of libigl, a simple c++ geometry processing library.
//
// Copyright (C) 2014 Daniele Panozzo <daniele.panozzo@gmail.com>, Olga Diamanti <olga.diam@gmail.com>
//
// This Source Code Form is subject to the terms of the Mozilla Public License
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at http://mozilla.org/MPL/2.0/.

#ifndef IGL_COMB_FRAME_FIELD_H
#define IGL_COMB_FRAME_FIELD_H
#include "igl_inline.h"
#include <Eigen/Core>
namespace igl
{
  // Computes principal matchings of the vectors of a frame field across face edges,
  // and generates a combed frame field defined on the mesh faces. This makes use of a
  // combed cross field generated by combing the field created by the bisectors of the
  // frame field.
  
  // Inputs:
  //   V            #V by 3 eigen Matrix of mesh vertex 3D positions
  //   F            #F by 4 eigen Matrix of face (quad) indices
  //   PD1          #F by 3 eigen Matrix of the first per face cross field vector
  //   PD2          #F by 3 eigen Matrix of the second per face cross field vector
  //   BIS1_combed  #F by 3 eigen Matrix of the first combed bisector field vector
  //   BIS2_combed  #F by 3 eigen Matrix of the second combed bisector field vector
  // Output:
  //   PD1_combed  #F by 3 eigen Matrix of the first combed cross field vector
  //   PD2_combed  #F by 3 eigen Matrix of the second combed cross field vector
  //
  
  
  template <typename DerivedV, typename DerivedF, typename DerivedP>
  IGL_INLINE void comb_frame_field(const Eigen::PlainObjectBase<DerivedV> &V,
                                        const Eigen::PlainObjectBase<DerivedF> &F,
                                        const Eigen::PlainObjectBase<DerivedP> &PD1,
                                        const Eigen::PlainObjectBase<DerivedP> &PD2,
                                        const Eigen::PlainObjectBase<DerivedP> &BIS1_combed,
                                        const Eigen::PlainObjectBase<DerivedP> &BIS2_combed,
                                        Eigen::PlainObjectBase<DerivedP> &PD1_combed,
                                        Eigen::PlainObjectBase<DerivedP> &PD2_combed);
}
#ifdef IGL_HEADER_ONLY
#include "comb_frame_field.cpp"
#endif

#endif
