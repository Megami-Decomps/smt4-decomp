#include "shard/Shard003C.h"

extern "C" {

extern u8 FUN_0018206c(s32 a, u32 b);
extern u32 FUN_002adba8(s32 index);

/* True unless one of the nine entries is in state 2 while FUN_0018206c says it is not set. */
u32 resSetAllReady(ResSet *set)
{
    s32 i;

    for (i = 0; i < 9; i++) {
        if (set->states[i] == 2 && FUN_0018206c(0x2E, FUN_002adba8(i)) == 0) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
