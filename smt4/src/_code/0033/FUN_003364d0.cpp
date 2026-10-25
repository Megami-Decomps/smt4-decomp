/* NON_MATCHING: same code size and shape as retail, but armcc lays out the group-insertion block and allocates r8/ip/r1 differently in the two grouping loops (retail puts the shared insertion block first and keeps the action table pointer in ip). */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"

extern "C" {
void FUN_002b7bca(void *base, u32 count, u32 elementSize, s32 (*compare)(const void *, const void *));
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
static __inline bool sameGroup(BtlActionRecord *other, BtlActionRecord *action)
{
    if (action->status & 0x10) {
        return (other->status & 0x10) != 0 && other->groupKey == action->groupKey;
    }
    return (other->status & 0x10) == 0 && other->geometry.position[2] == action->geometry.position[2];
}

// Groups the active actions of a battle (indices 4..53) by their key, sorts the groups and stores each action's group
// number; with the 0x400 flag clear nothing is done.
extern "C" void FUN_003364d0(BtlMainState *state, u32 flags)
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
        BtlActionRecord *action = &state->actions[index];
        if ((action->status & 1) && (action->status & 0x80)) {
            if (action->status & 0x10) {
                for (s32 g = 0; g < 10; g++) {
                    if (groups[g].member < 0) {
                        groupCount++;
                        groups[g].member = action->memberId;
                        groups[g].bits = *reinterpret_cast<u32 *>(&action->geometry.position[2]);
                        break;
                    }
                    BtlActionRecord *other = &state->actions[groups[g].member];
                    if ((other->status & 0x10) && other->groupKey == action->groupKey)
                        break;
                }
            } else {
                for (s32 g = 0; g < 10; g++) {
                    if (groups[g].member < 0) {
                        groupCount++;
                        groups[g].member = action->memberId;
                        groups[g].bits = *reinterpret_cast<u32 *>(&action->geometry.position[2]);
                        break;
                    }
                    BtlActionRecord *other = &state->actions[groups[g].member];
                    if (!(other->status & 0x10) && other->geometry.position[2] == action->geometry.position[2])
                        break;
                }
            }
        }
    }
    FUN_002b7bca(groups, groupCount, sizeof(ActionGroup), sortCompareWeightDescending);

    for (s32 index = 4; index < 54; index++) {
        BtlActionRecord *action = &state->actions[index];
        if ((action->status & 1) && (action->status & 0x80)) {
            for (s32 g = 0; g < 10; g++) {
                if (groups[g].member < 0)
                    continue;
                if (action->memberId == groups[g].member ||
                    sameGroup(&state->actions[groups[g].member], action)) {
                    action->identity.category = g;
                    break;
                }
            }
        }
    }
    state->groupCount = groupCount;
}
