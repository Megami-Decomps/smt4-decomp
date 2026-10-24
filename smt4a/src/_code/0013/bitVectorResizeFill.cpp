/* NON_MATCHING: iterator semantics and temporary layout are restored, but compiler omits saved r6, splits the three-word stack STM and changes fill-argument/frame scheduling. Ospace alone also differs. */
#include "common.h"

struct BitIterator {
    u32* word; // 0x00
    u32 bit;   // 0x04
};

struct BitVectorRange {
    BitIterator begin; // 0x00
    BitIterator end;   // 0x08
};

extern "C" {
u32 _ZNKSt6vectorIb12AsdAllocatorIbEE4sizeEv(const BitVectorRange*);
void _ZNSt6vectorIb12AsdAllocatorIbEE6insertENS2_8iteratorEjRKb(BitVectorRange*, BitIterator, u32, const bool*);
void _ZNKSt6vectorIb12AsdAllocatorIbEE8iteratorplEi(BitIterator*, const BitIterator*, u32);
void _ZNSt6vectorIb12AsdAllocatorIbEE7_C_copyINS2_8iteratorEEES4_T_S5_S4_(BitIterator*, BitVectorRange*, BitIterator, BitIterator, BitIterator);

// Grow with the requested bit value or move the logical end backward.
void bitVectorResizeFill(BitVectorRange* vector, u32 count, bool value)
{
    if (_ZNKSt6vectorIb12AsdAllocatorIbEE4sizeEv(vector) < count) {
        _ZNSt6vectorIb12AsdAllocatorIbEE6insertENS2_8iteratorEjRKb(vector, vector->end, count - _ZNKSt6vectorIb12AsdAllocatorIbEE4sizeEv(vector), &value);
    } else if (count < _ZNKSt6vectorIb12AsdAllocatorIbEE4sizeEv(vector)) {
        BitIterator begin = vector->begin;
        BitIterator cut;
        _ZNKSt6vectorIb12AsdAllocatorIbEE8iteratorplEi(&cut, &begin, count);
        BitIterator end;
        _ZNSt6vectorIb12AsdAllocatorIbEE7_C_copyINS2_8iteratorEEES4_T_S5_S4_(&end, vector, vector->end, vector->end, cut);
        vector->end = end;
    }
}
}
