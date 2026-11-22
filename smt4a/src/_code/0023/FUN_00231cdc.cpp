/* NON_MATCHING: retail loads the state flags with ldm into r0/r2 (built: ldrd r0/r1, other and operands), sets the
 * mode argument before the flag in the tail calls of btlCommandMenuEnterMode (built: flag first), and moves the
 * animation id after the slot address in the close loop */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/BattleHelpers_VariantB.h"
#include "common.h"

struct BtlMenuPanel {
    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ u8 header[0x118];
    /* 0x0138 */ u8 slots[8][0x8C];
    /* 0x0598 */ u8 unk0598[0x32E4];
    /* 0x387C */ u32 currentMode;
    /* 0x3880 */ u32 returnMode;
    /* 0x3884 */ u8 unk3884[4];
    /* 0x3888 */ u32 mode;
    /* 0x388C */ u8 unk388C[4];
    /* 0x3890 */ u32 target;
    /* 0x3894 */ u8 unk3894[0x24];
    /* 0x38B8 */ s8 closing;
    /* 0x38B9 */ u8 unk38B9[0x323];
    /* 0x3BDC */ u8 entry[0xBC];
    /* 0x3C98 */ u32 clear[4];
};


/* The command menu's battle flag masks (0x573b88). */
struct CommandMenuMasks {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u64 blocked; /* state flags that block the menu */
};

extern "C" {
extern CommandMenuMasks DAT_00573b88;

void uiSpriteSelectAnim(void *sprite, s32 animation);
void FUN_0020acd8(BtlMenuPanel *panel, u32 a, u32 b);
void btlCommandMenuEnterMode(BtlMenuPanel *panel, u32 mode, u32 flag);
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
    return btlScriptUnitHasFlags(btlGetMainState()) != 0 ||
           (btlGetMainState()->stateFlags64.bits & DAT_00573b88.blocked) != 0;
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
        btlCommandMenuEnterMode(panel, 0x10, 1);
        return;
    }

    if (btlMenuBlocked()) {
        FUN_003363a8(panel, a, 1, b);
        return;
    }

    if (request == -1) {
        if (panel->currentMode == 0x1A || panel->currentMode == 0x1B) {
            btlCommandMenuEnterMode(panel, 1, 1);
            screenSetContextHint(panel, FUN_002cc9e0(panel, 1), panel->target);
            return;
        }
        if (panel->currentMode != 0x11 && !btlMenuBlocked()) {
            FUN_003363a8(panel, a, 1, b);
            return;
        }
        FUN_0020acd8(panel, a, b);
    } else if (request == 0xB) {
        btlCommandMenuEnterMode(panel, panel->returnMode, 1);
    } else if (request == 1) {
        for (s32 i = 0; i < 4; i++)
            panel->clear[i] = 0;
        btlCommandMenuEnterMode(panel, 8, 1);
    } else if (request == 2) {
        btlCommandMenuEnterMode(panel, 8, 1);
    } else if (request == 7) {
        btlCommandMenuEnterMode(panel, 10, 1);
    } else if (request == 3) {
        btlCommandMenuEnterMode(panel, 0xC, 1);
    } else if (request == 0xC) {
        btlCommandMenuEnterMode(panel, 8, 1);
    } else {
        btlCommandMenuEnterMode(panel, 1, 1);
    }
}

} /* extern "C" */
