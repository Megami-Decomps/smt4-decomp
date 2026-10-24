/* NON_MATCHING: only the register assignment differs (retail keeps the insert position in r5 and the element count in r6; the compiler swaps them). */
#include "stl/AsdAllocator.h"
#include <vector>
#include "stl/MacroMax.h"

typedef std::vector<void *, AsdAllocator<void *> > PointerValues;

/* std::vector<void *>::_C_insert_aux2(position, first, last): inserts the range [first, last), growing the storage when needed. */
template void PointerValues::_C_insert_aux2(PointerValues::iterator, PointerValues::const_iterator, PointerValues::const_iterator);

/* The same translation unit inserts single values, which makes the shared helpers (size, capacity, copy) stand alone. */
template void PointerValues::_C_insert_aux(PointerValues::iterator, void *const &);
