#include "shard/Shard003B.h"
#include "saveLoadUI/SaveLoadUIBase.h"

extern "C" {

/* Requests portrait texture `index` of the set (state 1) unless it is loaded or already loading. */
void stateTableMarkIfUnlocked(ResSet *set, u32 index)
{
    if (set == NULL) {
        return;
    }
    if (!requestTextureIsLoaded(index)) {
        if (set->states[index] != RES_SET_TEXTURE_LOADED && set->states[index] != RES_SET_TEXTURE_LOADING) {
            set->states[index] = RES_SET_TEXTURE_REQUESTED;
        }
    }
}

} /* extern "C" */
