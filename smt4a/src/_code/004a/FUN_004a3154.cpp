/* NON_MATCHING: retail forms &items (+0x864) before the cursor call and loads the id as ldrh+sxth+uxth; ours folds the offset into a pool constant and uses ldrsh. */
#include "common.h"

extern "C" {

/* A purchasable entry of the panel's list (0x20 bytes). */
typedef struct PanelListItem {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 id;
    /* 0x06 */ u8 unk06[0x1A];
} PanelListItem;

/* The purchase panel: only the fields this unit touches are named. */
typedef struct PurchasePanel {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ s32 state;
    /* 0x018 */ s32 timer;
    /* 0x01C */ u8 unk01C[4];
    /* 0x020 */ u8 cursor[0x74];
    /* 0x094 */ s8 level;
    /* 0x095 */ u8 unk095[0x7CC];
    /* 0x861 */ u8 alternate;
    /* 0x862 */ u8 unk862[2];
    /* 0x864 */ PanelListItem items[1];
} PurchasePanel;

s32 panelStateIs0(void);
s32 FUN_0035dbb0(void);
void messageMainSetTargetFlags(s32 arg);
s32 flaggedValueHolderGetTotal(void *holder);
s32 FUN_004d0cd4(void);
void dispatchIfFound(s32 target, u16 id, bool alternate);
s32 FUN_004a8750(u16 id, u8 alternate, s32 arg2, bool highLevel, s32 arg4);
void FUN_004a0ef4(s32 amount);
void FUN_00408184(s32 kind, s32 amount);
void FUN_003343f0(s32 arg);

/* Buys the entry under the cursor: notifies the target, pays its price and moves the panel to state 2. */
void FUN_004a3154(PurchasePanel *panel)
{
    s16 id;
    s32 target;
    s32 price;

    if (panelStateIs0() != 1 || !FUN_0035dbb0()) {
        return;
    }
    messageMainSetTargetFlags(0);
    id = panel->items[flaggedValueHolderGetTotal(panel->cursor)].id;
    target = FUN_004d0cd4();
    if (target != -1) {
        dispatchIfFound(target, id, panel->alternate != 0);
    }
    price = FUN_004a8750(id, panel->alternate, 0, panel->level >= 100, 0);
    FUN_004a0ef4(-price);
    FUN_00408184(40, price);
    FUN_003343f0(0);
    panel->state = 2;
    panel->timer = 0;
}

} /* extern "C" */
