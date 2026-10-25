#include "shard/Shard003C.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

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
