#ifndef STL_OBJ55A168VALUES_H
#define STL_OBJ55A168VALUES_H

#include "classes/Obj55a168.h"
#include "stl/AsdAllocator.h"
#include <vector>

/* The standard vector of Obj55a168 records (0x18-byte elements). Retail keeps its allocator construct and the
 * clear / reserve / insert-aux members out of line, so callers reach them by call. */
typedef std::vector<Obj55a168, AsdAllocator<Obj55a168> > Obj55a168Values;

template <> void AsdAllocator<Obj55a168>::construct(Obj55a168 *, const Obj55a168 &);
template <> void Obj55a168Values::clear();
template <> void Obj55a168Values::reserve(u32);
template <> void Obj55a168Values::_C_insert_aux(Obj55a168 *, const Obj55a168 &);

#endif
