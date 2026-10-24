#include "ui/MessageMain.h"
#include "shard/GameDataBlocks.h"

extern "C" {
void pairSetFirstResetSecond(void *pair, u32 first);
void FUN_002bd954(void *widget, u32 mode, s32 value, const void *text, u32 kind, f32 scale);
void spriteStartAnimationByIndex(void *widget, u32 mode);
GameSaveData *gameDataBlocksGetSaveData();
extern MessageGlobals g_messageMain;

u32 messageInitializeSavedBanner()
{
    MessagePanel *panel = g_messageMain.banner;
    GameSaveData *save = gameDataBlocksGetSaveData();
    if (save->unk1F454 == 0) {
        return 1;
    }
    panel->unk9C = gameDataBlocksGetSaveData()->unk1F454;
    panel->unkA1 = 1;
    panel->unkA0 = 1;
    FUN_002bd954(panel->widget, 0xe, -1, panel->textBuffer, 0xb, 1.0f);
    pairSetFirstResetSecond(panel->widget, 0x16);
    spriteStartAnimationByIndex(panel->widget, 6);
    return 1;
}
}
