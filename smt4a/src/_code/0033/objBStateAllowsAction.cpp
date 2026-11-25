#include "shard/Shard0033.h"
#include "network/DataStore/DataStoreMain.h"
#include "game/GameGlobalsRef.h"
#include "code/Code003e_Smt4a.h"

extern "C" {

/* True for states 5, 6, 7 and 9 once the status model has no pending resources. */
u32 objBStateAllowsAction(void)
{
    s32 state = g_gameGlobals.instance->activeState;

    if ((state == 5 || state == 6 || state == 7 || state == 9) && fourPtrsAllNull((FourPtrs *)g_gameGlobals.instance->statusModel) != 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
