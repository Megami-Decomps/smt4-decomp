/* NON_MATCHING: battle AI command choice (roll against 10% / 40% bands); written from the decompilation, branch layout (retail jumps into the shared 0x2B/0x2C call) and scheduling not compared */
#include "common.h"
#include "shard/W6_W6Match3_BattleTiming.h"
#include "util/Random.h"

#define BTL_UNIT_COUNT_ALL 0x6D
#define BTL_UNIT_STRIDE 0x1D0
#define BTL_TARGET_STRIDE 0x408

struct BtlUnitFlagsView {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 flags;
    /* 0x54 */ u8 unk54[0x17C];
};

struct BtlSideMask {
    /* 0x00 */ u32 low;
    /* 0x04 */ u32 high;
};

struct BtlEffectView {
    /* 0x000 */ u8 unk000[0x1BE];
    /* 0x1BE */ u16 phase;
    /* 0x1C0 */ u16 mode;
};

struct BtlSkillView {
    /* 0x00 */ u8 unk00[0x6A];
    /* 0x6A */ s16 animation;
};

struct BtlMainView {
    /* 0x0000 */ u8 unk0000[0xA4];
    /* 0x00A4 */ s32 actorIndex;
    /* 0x00A8 */ u8 unk00A8[0x1E2C];
    /* 0x1ED4 */ BtlUnitFlagsView *units;
    /* 0x1ED8 */ u8 unk1ED8[0x124];
    /* 0x1FFC */ u8 *targets;
};

struct BtlActorView {
    BtlMainView *main;
};

struct BtlCommandView {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0x1C];
    /* 0x20 */ BtlSideMask *target;
    /* 0x24 */ BtlSkillView *skill;
    /* 0x28 */ BtlEffectView *effect;
    /* 0x2C */ u32 id;
    /* 0x30 */ u8 unk30[8];
    /* 0x38 */ u8 candidates[BTL_UNIT_COUNT_ALL];
    /* 0xA5 */ u8 unkA5[0x4F8];
    /* 0x59D */ u8 rolled;
};

struct BtlScriptUnitView {
    /* 0x0000 */ u8 unk0000[9];
    /* 0x0009 */ u8 state;
    /* 0x000A */ u8 unk000A[0x124A];
};

struct BtlTargetModeView {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ s16 selector;
    /* 0x04 */ s8 targetKind;
};

extern "C" {
extern BtlScriptUnitView *g_btlScriptUnit;
extern u32 DAT_00571168;
extern u32 DAT_0057116c;
extern u32 DAT_00571170;
extern u32 DAT_00571174;
extern u32 g_btlUiBlock;

void FUN_004e8454(BtlActorView *actor);
s32 FUN_004e933c(BtlActorView *actor, BtlCommandView *command);
void FUN_004e7c04(BtlActorView *actor, s32 flag);
void FUN_003e8bb0(BtlTargetModeView *out, BtlMainView *main, BtlSideMask *target);
void btlUnitMarkTargetCandidates(BtlActorView *actor, s32 flag, s32 mode);
void FUN_004e5b5c(BtlActorView *actor);
void FUN_004eb838(BtlActorView *actor, BtlCommandView *command);
void FUN_004c9220(s32 id, BtlSideMask *target);
void FUN_004c9160(s32 id, BtlSideMask *target, s32 a, s32 b);
void FUN_004fd508(s32 id, BtlCommandView *command, s32 a, BtlSkillView *skill, s32 b);
void FUN_004a9308(u32 block, s16 id, s32 arg);

#define BTL_AI_ROLL_MAX 99
#define BTL_AI_ROLL_BAND_A 10
#define BTL_AI_ROLL_BAND_B 0x28

/* Chooses the command's effect: the first 10% roll tries the special case, the next 30% performs
 * the marked attack; otherwise the default command is queued. */
void FUN_004e5c10(BtlActorView *actor, BtlCommandView *command)
{
    s32 roll = lcgRandomRange(BTL_AI_ROLL_MAX);
    FUN_004e8454(actor);
    bool handled = false;
    if (roll < BTL_AI_ROLL_BAND_A) {
        BtlActorView *special = actor;
        FUN_004e933c(actor, command);
        handled = special == NULL;
    }
    if (!handled) {
        if (roll < BTL_AI_ROLL_BAND_B) {
            bool marked = (command->target->low & DAT_00571168) != 0 || (command->target->high & DAT_0057116c) != 0;
            FUN_004e7c04(actor, marked);
            BtlEffectView *effect = command->effect;
            effect->phase = 1;
            BtlTargetModeView mode;
            FUN_003e8bb0(&mode, actor->main, command->target);
            effect->mode = (mode.selector == 1) ? 2 : 1;
            if (mode.targetKind == 0)
                FUN_004e5b5c(actor);
            else if (mode.targetKind == 1)
                btlUnitMarkTargetCandidates(actor, marked, 1);
            else if (mode.targetKind == 2)
                btlUnitMarkTargetCandidates(actor, marked, 2);
            for (s32 i = 0; i < BTL_UNIT_COUNT_ALL; i++) {
                u32 flags = actor->main->units[i].flags;
                actor->main->units[i].flags = flags & ~4u;
                actor->main->units[i].flags = flags & ~0xCu;
            }
            btlCommandExtendAnimationWindow((BtlActorRef *)actor, (BtlCommand *)command, command->skill->animation, 0, 0x1E, 0x1E);
            FUN_004eb838(actor, command);
            command->rolled = 1;
            if (mode.targetKind == 0) {
                s32 i;
                for (i = 0; i < BTL_UNIT_COUNT_ALL; i++) {
                    if (command->candidates[i] != 0) {
                        if ((u8 *)command->target == actor->main->targets + i * BTL_TARGET_STRIDE)
                            FUN_004c9160(0x2B, command->target, 0, 1);
                        else
                            FUN_004c9220(0x2A, command->target);
                        break;
                    }
                }
                if (i == BTL_UNIT_COUNT_ALL)
                    FUN_004c9220(0x2A, command->target);
            } else {
                FUN_004c9160(0x2C, command->target, 0, 1);
            }
        } else {
            s32 weight = (command->flags & 0x1080) == 0 ? 0x32 : 0;
            FUN_004c9160(9, command->target, 0, 1);
            FUN_004fd508(weight, command, 0, command->skill, 1);
            btlCommandExtendAnimationWindow((BtlActorRef *)actor, (BtlCommand *)command, command->skill->animation, 0, 0x1E, 0x1E);
            g_btlScriptUnit[actor->main->actorIndex].state = 0x1D;
        }
    }
    if (((DAT_0057116c | DAT_00571174) & command->target->high) != 0
        || ((DAT_00571168 | DAT_00571170) & command->target->low) != 0)
        return;
    FUN_004a9308(g_btlUiBlock, (s16)command->id, 0);
}

} /* extern "C" */
