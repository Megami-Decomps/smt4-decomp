/* NON_MATCHING: retail uses `movne r1, #1` where armcc emits `movne r0, #1`. */
#include "common.h"

extern "C" {

struct BattleCamera { u8 unk000[0x6a8]; u8 enabled; };
extern BattleCamera *g_btlCamera;
s32 scrGetArg(u32 index);

s32 scrCommSetBattleCameraEnabled(void)
{
    g_btlCamera->enabled = scrGetArg(0) != 0;
    return 1;
}

} /* extern "C" */
