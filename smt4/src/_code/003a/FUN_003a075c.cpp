/* NON_MATCHING: register allocation only: retail keeps b in r4 and re-copies it to r6 before the second rank call */
/* Compares two ids: by aocItemGetPrice key (descending), then by FUN_00230f44 rank. */
#include "common.h"

extern "C" {

extern s32 aocItemGetPrice(u32 id);
extern s32 FUN_00230f44(u32 id);


s32 FUN_003a075c(u32 a, u32 b)
{
    s32 keyA = aocItemGetPrice(a);
    s32 keyB = aocItemGetPrice(b);
    s32 diff = keyB - keyA;

    if (diff == 0) {
        diff = FUN_00230f44(a) - FUN_00230f44(b);
    }
    return diff;
}

}
