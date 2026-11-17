/* NON_MATCHING: near: retail keeps the constants 1 and 5 in r8/r7 and r9 for a mask half, uses a 12-byte frame and a shared tail for kinds 6/15 and 0x14; ours uses a 16-byte frame and places the kind-6 call out of line (152 rows against 151). */
#include "common.h"
#include "shard/W6_W6Match3_BattleTiming.h"
#include "shard/W6_W6Match5_UnitCategory.h"
#include "battle/BtlUiGlobal.h"

extern "C" {

typedef struct BtlSkill {
    /* 0x00 */ u8 unk00[0x6A];
    /* 0x6A */ s16 animation;
} BtlSkill;

/* The acting unit (observed fields). */
typedef struct BtlInputUnit {
    /* 0x000 */ u64 input;              /* buttons held this frame */
    /* 0x008 */ u8 unk008[0x32C];
    /* 0x334 */ s16 repeatCount;
    /* 0x336 */ u8 unk336[0xCA];
    /* 0x400 */ u8 *model;
} BtlInputUnit;

typedef struct BtlActorRef {
    /* 0x00 */ BtlInputUnit *unit;
} BtlActorRef;

/* The command's UI target (observed field). */
typedef struct BtlCommandTarget {
    /* 0x000 */ u8 unk000[0x1BE];
    /* 0x1BE */ s16 kind;
} BtlCommandTarget;

typedef struct BtlCommand {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0x1C];
    /* 0x20 */ BtlInputUnit *unit;
    /* 0x24 */ BtlSkill *skill;
    /* 0x28 */ BtlCommandTarget *target;
    /* 0x2C */ u16 uiEntry;
} BtlCommand;

typedef struct BtlModelOwner {
    /* 0x000 */ u8 unk000[0x400];
    /* 0x400 */ u8 *model;
} BtlModelOwner;


void FUN_004a9308(BtlUiA *block, u16 entry, s32 flag);
void FUN_004fd508(s32 delay, BtlCommand *command, s32 mode, BtlSkill *skill, s32 flag);
void FUN_004fbeac(s32 delay, BtlCommand *command, s32 mode, s32 kind, s32 flag);
void FUN_004c9160(s32 effect, BtlInputUnit *unit, s32 a, s32 b);
s32 FUN_003e7adc(BtlInputUnit *unit);
BtlModelOwner *btlFindFirstEntryMatchingCategoryAndRequiredMask(BtlInputUnit *unit);
void FUN_003f1b3c(BtlInputUnit *unit, u32 id, s32 slot, u32 *outA, u32 *outB);
void FUN_0047f4cc(u32 value, f32 x, f32 y, f32 z);

/* Handles the end of a command's input window: repeat inputs re-trigger the skill, otherwise the command's
 * UI kind picks the effect, then the animation window is extended. */
void FUN_004ecee8(BtlActorRef *ref, BtlCommand *command)
{
    BtlInputUnit *unit = command->unit;
    s32 delay = (command->flags & 0x1080) == 0 ? 50 : 0;
    s32 kind;

    if (unit->repeatCount > 0) {
        if ((unit->input & (g_btlAction.buttons.cancel | g_btlAction.buttons.cancelAlt)) == 0) {
            FUN_004a9308(g_btlUiBlock, command->uiEntry, 0);
        }
        FUN_004fd508(delay, command, 0, command->skill, 1);
        FUN_004c9160(50, command->unit, 0, 1);
    } else {
        if ((unit->input & (g_btlAction.buttons.confirm | g_btlAction.buttons.confirmAlt)) != 0 && FUN_003e7adc(ref->unit) == 0 &&
            (command->flags & 0x200000) != 0 &&
            (command->target->kind == 9 || command->target->kind == 10 || command->target->kind == 13)) {
            FUN_004fbeac(delay, command, 0, 0x47, 0);
            return;
        }
        kind = command->target->kind;
        if (kind == 0x11) {
            return;
        }
        if (kind <= 0x11) {
            if (kind == 6) {
                FUN_004fd508(0, command, 1, command->skill, 1);
            } else if (kind == 0xF) {
                FUN_004fd508(delay, command, 0, command->skill, 1);
            } else {
                return;
            }
        } else if (kind == 0x13) {
            BtlModelOwner *owner;

            FUN_004c9160(0x2D, command->unit, 0, 1);
            owner = btlFindFirstEntryMatchingCategoryAndRequiredMask(ref->unit);
            if (owner != NULL) {
                u32 id = FUN_0019acdc(*(u16 *)(owner->model + 0x12C), 1);
                u32 outA;
                u32 outB;

                FUN_003f1b3c(ref->unit, id, 8, &outA, &outB);
                FUN_0047f4cc(outB, 1.0f, 0.707f, 0.707f);
            }
        } else if (kind == 0x14) {
            FUN_004c9160(0x2E, command->unit, 0, 1);
        } else {
            return;
        }
    }
    btlCommandExtendAnimationWindow((BtlActorRef *)ref, (BtlCommand *)command, command->skill->animation, 0, 5, 5);
}

} /* extern "C" */
