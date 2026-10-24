#ifndef STL_OBJ559BB0VALUES_H
#define STL_OBJ559BB0VALUES_H

#include "classes/Obj559bb0.h"
#include "stl/AsdAllocator.h"
#include <vector>

/* The standard vector of Obj559bb0 records (0x18-byte elements). Retail keeps its allocator construct and the
 * clear / reserve / insert-aux members out of line, so callers reach them by call. */
typedef std::vector<Obj559bb0, AsdAllocator<Obj559bb0> > Obj559bb0Values;

template <> void AsdAllocator<Obj559bb0>::construct(Obj559bb0 *, const Obj559bb0 &);
template <> void Obj559bb0Values::clear();
template <> void Obj559bb0Values::reserve(u32);
template <> void Obj559bb0Values::_C_insert_aux(Obj559bb0 *, const Obj559bb0 &);

#endif
