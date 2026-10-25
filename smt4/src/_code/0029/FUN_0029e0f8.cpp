#include "shard/GameGlobals.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

u8 FUN_0029e0f8(void)
{
    if (g_gameGlobals.data->activeState == 1) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
