/* NON_MATCHING: 12 lines; control flow, registers and pool match. Only the 64-bit marker-flags test of command 2
 * differs, in registers: retail loads the mask's low word into r1, the two flag words with `ldm r2, {r0, r2}` and
 * ands into r1 (low: mask & flags) and r0 (high: flags & mask); the build loads the mask's low word into r2, the
 * flag words with `ldrd r0, [r1]` and ands into r0 and r1. FUN_00231cdc has the same retail sequence for its
 * state-flags test, and the other users of g_btlCommandMenuData's masks differ in their mask loads as well.
 * Tried without effect (both operand orders each): `!`, a bool local, an inline test or flags getter of every
 * result type, the mask global as a u64/s64/const array. Worse: word-wise tests (18-123 lines), the flags or
 * the battle in a local (40-120), the inverted if (104), a (battle, mask) test (16-46). */
#include "battle/BtlMainAccess.h"
#include "battle/BtlCommandMenuData.h"
#include "common.h"
#include "code/Code002c_Smt4a.h"

/* One command list object (100 bytes). */
struct Object {
    u8 unk00[100];
};

struct MenuSprite {
    u8 unk00[0x8C];
};

/* The battle command menu work (only the fields used here). */
struct CommandMenuWork {
    /* 0x0000 */ u8 unk0000[0xE58];
    /* 0x0E58 */ MenuSprite sprites[6];
    /* 0x11A0 */ u8 unk11A0[0x3890 - 0x11A0];
    /* 0x3890 */ s32 selected;
    /* 0x3894 */ u8 unk3894[0x28];
    /* 0x38BC */ Object lists[8];
    /* 0x3BDC */ u8 unk3BDC[0x64];
    /* 0x3C40 */ Object *current;
    /* 0x3C44 */ u8 unk3C44[0x44];
    /* 0x3C88 */ s32 results[73];
    /* 0x3DAC */ s32 fallback;
    /* 0x3DB0 */ u8 unk3DB0[4];
    /* 0x3DB4 */ Object extra;
    /* 0x3E18 */ u8 unk3E18[0x4210 - 0x3E18];
    /* 0x4210 */ s16 targets[8];
};

extern "C" {

void uiSpriteSetImageKeyframe(void *sprite, s32 keyframe, s32 arg); // declcheck: local (the shared declaration does not compile here or changes this unit)
void buttonHelpSetText(u32 text, u32 color);
void btlCommandMenuEnterMode(CommandMenuWork *work, s32 kind, s32 arg);
u32 FUN_002cc9e0(void *work, s32 inBattle);
u32 FUN_003e98e0(BtlMainStateA *battle);
s32 questIsReported(u32 command); /* a `mov r0, #0` stub armlink inlines */

/* Applies the command selected in the battle command menu: opens the matching list and shows the help text.
 * Returns 0 when the command cannot be used (nothing to list, or blocked by the battle state). */
u32 btlCommandMenuApplySelection(CommandMenuWork *work)
{
    u32 result = 1;
    work->results[work->selected + 4] = 0;
    work->results[work->selected] = 0;
    work->fallback = 0;
    if (work->targets[work->selected] == -1 && questIsReported(FUN_002cc9e0(work, 1)) != 0) {
        result = 0;
    } else if (FUN_002cc9e0(work, 1) == 1) {
        work->current = &work->lists[4];
        btlCommandMenuEnterMode(work, 9, 1);
        for (s32 i = 0; i < 6; i++)
            uiSpriteSetImageKeyframe(&work->sprites[i], 0, 0);
    } else if (FUN_002cc9e0(work, 1) == 2) {
        if ((btlGetMainState()->markerMasks.bits & g_btlCommandMenuData.listMarker) == 0 && FUN_003e98e0(btlGetMainState()) == 0) {
            result = 0;
        } else {
            work->current = &work->lists[5];
            btlCommandMenuEnterMode(work, 9, 1);
            for (s32 i = 0; i < 6; i++)
                uiSpriteSetImageKeyframe(&work->sprites[i], 0, 0);
        }
    } else if (FUN_002cc9e0(work, 1) == 7) {
        Object *object;
        if (gridNavigationGetItemCount(object = &work->lists[6]) > 0) {
            work->current = object;
            btlCommandMenuEnterMode(work, 11, 1);
            for (s32 i = 0; i < 6; i++)
                uiSpriteSetImageKeyframe(&work->sprites[i], 0, 0);
        } else {
            result = 0;
        }
    } else if (FUN_002cc9e0(work, 1) == 3) {
        Object *object;
        if (gridNavigationGetItemCount(object = &work->lists[7]) > 0) {
            work->current = object;
            btlCommandMenuEnterMode(work, 13, 1);
            for (s32 i = 0; i < 6; i++)
                uiSpriteSetImageKeyframe(&work->sprites[i], 0, 0);
        } else {
            result = 0;
        }
    } else if (FUN_002cc9e0(work, 1) == 6 || FUN_002cc9e0(work, 1) == 8) {
        result = 0;
    } else if (FUN_002cc9e0(work, 1) == 5) {
        btlCommandMenuEnterMode(work, 23, 1);
    } else if (FUN_002cc9e0(work, 1) == 10) {
        btlCommandMenuEnterMode(work, 26, 1);
    } else if (FUN_002cc9e0(work, 1) == 4) {
        btlCommandMenuEnterMode(work, 27, 1);
    } else if (FUN_002cc9e0(work, 1) == 9) {
        btlCommandMenuEnterMode(work, 25, 1);
    } else if (FUN_002cc9e0(work, 1) == 12) {
        Object *object;
        if (gridNavigationGetItemCount(object = &work->extra) > 0) {
            work->current = object;
            btlCommandMenuEnterMode(work, 9, 1);
            for (s32 i = 0; i < 6; i++)
                uiSpriteSetImageKeyframe(&work->sprites[i], 0, 0);
        } else {
            result = 0;
        }
    } else {
        btlCommandMenuEnterMode(work, 0, 1);
    }
    if (result != 0)
        buttonHelpSetText(0, 0xf4f4f4ff);
    return result;
}
}
