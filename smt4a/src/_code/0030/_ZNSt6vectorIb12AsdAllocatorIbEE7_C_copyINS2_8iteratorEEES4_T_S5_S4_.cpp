/* NON_MATCHING: retail is the -O0 instantiation (needs a `-O0` cflags override on this unit: armcc inlines it otherwise and an explicit member-template instantiation emits nothing). At -O0 the copy loop matches structurally, but the compiler's std::vector<bool> body assigns through reference::operator bool + operator=(bool) while retail calls reference::operator=(const reference&). */
#include "stl/AsdAllocator.h"
#include <vector>

typedef std::vector<bool, AsdAllocator<bool> > BitValues;

/* std::vector<bool>::_C_copy(first, last, result) as instantiated by the range constructor. */
void bitValuesAssignRange(BitValues &target, BitValues &source)
{
    BitValues copy(source.begin(), source.end());
    target.swap(copy);
}
