/* NON_MATCHING: near: retail keeps the constants 1 and 5 in r8/r7 and r9 for a mask half, uses a 12-byte frame and a shared tail for kinds 6/15 and 0x14; ours uses a 16-byte frame and places the kind-6 call out of line (152 rows against 151). */
#include "common.h"
#include "shard/W6_W6Match3_BattleTiming.h"

extern "C" {

typedef struct BtlSkill {
    /* 0x00 */ u8 unk00[0x6A];
    /* 0x6A */ s16 animation;
} BtlSkill;

/* The acting unit (observed fields). */
typedef struct BtlUnit {
    /* 0x000 */ u64 input;              /* buttons held this frame */
    /* 0x008 */ u8 unk008[0x32C];
    /* 0x334 */ s16 repeatCount;
    /* 0x336 */ u8 unk336[0xCA];
    /* 0x400 */ u8 *model;
} BtlUnit;

typedef struct BtlActorRef {
    /* 0x00 */ BtlUnit *unit;
} BtlActorRef;

/* The command's UI target (observed field). */
typedef struct BtlCommandTarget {
    /* 0x000 */ u8 unk000[0x1BE];
    /* 0x1BE */ s16 kind;
} BtlCommandTarget;

typedef struct BtlCommand {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0x1C];
    /* 0x20 */ BtlUnit *unit;
    /* 0x24 */ BtlSkill *skill;
    /* 0x28 */ BtlCommandTarget *target;
    /* 0x2C */ u16 uiEntry;
} BtlCommand;

/* The button masks the battle action state maps to its actions (g_btlAction, 0x571138). */
typedef struct BtlActionButtons {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u64 confirm;
    /* 0x20 */ u64 unk20;
    /* 0x28 */ u64 confirmAlt;
    /* 0x30 */ u64 cancel;
    /* 0x38 */ u64 cancelAlt;
} BtlActionButtons;

typedef struct BtlModelOwner {
    /* 0x000 */ u8 unk000[0x400];
    /* 0x400 */ u8 *model;
} BtlModelOwner;

extern BtlActionButtons g_btlAction;
extern u32 g_btlUiBlock;

void FUN_004a9308(u32 block, u16 entry, s32 flag);
void FUN_004fd508(s32 delay, BtlCommand *command, s32 mode, BtlSkill *skill, s32 flag);
void FUN_004fbeac(s32 delay, BtlCommand *command, s32 mode, s32 kind, s32 flag);
void FUN_004c9160(s32 effect, BtlUnit *unit, s32 a, s32 b);
s32 FUN_003e7adc(BtlUnit *unit);
BtlModelOwner *FUN_003eaf20(BtlUnit *unit);
u32 FUN_0019acdc(u16 id, s32 flag);
void FUN_003f1b3c(BtlUnit *unit, u32 id, s32 slot, u32 *outA, u32 *outB);
void FUN_0047f4cc(u32 value, f32 x, f32 y, f32 z);

/* Handles the end of a command's input window: repeat inputs re-trigger the skill, otherwise the command's
 * UI kind picks the effect, then the animation window is extended. */
void FUN_004ecee8(BtlActorRef *ref, BtlCommand *command)
{
    BtlUnit *unit = command->unit;
    s32 delay = (command->flags & 0x1080) == 0 ? 50 : 0;
    s32 kind;

    if (unit->repeatCount > 0) {
        if ((unit->input & (g_btlAction.cancel | g_btlAction.cancelAlt)) == 0) {
            FUN_004a9308(g_btlUiBlock, command->uiEntry, 0);
        }
        FUN_004fd508(delay, command, 0, command->skill, 1);
        FUN_004c9160(50, command->unit, 0, 1);
    } else {
        if ((unit->input & (g_btlAction.confirm | g_btlAction.confirmAlt)) != 0 && FUN_003e7adc(ref->unit) == 0 &&
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
            owner = FUN_003eaf20(ref->unit);
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
