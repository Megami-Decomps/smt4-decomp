#pragma once
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

u32 requestIdToCode(u32 id);

} /* extern "C" */

/* Whether the texture of request `index` (texture table 0x2E: the character panel's portraits) is loaded: the
 * test resSetAllReady, resSetFree, stateTableMarkIfUnlocked and textureRequestCacheGet share. */
static __inline s32 requestTextureIsLoaded(s32 index)
{
    return asdTMTexTableNodeIsLoaded(0x2E, requestIdToCode(index));
}
