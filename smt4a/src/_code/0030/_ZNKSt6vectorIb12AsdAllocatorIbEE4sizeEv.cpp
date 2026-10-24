/* NON_MATCHING: with -Ospace only the load order differs (retail loads begin's fields, then end's; build loads end first and begin with ldmia) */
/* std::vector<bool>::size() const: end() - begin(), in bits. */
#include "stl/VectorBool.h"

extern "C" {
s32 _ZNKSt6vectorIb12AsdAllocatorIbEE14const_iteratormiES3_(BitIterator *self, BitIterator other);

s32 _ZNKSt6vectorIb12AsdAllocatorIbEE4sizeEv(const BitVector *vector)
{
    BitIterator end(vector->end.word, vector->end.bit);
    BitIterator begin(vector->begin.word, vector->begin.bit);

    return _ZNKSt6vectorIb12AsdAllocatorIbEE14const_iteratormiES3_(&end, begin);
}
}
