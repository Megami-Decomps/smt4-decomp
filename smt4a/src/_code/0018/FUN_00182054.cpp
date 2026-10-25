#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "shard/FUN_00182054.h"

extern "C" {

extern int requestIdToCode(void);
s32 FUN_00182054(u8 arg0)
{
    asdTMTexTableNodeIsLoaded(46, requestIdToCode());
}

} /* extern "C" */
