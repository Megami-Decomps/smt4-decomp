/* NON_MATCHING: schedules the hit effects of a battle command on its targets (group attacks hit every flagged target and claim it, single attacks hit the target after `skip` ones, immune actors get the reflect animation) and extends the animation window; written from the decompilation, the two gotos into the final calls are rebuilt as explicit tail cases and the actor/command views only name the observed fields */
#include "shard/W6_W6Match3_BattleTiming.h"

#define CMD_GROUP 0x4000
#define CMD_HIT_QUEUED 0x2000000
#define TARGET_SLOTS 0x6D
#define OBJECT_STRIDE 0x408
#define PARTY_SLOTS 3
#define MASK_BITS 0x40
#define GROUP_HIT_SPACING 4
#define HIT_LEAD_FRAMES 5
#define HIT_EXTRA_GROUP 0x28
#define HIT_EXTRA_SINGLE 0x14
#define SLOT_ID_TABLE_OFFSET 0x1C88
#define EXTEND_START 0xF
#define EXTEND_END 0x14

/* A battle object slot (observed fields). */
struct BtlObject {
    /* 0x000 */ u32 flagsLow;
    /* 0x004 */ u32 flagsHigh;
    /* 0x008 */ u8 unk008[0x164];
    /* 0x16C */ s32 linkedSlot;
};

struct BtlTargetInfo {
    /* 0x00 */ u32 flagsLow;
    /* 0x04 */ u32 flagsHigh;
};

struct BtlAnimInfo {
    /* 0x00 */ u8 unk00[0x6A];
    /* 0x6A */ s16 animation;
};

struct BtlActorState {
    /* 0x0000 */ u8 unk0000[0x1FFC];
    /* 0x1FFC */ u8 *objects;
    /* 0x2000 */ u8 unk2000[8];
    /* 0x2008 */ u32 maskLow;
    /* 0x200C */ u32 maskHigh;
    /* 0x2010 */ u8 unk2010[8];
    /* 0x2018 */ s8 slotIds[PARTY_SLOTS];
};

struct BtlActorRef {
    /* 0x00 */ BtlActorState *state;
};

struct BtlCommand {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0x1C];
    /* 0x20 */ BtlTargetInfo *target;
    /* 0x24 */ BtlAnimInfo *anim;
    /* 0x28 */ u8 unk28[0x10];
    /* 0x38 */ u8 active[TARGET_SLOTS];
};

extern "C" {
extern u32 DAT_00571148, DAT_0057114c;     /* in-use mask of an object */
extern u32 DAT_00571168, DAT_0057116c;     /* immune mask of a target */
extern u32 DAT_005711b8, DAT_005711bc;     /* claimed mask of an object */

s8 *gameGetSlotTable(void);
s32 gameSlotsCountValidIds(BtlActorState *state);
void FUN_004fcde0(s32 frame, BtlCommand *command, BtlObject *object);
void FUN_004fcf0c(s32 frame, BtlCommand *command, s32 immune, s32 victim, u32 argument, s32 flag);

static __inline bool objectInUse(const BtlObject *object)
{
    return (DAT_00571148 & object->flagsLow) != 0 || (DAT_0057114c & object->flagsHigh) != 0;
}

static __inline bool objectClaimed(const BtlObject *object)
{
    return (object->flagsLow & DAT_005711b8) != 0 || (object->flagsHigh & DAT_005711bc) != 0;
}

u32 FUN_004eaa68(BtlActorRef *actor, BtlCommand *command, u32 unused, u32 unusedB, u32 argument, s32 baseFrame, s32 skip)
{
    BtlActorState *state = actor->state;
    bool immune = (command->target->flagsLow & DAT_00571168) != 0 || (command->target->flagsHigh & DAT_0057116c) != 0;
    bool group = (command->flags & CMD_GROUP) != 0;
    s32 spacing = group ? GROUP_HIT_SPACING : 0;
    s32 pending = 0;
    s32 firstVictim = -1;
    s32 hitCount = 0;
    BtlObject *single = NULL;

    if (!immune) {
        if (group) {
            for (s32 i = skip; i < PARTY_SLOTS; i++) {
                if (state->slotIds[i] >= 0) {
                    firstVictim = state->slotIds[i];
                    if (firstVictim > 0)
                        firstVictim--;
                    break;
                }
            }
        } else {
            s32 counted = 0;
            for (s32 bit = 0; bit < MASK_BITS; bit++) {
                u32 mask = 1u << bit;
                if ((mask & state->maskLow) != 0 || ((s32)mask >> 31 & state->maskHigh) != 0) {
                    if (skip <= counted) {
                        firstVictim = bit > 0 ? bit - 1 : bit;
                        break;
                    }
                    counted = (s8)(counted + 1);
                }
            }
        }
    }

    for (s32 i = 0; i < TARGET_SLOTS; i++) {
        if (command->active[i] == 0)
            continue;
        BtlObject *object = reinterpret_cast<BtlObject *>(state->objects + i * OBJECT_STRIDE);
        if (group) {
            if (object != NULL && objectInUse(object) && !objectClaimed(object)) {
                pending = HIT_LEAD_FRAMES;
                FUN_004fcde0(spacing * hitCount + baseFrame + HIT_LEAD_FRAMES, command, object);
                hitCount = (s8)(hitCount + 1);
                object->flagsLow |= DAT_005711b8;
                object->flagsHigh |= DAT_005711bc;
            }
        } else if (skip <= hitCount) {
            if (object == NULL || !objectInUse(object))
                break;
            pending = HIT_LEAD_FRAMES;
            FUN_004fcde0(spacing * skip + baseFrame + HIT_LEAD_FRAMES, command, object);
            single = object;
            break;
        } else {
            hitCount = (s8)(hitCount + 1);
        }
    }
    if (group && gameSlotsCountValidIds(state) > 0)
        pending = HIT_LEAD_FRAMES;

    bool victimHit = false;
    if (single != NULL && !immune) {
        bool linked = (s16)single->linkedSlot >= 0;
        if (linked && (firstVictim < 0 || (!group && gameGetSlotTable()[firstVictim + SLOT_ID_TABLE_OFFSET] == (s16)single->linkedSlot))) {
            btlCommandExtendAnimationWindow(actor, command, command->anim->animation, baseFrame, EXTEND_START, EXTEND_END);
            return 1;
        }
        victimHit = true;
    } else if (single == NULL && !immune) {
        victimHit = true;
    }

    if (victimHit) {
        if (firstVictim >= 0) {
            if (pending != 0)
                pending += group ? HIT_EXTRA_GROUP : HIT_EXTRA_SINGLE;
            FUN_004fcf0c(spacing * skip + baseFrame + pending, command, 0, firstVictim, argument, 0);
            command->flags |= CMD_HIT_QUEUED;
        }
    } else {
        FUN_004fcf0c(spacing * skip + baseFrame + pending, command, 1, 0, argument, 0);
        command->flags |= CMD_HIT_QUEUED;
    }
    btlCommandExtendAnimationWindow(actor, command, command->anim->animation, baseFrame, EXTEND_START, EXTEND_END);
    return 1;
}

} /* extern "C" */
