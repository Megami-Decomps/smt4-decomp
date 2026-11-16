#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

struct BattleCamera { u8 unk000[0x6a8]; u8 enabled; };
extern BattleCamera *g_btlCamera;

static __inline void btlCameraSetEnabled(BattleCamera *camera, u8 enabled)
{
    camera->enabled = enabled;
}

/* Script command: enables the battle camera when argument 0 is nonzero, disables it otherwise. */
s32 scrCommSetBattleCameraEnabled(void)
{
    if (scrGetArg(0) != 0) {
        btlCameraSetEnabled(g_btlCamera, 1);
    } else {
        btlCameraSetEnabled(g_btlCamera, 0);
    }
    return 1;
}

} /* extern "C" */
