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
u32 FUN_00307704(const BitVectorRange*);
void FUN_00134ffe(BitVectorRange*, BitIterator, u32, const bool*);
void FUN_002f1840(BitIterator*, const BitIterator*, u32);
void FUN_00307632(BitIterator*, BitVectorRange*, BitIterator, BitIterator, BitIterator);

// Grow with the requested bit value or move the logical end backward.
void bitVectorResizeFill(BitVectorRange* vector, u32 count, bool value)
{
    if (FUN_00307704(vector) < count) {
        FUN_00134ffe(vector, vector->end, count - FUN_00307704(vector), &value);
    } else if (count < FUN_00307704(vector)) {
        BitIterator begin = vector->begin;
        BitIterator cut;
        FUN_002f1840(&cut, &begin, count);
        BitIterator end;
        FUN_00307632(&end, vector, vector->end, vector->end, cut);
        vector->end = end;
    }
}
}
