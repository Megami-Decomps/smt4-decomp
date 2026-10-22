#include "ui/MessageMain.h"
#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {
extern MessageGlobalsA g_messageMain;
GameDataSub *gameDataBlocksGetSaveData(void);
void FUN_0014e188(void *sprite, s32 kind, s32 flags, void *context, u32 parameter, f32 alpha);
void pairSetFirstResetSecond(void *sprite, s32 state);
void uiSpriteSelectAnim(void *sprite, s32 animation);

/* Restores the saved message value and reopens the banner's resume animation. */
u32 messageRestoreBanner(void)
{
    MessagePanelA *panel = g_messageMain.panel;
    if (gameDataBlocksGetSaveData()->runtime.unk21D8C == 0) {
        return 1;
    }
    panel->unk168 = gameDataBlocksGetSaveData()->runtime.unk21D8C;
    panel->unk16D = 1;
    panel->unk16C = 1;
    FUN_0014e188(panel->spriteC18, 8, -1, panel->block194, 0xB, 1.0f);
    pairSetFirstResetSecond(panel->spriteC18, 0x16);
    uiSpriteSelectAnim(panel->spriteC18, 6);
    return 1;
}
}
