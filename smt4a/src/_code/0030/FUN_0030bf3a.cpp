#include "shard/W6_W6Match5_SequenceTree.h"

// The state-free tree comparator reverses operands for the greater-than primitive.
extern "C" u32 FUN_0030bf3a(void *context, const SequenceTreeKey *left,
                            const SequenceTreeKey *right)
{
    return seq16IsGreater(right, left);
}
