/* NON_MATCHING: item id now goes through the inlined shopListItemGetId (ldrh, sxth, uxth match); retail schedules `mov r2, #0` before the getter, the build leaves a `nop {0}` there and moves the mov after it (the caller would need the getter's clobber set). */
#include "common.h"

/* One item on sale (0x20 bytes). */
struct ShopListItem {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 itemId;
    /* 0x06 */ u8 unk06[0x1a];
};

/* The shop's purchase confirmation work. */
struct ShopConfirm {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ s32 state;
    /* 0x018 */ s32 step;
    /* 0x01c */ u8 unk01c[4];
    /* 0x020 */ u8 cursor[0x74];
    /* 0x094 */ s8 rank; /* 100 and above: discounted */
    /* 0x095 */ u8 unk095[0x50b];
    /* 0x5a0 */ u32 script;
    /* 0x5a4 */ u8 unk5a4;
    /* 0x5a5 */ u8 quantity;
    /* 0x5a6 */ u8 unk5a6[2];
    /* 0x5a8 */ ShopListItem items[1];
};

extern "C" {
s32 scrRunOpcodesStub(u32 script);
s32 messageMainGetChoiceResult(void);
void messageMainSetTargetFlags(u32 flags);
void FUN_002a0cc8(s32 mode);
void buttonHelpSetPreset(s32 preset);
s32 flaggedValueHolderGetTotal(u8 *cursor);
u16 shopListItemGetId(const ShopListItem *item);
s32 FUN_0029ce60(u16 itemId, u8 quantity, s32 mode, s32 discounted, s32 extra);
void FUN_0029c43c(s32 amount, s32 mode);
void FUN_002e3150(void);

/* Waits for the confirmation script; on "yes" pays for the selected item and moves to state 4,
 * otherwise returns to state 2. */
void FUN_003a8240(ShopConfirm *shop)
{
    if (scrRunOpcodesStub(shop->script) != 2) {
        return;
    }
    if (messageMainGetChoiceResult() != 0) {
        messageMainSetTargetFlags(0);
        FUN_002a0cc8(0);
        shop->state = 2;
        shop->step = 0;
        buttonHelpSetPreset(45);
        return;
    }
    ShopListItem *items = shop->items;
    ShopListItem *item = &items[flaggedValueHolderGetTotal(shop->cursor)];
    s16 itemId = shopListItemGetId(item);
    s32 price = FUN_0029ce60(itemId, shop->quantity, 0, shop->rank >= 100, 0);
    FUN_0029c43c(-price, 0);
    FUN_002a0cc8(1);
    shop->state = 4;
    shop->step = 0;
    FUN_002e3150();
    buttonHelpSetPreset(45);
}
}
