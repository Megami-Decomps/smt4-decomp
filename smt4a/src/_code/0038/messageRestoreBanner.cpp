#include "ui/MessageMainA.h"
#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {
GameSaveBodyA *gameDataBlocksGetSaveData(void);
void uiSpriteStateInitFromSource(void *sprite, s32 kind, s32 flags, void *context, u32 parameter, f32 alpha);
void pairSetFirstResetSecond(void *sprite, s32 state);
void uiSpriteSelectAnim(void *sprite, s32 animation);

/* Restores the saved message value and reopens the banner's resume animation. */
u32 messageRestoreBanner(void)
{
    MessageWindowA *panel = g_messageMain.banner;
    if (gameDataBlocksGetSaveData()->runtime.unk21D8C == 0) {
        return 1;
    }
    panel->unk0168 = gameDataBlocksGetSaveData()->runtime.unk21D8C;
    panel->unk016D = 1;
    panel->unk016C = 1;
    uiSpriteStateInitFromSource(&panel->sprites[19], 8, -1, &panel->parameters, 0xB, 1.0f);
    pairSetFirstResetSecond(&panel->sprites[19], 0x16);
    uiSpriteSelectAnim(&panel->sprites[19], 6);
    return 1;
}
}
