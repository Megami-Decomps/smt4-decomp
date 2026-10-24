/* NON_MATCHING: the size-and-capacity test is scheduled differently (retail shifts the element count after the capacity test, so the registers swap and a move disappears). */
#include "stl/AsdAllocator.h"
#include <vector>
#include "stl/MacroMax.h"

typedef std::vector<s32, AsdAllocator<s32> > IntValues;

/* std::vector<s32>::_C_insert_aux(position, count, value): inserts `count` copies of `value`, growing the storage when needed. */
template void IntValues::_C_insert_aux(IntValues::iterator, u32, const s32 &);
