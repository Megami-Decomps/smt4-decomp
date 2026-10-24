#ifndef STL_OBJ559EDCVALUES_H
#define STL_OBJ559EDCVALUES_H

#include "classes/Obj559edc.h"
#include "stl/AsdAllocator.h"
#include <vector>

/* The standard vector of Obj559edc owners (0xB8-byte elements). Retail keeps its allocator construct and the
 * clear / reserve / insert-aux members out of line, so callers reach them by call. */
typedef std::vector<Obj559edc, AsdAllocator<Obj559edc> > Obj559edcValues;

template <> void AsdAllocator<Obj559edc>::construct(Obj559edc *, const Obj559edc &);
template <> void Obj559edcValues::clear();
template <> void Obj559edcValues::reserve(u32);
template <> void Obj559edcValues::_C_insert_aux(Obj559edc *, const Obj559edc &);

#endif
