#include "common.h"
#include "battle/BtlGlobals.h"

extern "C" {

s32 scrGetArg(u32 index);
void obj4FStartSwitch(void *camera, s32 target);

/* Script command: starts the battle camera switch to the target given as argument. */
u32 scrComm_BattleCamera_StartSwitch(void)
{
    obj4FStartSwitch(reinterpret_cast<void *>(g_btlCamera), scrGetArg(0));
    return 1;
}

} /* extern "C" */
