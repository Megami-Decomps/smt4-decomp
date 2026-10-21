#include "shard/Shard003C.h"

extern "C" {

extern u8 asdTMTexTableNodeIsLoaded(s32 a, u32 b);
extern u32 requestIdToCode(s32 index);

/* True unless one of the nine entries is in state 2 while asdTMTexTableNodeIsLoaded says it is not set. */
u32 resSetAllReady(ResSet *set)
{
    s32 i;

    if (set == NULL) {
        return 0;
    }
    for (i = 0; i < 9; i++) {
        if (set->states[i] == 2 && asdTMTexTableNodeIsLoaded(0x2E, requestIdToCode(i)) == 0) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
