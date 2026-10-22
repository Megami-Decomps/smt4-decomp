#include "common.h"

struct StageEffectOrigin { u8 unk00[0x18]; f32 height; };
extern "C" {
extern void *g_btlUiBlock;
extern void *g_btlAux;
extern StageEffectOrigin DAT_00529780[];
void FUN_004aaa94(void *ui);
s32 btlStageGetModeIndex(u32 stage);
void FUN_004f5238(void *context, u32 first, u32 second, u32 kind, u32 enabled, u32 mode, u32 flags, u32 active, u32 extra, f32 x, f32 y);
void FUN_004fb43c(u32 first, u32 second, u32 id, u32 enabled, u32 flags, u32 mode, u32 extra);

// Spawn the three stage-height-relative battle effects and their associated effect resource.
void btlSpawnStageHeightEffects(u32 stage)
{
    FUN_004aaa94(g_btlUiBlock);
    f32 height = 0.0f;
    s32 index = btlStageGetModeIndex(stage);
    if (index >= 0)
        height = DAT_00529780[index].height;
    FUN_004f5238(g_btlAux, 0, 0, 9, 1, 6, 0, 1, 0, 15.1f, height + 5.0f);
    FUN_004f5238(g_btlAux, 0, 0, 9, 1, 6, 0, 1, 0, -14.6f, height + -3.4f);
    FUN_004f5238(g_btlAux, 0, 0, 9, 1, 6, 0, 1, 0, 9.1f, height + -3.0f);
    FUN_004fb43c(0, 0, 0x10000bd, 1, 0, 0, 0);
}
}
