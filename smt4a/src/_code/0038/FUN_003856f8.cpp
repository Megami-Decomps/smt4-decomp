#include "common.h"
#include "map/LmapGlobals.h"

extern "C" {
extern s32 gameFlagIsSet(u32 flag);
extern s32 saveSlotSelectedIsId175(void);
extern void moriModelUnitStartMaterialAnimation(u32 target, u32 mode, u32 option, f32 amount);
}

// Apply the requested mode, with a mode-3, amount-10 override when required by game state.
extern "C" void FUN_003856f8(u32 mode)
{
    if (g_lmapScene->models[7] == 0) {
        return;
    }

    s32 flagSet = gameFlagIsSet(0x4c9);
    f32 amount = 0.0f;
    if (flagSet != 0 && saveSlotSelectedIsId175() == 0) {
        moriModelUnitStartMaterialAnimation(g_lmapScene->models[7]->controller, 3, 2, 10.0f);
        return;
    }

    moriModelUnitStartMaterialAnimation(g_lmapScene->models[7]->controller, mode, 2, amount);
}
