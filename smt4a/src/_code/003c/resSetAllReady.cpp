#include "shard/Shard003C.h"
#include "saveLoadUI/SaveLoadUIBase.h"

extern "C" {

/* True unless one of the nine entries is in state 2 while asdTMTexTableNodeIsLoaded says it is not set. */
u32 resSetAllReady(ResSet *set)
{
    s32 i;

    if (set == NULL) {
        return 0;
    }
    for (i = 0; i < 9; i++) {
        if (set->states[i] == 2 && !requestTextureIsLoaded(i)) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
