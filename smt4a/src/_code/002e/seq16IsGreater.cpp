#include "shard/W6_W6Match5_SequenceTree.h"

extern "C" {


/* Returns 1 when the 16-bit value of `a` is greater than that of `b`. */
u32 seq16IsGreater(const SequenceTreeKey *a, const SequenceTreeKey *b)
{
    if (0 < (s16)(a->value - b->value)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
