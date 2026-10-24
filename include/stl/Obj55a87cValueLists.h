#ifndef STL_OBJ55A87CVALUELISTS_H
#define STL_OBJ55A87CVALUELISTS_H

#include "stl/Obj55a87cValues.h"

/* A vector of Obj55a87c vectors (12-byte elements), with the same out-of-line members. */
typedef std::vector<Obj55a87cValues, AsdAllocator<Obj55a87cValues> > Obj55a87cValueLists;

template <> void AsdAllocator<Obj55a87cValues>::construct(Obj55a87cValues *, const Obj55a87cValues &);
template <> void Obj55a87cValueLists::clear();
template <> void Obj55a87cValueLists::reserve(u32);
template <> void Obj55a87cValueLists::_C_insert_aux(Obj55a87cValues *, const Obj55a87cValues &);

#endif
