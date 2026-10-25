#include "shard/Shard0049.h"
#include "shard/W6_W6Match6_SpritePresetBank.h"

extern "C" {
extern s32 DAT_00588f78[][2];
void FUN_004954e8(EquipmentMenuState *menu);
void messageChoiceShowCurrent(EquipmentMenuState *menu);
s32 inputIsQuestRepeatRight(void);
s32 recordGetModeForId(s32 itemId);
s32 FUN_004d0494(void);
s32 inputIsQuestMenuPressed(void);
s32 inputIsQuestCancelPressed(void);
void FUN_00496a0c(EquipmentMenuState *menu, u32 changed);
void sendEvent1000210(void);
void sendEvent100020F(void);
void sendEvent100020E(void);
void menuOpenCommandList(EquipmentMenuState *menu);
void uiSpriteBankApplyPreset(SpritePresetBank *bank, u32 preset);

static inline void shopMenuChangeState(EquipmentMenuState *menu, u32 state)
{
    menu->transition.previousState = menu->transition.state;
    menu->transition.state = state;
    menu->transition.frame = 0;
}

// Navigate equipment choices or enter the shop's auxiliary menu.
void FUN_00498594(EquipmentMenuState *menu)
{
    // Neighbor identifiers lie immediately beyond the recovered shared object prefix.
    struct ShopNeighborView {
        EquipmentMenuState menu;
        s16 nextItem;
        s16 previousItem;
    };
    ShopNeighborView *neighbors = reinterpret_cast<ShopNeighborView *>(menu);
    FUN_004954e8(menu);
    messageChoiceShowCurrent(menu);
    if (inputIsQuestRepeatRight() || recordGetModeForId(neighbors->nextItem) == 6) {
        menu->selection.index = DAT_00588f78[menu->selection.index][0];
        FUN_00496a0c(menu, 1);
        sendEvent1000210();
        return;
    }
    if (FUN_004d0494() || recordGetModeForId(neighbors->previousItem) == 6) {
        menu->selection.index = DAT_00588f78[menu->selection.index][1];
        FUN_00496a0c(menu, 1);
        sendEvent1000210();
        return;
    }
    if (inputIsQuestMenuPressed()) {
        uiSpriteBankApplyPreset(reinterpret_cast<SpritePresetBank *>(menu->unk00000 + 0x3CC), 1);
        sendEvent100020F();
        shopMenuChangeState(menu, 0x13);
    } else if (inputIsQuestCancelPressed()) {
        sendEvent100020E();
        menuOpenCommandList(menu);
    }
}
}
