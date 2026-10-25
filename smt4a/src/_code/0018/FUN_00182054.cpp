#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

extern int requestIdToCode(void);
s32 FUN_00182054(u8 arg0)
{
    asdTMTexTableNodeIsLoaded(46, requestIdToCode());
}

} /* extern "C" */
