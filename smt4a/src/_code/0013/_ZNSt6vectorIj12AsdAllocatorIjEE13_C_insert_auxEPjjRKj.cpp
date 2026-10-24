/* NON_MATCHING: the size-and-capacity test is scheduled differently (retail shifts the element count after the capacity test, so the registers swap and a move disappears). */
#include "stl/AsdAllocator.h"
#include <vector>
#include "stl/MacroMax.h"

typedef std::vector<u32, AsdAllocator<u32> > WordValues;

/* std::vector<u32>::_C_insert_aux(position, count, value): inserts `count` copies of `value`, growing the storage when needed. */
template void WordValues::_C_insert_aux(WordValues::iterator, u32, const u32 &);
