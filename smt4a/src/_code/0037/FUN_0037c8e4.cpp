#include "ui/MessageMainA.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
u32 gameDataBlocks2GetWord4(void);
void uiSpriteStateInitFromSource(void* sprite, s32 kind, u32 flags, void* data,
                  s32 count, f32 scale);
void pairSetFirstResetSecond(void* pair, s32 first);
}

// Initialize the message state from the selected data source and prepare its sprite.
extern "C" u32 FUN_0037c8e4(u8 messageId, s32 useDataBlock)
{
    MessageWindowA *banner = g_messageMain.banner;
    banner->wideValue = 1;
    banner->counterState = 1;

    if (useDataBlock == 0) {
        u32 value = gameGetSlotTable()->money;
        banner->counterValue = value;
        banner->counterBase = value;
    } else {
        u32 value = gameDataBlocks2GetWord4();
        banner->counterValue = value;
        banner->counterBase = value;
    }

    banner->unk0092 = 0;
    banner->popupShown = 0;
    banner->unk016D = 0;
    banner->alternateAnimation = messageId;
    uiSpriteStateInitFromSource(&banner->sprites[17], 8, 0xFFFFFFFFu, &banner->parameters, 11, 1.0f);
    pairSetFirstResetSecond(&banner->sprites[17], 0);
    uiSpriteSelectAnim(&banner->sprites[17], 6);
    return 1;
}
