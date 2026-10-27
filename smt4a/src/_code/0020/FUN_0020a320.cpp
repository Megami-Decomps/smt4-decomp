/* NON_MATCHING: retail keeps the result in r6 below the object pointer in r7 (the build swaps them) and routes the failed FUN_003e98e0 return through the shared result=0 exit, where the build jumps to the epilogue with the zero already in r0. */
#include "battle/BtlMainAccess.h"
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

struct BattleState {
    /* 0x0000 */ u8 unk0000[0x45A8];
    /* 0x45A8 */ u64 held;
};

struct BattleMasks {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u64 blocked;
};

extern "C" {
extern BattleMasks DAT_00573b88;

void uiSpriteSetImageKeyframe(void *sprite, s32 keyframe, s32 arg);
void buttonHelpSetText(u32 text, u32 color);
void FUN_0020ad6c(CommandMenuWork *work, s32 kind, s32 arg);
u32 FUN_002cc9e0(void *work, s32 inBattle);
s32 FUN_003e98e0(void);
s32 FUN_00284dbc(void);

/* Applies the command selected in the battle command menu: opens the matching list and help text. */
u32 FUN_0020a320(CommandMenuWork *work)
{
    u32 result = 1;
    s32 *selected = &work->selected;
    work->results[*selected + 4] = 0;
    work->results[*selected] = 0;
    work->fallback = 0;
    if (work->targets[*selected] == -1) {
        FUN_002cc9e0(work, 1);
        if (FUN_00284dbc() != 0)
            return 0;
    }
    if (FUN_002cc9e0(work, 1) == 1) {
        work->current = &work->lists[4];
        FUN_0020ad6c(work, 9, 1);
        for (s32 i = 0; i < 6; i++)
            uiSpriteSetImageKeyframe(&work->sprites[i], 0, 0);
    } else if (FUN_002cc9e0(work, 1) == 2) {
        BattleState *battle = reinterpret_cast<BattleState *>(btlGetMainState());
        if ((battle->held & DAT_00573b88.blocked) == 0) {
            btlGetMainState();
            if (FUN_003e98e0() == 0)
                return 0;
        }
        work->current = &work->lists[5];
        FUN_0020ad6c(work, 9, 1);
        for (s32 i = 0; i < 6; i++)
            uiSpriteSetImageKeyframe(&work->sprites[i], 0, 0);
    } else if (FUN_002cc9e0(work, 1) == 7) {
        Object *object;
        if (objectApplyIfUnblocked(object = &work->lists[6]) <= 0)
            return 0;
        work->current = object;
        FUN_0020ad6c(work, 11, 1);
        for (s32 i = 0; i < 6; i++)
            uiSpriteSetImageKeyframe(&work->sprites[i], 0, 0);
    } else if (FUN_002cc9e0(work, 1) == 3) {
        Object *object;
        if (objectApplyIfUnblocked(object = &work->lists[7]) <= 0)
            return 0;
        work->current = object;
        FUN_0020ad6c(work, 13, 1);
        for (s32 i = 0; i < 6; i++)
            uiSpriteSetImageKeyframe(&work->sprites[i], 0, 0);
    } else {
        if (FUN_002cc9e0(work, 1) == 6 || FUN_002cc9e0(work, 1) == 8)
            return 0;
        if (FUN_002cc9e0(work, 1) == 5) {
            FUN_0020ad6c(work, 23, 1);
        } else if (FUN_002cc9e0(work, 1) == 10) {
            FUN_0020ad6c(work, 26, 1);
        } else if (FUN_002cc9e0(work, 1) == 4) {
            FUN_0020ad6c(work, 27, 1);
        } else if (FUN_002cc9e0(work, 1) == 9) {
            FUN_0020ad6c(work, 25, 1);
        } else if (FUN_002cc9e0(work, 1) == 12) {
            Object *object;
            if (objectApplyIfUnblocked(object = &work->extra) <= 0)
                return 0;
            work->current = object;
            FUN_0020ad6c(work, 9, 1);
            for (s32 i = 0; i < 6; i++)
                uiSpriteSetImageKeyframe(&work->sprites[i], 0, 0);
        } else {
            FUN_0020ad6c(work, 0, 1);
        }
    }
    buttonHelpSetText(0, 0xf4f4f4ff);
    return result;
}
}
