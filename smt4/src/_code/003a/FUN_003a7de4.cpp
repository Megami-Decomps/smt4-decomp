/* NON_MATCHING: retail builds the entry-table base (menu + 0x5a8) before the selection call and reads the id with ldrh + sxth/uxth; armcc here folds it into one ldrsh with a pooled offset. */
#include "common.h"

namespace {
struct PurchaseEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 id;
    /* 0x06 */ u8 unk06[0x1a];
};

struct PurchaseMenu {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ s32 state;
    /* 0x018 */ s32 timer;
    /* 0x01C */ u8 unk01c[4];
    /* 0x020 */ u8 selection[0x74];
    /* 0x094 */ s8 level;
    /* 0x095 */ u8 unk095[0x510];
    /* 0x5A5 */ u8 discounted;
    /* 0x5A6 */ u8 unk5a6[2];
    /* 0x5A8 */ PurchaseEntry entries[1];
};
}

extern "C" {

s32 messageMainTargetIsClear(void);
s32 gameGlobalsFlagIsClear(void);
void messageMainSetTargetFlags(s32 flags);
s32 flaggedValueHolderGetTotal(void *holder);
s32 FUN_0029c1fc(void);
void FUN_0029c1c8(s32 slot, u16 id, bool discounted);
s32 FUN_0029ce60(u16 id, u8 discounted, s32 mode, bool highLevel, s32 flags);
void FUN_00295c04(s32 amount);
void gameCounterAddSaturating(s32 counter, s32 amount);
void FUN_002a0cc8(s32 arg);

/* Once the message is closed, pay the price of the selected demon and move the menu to state 2. */
void FUN_003a7de4(PurchaseMenu *menu)
{
    if (messageMainTargetIsClear() == 1 && gameGlobalsFlagIsClear()) {
        messageMainSetTargetFlags(0);
        PurchaseEntry *entry = &menu->entries[flaggedValueHolderGetTotal(menu->selection)];
        s16 id = entry->id;
        s32 slot = FUN_0029c1fc();
        if (slot != -1) {
            FUN_0029c1c8(slot, id, menu->discounted != 0);
        }
        s32 price = FUN_0029ce60(id, menu->discounted, 0, menu->level >= 100, 0);
        FUN_00295c04(-price);
        gameCounterAddSaturating(0x28, price);
        FUN_002a0cc8(0);
        menu->state = 2;
        menu->timer = 0;
    }
}

} /* extern "C" */
