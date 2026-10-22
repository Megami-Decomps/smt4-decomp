/* NON_MATCHING: in the custom-layout branch retail adds the slot part and the party-size part into r0 before two plain loads; this build folds them into a writeback load. */
#include "common.h"

/* The battle state's twelve party-panel slots. */
struct BtlPanelSlot411c04 {
    /* 0x0 */ u32 active;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 unk8;
    /* 0xC */ u8 unkC[0x4];
};

struct BtlPanelState411c04 {
    /* 0x0000 */ u8 unk0000[0x4D78];
    /* 0x4D78 */ BtlPanelSlot411c04 slots[12];
};

/* Where a panel goes for a given number of active party slots. */
struct PanelLayout411c04 {
    /* 0x0 */ s32 x;
    /* 0x4 */ s32 unk4;
    /* 0x8 */ s32 y;
};

struct PanelItem411c04 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 x;
    /* 0x18 */ s32 y;
};

struct PanelMenu411c04 {
    /* 0x000 */ u8 unk000[0x34];
    /* 0x034 */ PanelItem411c04 items[12];
    /* 0x184 */ u32 useCustomLayouts;
    /* 0x188 */ PanelLayout411c04 (*customLayouts)[12];
};

extern "C" {

extern PanelLayout411c04 DAT_005e156c[][12];
BtlPanelState411c04 *btlGetMainState(void);
s32 partyCountActiveSlots(void);
void FUN_00411e8c(PanelMenu411c04 *menu, PanelItem411c04 *item);

// Place one panel per active battle slot using the layout for the current party size; `reset` also
// clears the slots' two values.
void FUN_00411c04(PanelMenu411c04 *menu, s32 reset)
{
    BtlPanelState411c04 *state = btlGetMainState();
    if (state == NULL) {
        return;
    }
    s32 n = 0;
    for (s32 i = 0; i < 12; i++) {
        if (state->slots[i].active != 0) {
            if (reset) {
                state->slots[i].unk4 = 0;
                state->slots[i].unk8 = 0;
            }
            PanelItem411c04 *item = &menu->items[n];
            s32 count = partyCountActiveSlots();
            s32 x;
            s32 y;
            if (menu->useCustomLayouts) {
                PanelLayout411c04 *layout = &menu->customLayouts[count - 1][n];
                x = layout->x;
                y = layout->y;
            } else {
                PanelLayout411c04 *layout = &DAT_005e156c[count - 1][n];
                x = layout->x;
                y = layout->y;
            }
            item->y = y;
            item->x = x;
            FUN_00411e8c(menu, item);
            n++;
        }
    }
}

} /* extern "C" */
