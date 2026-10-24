/* NON_MATCHING: battle command menu request handler; draft shape, the repeated btlGetMainState flag test is one inline helper here while retail expands it twice with different compare order */
#include "common.h"

struct BtlMenuPanel {
    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ u8 header[0x118];
    /* 0x0138 */ u8 slots[8][0x8C];
    /* 0x0578 */ u8 unk0578[0x3304];
    /* 0x387C */ u32 currentMode;
    /* 0x3880 */ u32 returnMode;
    /* 0x3884 */ u8 unk3884[4];
    /* 0x3888 */ u32 mode;
    /* 0x388C */ u8 unk388C[4];
    /* 0x3890 */ u32 target;
    /* 0x3894 */ u8 unk3894[0x24];
    /* 0x38B8 */ u8 closing;
    /* 0x38B9 */ u8 unk38B9[0x323];
    /* 0x3BDC */ u8 entry[0xBC];
    /* 0x3C98 */ u32 clear[4];
};

struct BtlMenuMainState {
    /* 0x0000 */ u8 unk0000[0x45A0];
    /* 0x45A0 */ u32 flagsA;
    /* 0x45A4 */ u32 flagsB;
};

extern "C" {
extern u32 DAT_00573ba8;   /* battle flag mask tested against flagsA */
extern u32 DAT_00573bac;   /* battle flag mask tested against flagsB */

BtlMenuMainState *btlGetMainState(void);
s32 btlScriptUnitHasFlags(void);
void uiSpriteSelectAnim(void *sprite, s32 animation);
void FUN_0020acd8(BtlMenuPanel *panel, u32 a, u32 b);
void FUN_0020ad6c(BtlMenuPanel *panel, u32 mode, u32 flag);
void FUN_0020d3d4(BtlMenuPanel *panel);
void screenSetContextHint(BtlMenuPanel *panel, u32 hint, u32 target);
void flaggedEntrySetValueB(void *entry, s32 value);
void FUN_003363a8(BtlMenuPanel *panel, u32 a, s32 b, u32 c);
u32 FUN_002cc9e0(BtlMenuPanel *panel, u32 arg);

#define BTL_MENU_CLOSE_ANIMATION 0x1B
#define BTL_MENU_CLOSED_MODE 0x2D

/* Whether the current battle state blocks the menu (script flags, or either flag word masked). */
static __inline bool btlMenuBlocked(void)
{
    btlGetMainState();
    if (btlScriptUnitHasFlags() != 0)
        return true;
    BtlMenuMainState *state = btlGetMainState();
    return (state->flagsB & DAT_00573bac) != 0 || (DAT_00573ba8 & state->flagsA) != 0;
}

/* Handles a request to the battle command menu: closes it, switches mode by the requested
 * kind, or refreshes the shown entry. */
void FUN_00231cdc(BtlMenuPanel *panel, u32 a, s32 request, u32 b)
{
    if (panel->closing != 0) {
        panel->target = 0;
        FUN_0020d3d4(panel);
        flaggedEntrySetValueB(panel->entry, 0);
        uiSpriteSelectAnim(panel->header, BTL_MENU_CLOSE_ANIMATION);
        for (s32 i = 0; i < 8; i++)
            uiSpriteSelectAnim(panel->slots[i], BTL_MENU_CLOSE_ANIMATION);
        panel->mode = BTL_MENU_CLOSED_MODE;
        FUN_0020ad6c(panel, 0x10, 1);
        return;
    }

    if (btlMenuBlocked()) {
        FUN_003363a8(panel, a, 1, b);
        return;
    }

    if (request != -1) {
        if (request == 0xB) {
            FUN_0020ad6c(panel, panel->returnMode, 1);
            return;
        }
        if (request != 1) {
            if (request != 2) {
                if (request == 7) {
                    FUN_0020ad6c(panel, 10, 1);
                    return;
                }
                if (request == 3) {
                    FUN_0020ad6c(panel, 0xC, 1);
                    return;
                }
                if (request != 0xC) {
                    FUN_0020ad6c(panel, 1, 1);
                    return;
                }
            }
        } else {
            panel->clear[0] = 0;
            panel->clear[1] = 0;
            panel->clear[2] = 0;
            panel->clear[3] = 0;
        }
        FUN_0020ad6c(panel, 8, 1);
        return;
    }

    u32 mode = panel->currentMode;
    if (mode == 0x1A || mode == 0x1B) {
        FUN_0020ad6c(panel, 1, 0);
        u32 hint = FUN_002cc9e0(panel, 1);
        screenSetContextHint(panel, hint, panel->target);
        return;
    }
    if (mode != 0x11 && !btlMenuBlocked()) {
        FUN_003363a8(panel, a, 1, b);
        return;
    }
    FUN_0020acd8(panel, a, b);
}

} /* extern "C" */
