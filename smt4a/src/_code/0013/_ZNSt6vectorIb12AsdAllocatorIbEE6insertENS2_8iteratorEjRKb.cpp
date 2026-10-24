/* NON_MATCHING: retail calls _C_bit_alloc out of line and reads the fill value as a signed byte (ldrsb); the build inlines the allocation and loads the bool unsigned. */
#include "stl/AsdAllocator.h"
#include <vector>
#include "stl/MacroMax.h"

typedef std::vector<bool, AsdAllocator<bool> > BitValues;

/* std::vector<bool>::insert(position, count, value): inserts `count` copies of `value` into the packed bit vector. */
template void BitValues::insert(BitValues::iterator, u32, const bool &);
