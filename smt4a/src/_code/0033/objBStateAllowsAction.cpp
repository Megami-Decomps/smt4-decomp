#include "shard/Shard0033.h"
#include "network/DataStore/DataStoreMain.h"
#include "game/GameGlobalsRef.h"

extern "C" {

extern s32 fourPtrsAllNull(u32 value);

/* True when the object's state is 5, 6, 7 or 9 and fourPtrsAllNull accepts its +0x2034 value. */
u32 objBStateAllowsAction(void)
{
    s32 state = g_gameGlobals.instance->activeState;

    if ((state == 5 || state == 6 || state == 7 || state == 9) && fourPtrsAllNull(g_gameGlobals.instance->unk2034) != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
