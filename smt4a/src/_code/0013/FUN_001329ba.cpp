/* NON_MATCHING: retail uses push {r0, r1, r2, r3, r4, r5, r6, lr} where the compiled block uses push {r4, lr}. */
#include "common.h"

struct Collection {
    u8 unk00[0x10]; // 0x00
    u32* end;      // 0x10
};

extern "C" {
s32 wordRefsDiffer_002ee988(u32* current, u32** end);
void FUN_001329ec(u32* result, Collection* collection, u32* current);

void FUN_001329ba(Collection* collection)
{
    u32* end = collection->end;
    u32 current = *end;
    u32 result;
    u32 input;

    while (wordRefsDiffer_002ee988(&current, &end) != 0) {
        input = current;
        FUN_001329ec(&result, collection, &input);
        current = result;
    }

}
}
