/* NON_MATCHING: the unit emits (via the pointer) but armcc inlines size(), __rw_new_capacity and std::max, which retail calls out of line (vectorCount4_00307858, vectorGrowCapacity_002f1786, _ZSt3maxIjERKT_S2_S2_); needs inline-suppressing unit cflags (see flags_M6). */
#include "stl/AsdAllocator.h"
#include <vector>

typedef std::vector<u32, AsdAllocator<u32> > WordValues;

/* std::vector<u32>::reserve(count): grows the storage to hold at least `count` elements.
 * Referenced through a pointer so the compiler emits the out-of-line copy. */
extern void (WordValues::*const g_wordValuesReserve)(u32);
void (WordValues::*const g_wordValuesReserve)(u32) = &WordValues::reserve;
