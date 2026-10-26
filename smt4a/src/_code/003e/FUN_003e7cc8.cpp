/* NON_MATCHING: same code size and shape as retail, but armcc lays out the group-insertion block and allocates registers differently in the two grouping loops (twin of smt4 FUN_003364d0). */
#include "common.h"

// The fields of an action record (0x1d0 bytes in Apocalypse) the grouping reads and writes.
struct ActionRecordA {
    u8 unk00[0x14];
    f32 positionZ;      // 0x14
    u8 unk18[0x2c];
    s8 category;        // 0x44 group number, set below
    u8 unk45[0xb];
    u32 status;         // 0x50 bit 0: present, 0x10: player side, 0x80: active
    u8 unk54[0x16];
    s16 memberId;       // 0x6a
    u8 unk6c[0xa4];
    u32 groupKey;       // 0x110 key shared by a player-side group
    u8 unk114[0xbc];
};

struct ActionStateA {
    u8 unk0000[0x1ed4];
    ActionRecordA *actions;  // 0x1ed4
    u8 groupCount;           // 0x1ed8
};

typedef char ActionRecordALayoutCheck[sizeof(ActionRecordA) == 0x1d0 ? 1 : -1];

extern "C" {
void qsort(void *base, u32 count, u32 elementSize, s32 (*compare)(const void *, const void *));
s32 sortCompareWeightDescending(const void *a, const void *b);
}

// One group of actions that share a key (player-side actions: the group key word; others: the Z position).
struct ActionGroup {
    s16 member;  // 0x00 first action of the group, -1 when unused
    u16 pad02;
    union {
        f32 position;  // 0x04 key of an enemy-side group
        u32 bits;      // 0x04 the key as stored
    };
};

// True when `other` belongs to the same group as `action`.
static __inline bool sameGroup(ActionRecordA *other, ActionRecordA *action)
{
    if (action->status & 0x10) {
        return (other->status & 0x10) != 0 && other->groupKey == action->groupKey;
    }
    return (other->status & 0x10) == 0 && other->positionZ == action->positionZ;
}

// Groups the active actions of a battle (indices 4..53) by their key, sorts the groups and stores each action's group
// number; with the 0x400 flag clear nothing is done.
extern "C" void FUN_003e7cc8(ActionStateA *state, u32 flags)
{
    ActionGroup groups[10];
    u32 groupCount = 0;
    for (s32 i = 0; i < 10; i++) {
        groups[i].member = -1;
        groups[i].position = 0.0f;
    }
    if (!(flags & 0x400))
        return;

    for (s32 index = 4; index < 54; index++) {
        ActionRecordA *action = &state->actions[index];
        if ((action->status & 1) && (action->status & 0x80)) {
            if (action->status & 0x10) {
                for (s32 g = 0; g < 10; g++) {
                    if (groups[g].member < 0) {
                        groupCount++;
                        groups[g].member = action->memberId;
                        groups[g].bits = *reinterpret_cast<u32 *>(&action->positionZ);
                        break;
                    }
                    ActionRecordA *other = &state->actions[groups[g].member];
                    if ((other->status & 0x10) && other->groupKey == action->groupKey)
                        break;
                }
            } else {
                for (s32 g = 0; g < 10; g++) {
                    if (groups[g].member < 0) {
                        groupCount++;
                        groups[g].member = action->memberId;
                        groups[g].bits = *reinterpret_cast<u32 *>(&action->positionZ);
                        break;
                    }
                    ActionRecordA *other = &state->actions[groups[g].member];
                    if (!(other->status & 0x10) && other->positionZ == action->positionZ)
                        break;
                }
            }
        }
    }
    qsort(groups, groupCount, sizeof(ActionGroup), sortCompareWeightDescending);

    for (s32 index = 4; index < 54; index++) {
        ActionRecordA *action = &state->actions[index];
        if ((action->status & 1) && (action->status & 0x80)) {
            for (s32 g = 0; g < 10; g++) {
                if (groups[g].member < 0)
                    continue;
                if (action->memberId == groups[g].member ||
                    sameGroup(&state->actions[groups[g].member], action)) {
                    action->category = g;
                    break;
                }
            }
        }
    }
    state->groupCount = groupCount;
}
