/* NON_MATCHING: register allocation only: retail keeps b in r4 and re-copies it to r6 before the second rank call */
/* Compares two ids: by FUN_00246570 key (descending), then by FUN_00230f44 rank. */
#include "common.h"

extern "C" {

extern s32 aocItemGetPrice(u32 id);
extern s32 FUN_0049c9a0(u32 id);

s32 FUN_00494530(u32 a, u32 b)
{
    s32 keyA = aocItemGetPrice(a);
    s32 keyB = aocItemGetPrice(b);
    s32 diff = keyB - keyA;

    if (diff == 0) {
        diff = FUN_0049c9a0(a) - FUN_0049c9a0(b);
    }
    return diff;
}

}
