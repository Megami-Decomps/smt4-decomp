#ifndef STL_OBJ55A87CVALUES_H
#define STL_OBJ55A87CVALUES_H

#include "classes/Obj55a87c.h"
#include "stl/AsdAllocator.h"
#include <vector>

/* The standard vector of Obj55a87c records (0x28-byte elements). Retail keeps its allocator construct and the
 * clear / reserve / insert-aux members out of line, so callers reach them by call. */
typedef std::vector<Obj55a87c, AsdAllocator<Obj55a87c> > Obj55a87cValues;

template <> void AsdAllocator<Obj55a87c>::construct(Obj55a87c *, const Obj55a87c &);
template <> Obj55a87cValues::vector(const Obj55a87cValues &);
template <> Obj55a87cValues::~vector();
template <> void Obj55a87cValues::clear();
template <> void Obj55a87cValues::reserve(u32);
template <> void Obj55a87cValues::_C_insert_aux(Obj55a87c *, const Obj55a87c &);

#endif
