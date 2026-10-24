#ifndef STL_OBJ55A88CVALUES_H
#define STL_OBJ55A88CVALUES_H

#include "classes/Obj55a88c.h"
#include "stl/AsdAllocator.h"
#include <vector>

/* The standard vector of Obj55a88c records (0x18-byte elements). Retail keeps its allocator construct and the
 * clear / reserve / insert-aux members out of line, so callers reach them by call. */
typedef std::vector<Obj55a88c, AsdAllocator<Obj55a88c> > Obj55a88cValues;

template <> void AsdAllocator<Obj55a88c>::construct(Obj55a88c *, const Obj55a88c &);
template <> void Obj55a88cValues::clear();
template <> void Obj55a88cValues::reserve(u32);
template <> void Obj55a88cValues::_C_insert_aux(Obj55a88c *, const Obj55a88c &);

#endif
