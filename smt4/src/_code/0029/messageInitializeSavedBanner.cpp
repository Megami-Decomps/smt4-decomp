#include "ui/UiSpriteApi.h"
#include "ui/MessageMain.h"
#include "shard/GameDataBlocks.h"

extern "C" {
GameSaveBody *gameDataBlocksGetSaveData();

u32 messageInitializeSavedBanner()
{
    MessageWindow *panel = g_messageMain.banner;
    GameSaveBody *save = gameDataBlocksGetSaveData();
    if (save->unk1F454 == 0) {
        return 1;
    }
    panel->unk09C = gameDataBlocksGetSaveData()->unk1F454;
    panel->unk0A1 = 1;
    panel->unk0A0 = 1;
    uiSpriteStateInitFromSource(&panel->sprites[14], 0xe, -1, &panel->parameters, 0xb, 1.0f);
    pairSetFirstResetSecond(&panel->sprites[14], 0x16);
    spriteStartAnimationByIndex(&panel->sprites[14], 6);
    return 1;
}
}
