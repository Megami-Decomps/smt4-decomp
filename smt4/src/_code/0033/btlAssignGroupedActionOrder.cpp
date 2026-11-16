/* NON_MATCHING: the group count is BtlMainState::groupCount (0x1E9C); only the sorted-ID address in the second pass differs: retail computes index*3 into r1, the build into r0. */
#include "battle/btlMain.h"

struct BattleActionOrderingRecord {
    u8 unk00[0xc];
    f32 weight;
    u8 unk10[0x34];
    s8 group;
    u8 order;
    u8 unk46[0xa];
    u32 flags;
    u8 unk54[0xe];
    s16 id;
    u8 unk64[0xb0];
};
struct BattleActionOrderEntry {
    s16 id;
    u8 unk02[2];
    f32 weight;
    u16 flags;
    u8 unk0a[2];
};
extern "C" {
s32 sortCompareWeightAscending(const void *left, const void *right);
void FUN_002b7bca(void *records, u32 count, u32 stride,
                  s32 (*compare)(const void *, const void *));

/* Numbers the flagged actions of each group (field 0x45) in ascending weight order. */
void btlAssignGroupedActionOrder(BtlMainState *state, u32 unusedFlags)
{
    for (s32 group = 0; group < state->groupCount; ++group) {
        BattleActionOrderEntry entries[20];
        for (s32 index = 0; index < 20; ++index) {
            entries[index].id = -1;
            entries[index].weight = 0.0f;
            entries[index].flags = 0;
        }
        s32 count = 0;
        for (s32 index = 4; index < 54; ++index) {
            BattleActionOrderingRecord *action = &((BattleActionOrderingRecord *)state->actions)[index];
            if ((action->flags & 1) && (action->flags & 0x80) && action->group == group) {
                entries[count].id = action->id;
                entries[count].weight = action->weight;
                ++count;
            }
        }
        FUN_002b7bca(entries, count, sizeof(BattleActionOrderEntry), sortCompareWeightAscending);
        u32 order = 0;
        s32 actionIndex;
        for (s32 index = 0; index < 20; ++index) {
            s16 id = entries[index].id;
            for (actionIndex = 4; actionIndex < 54; ++actionIndex) {
                BattleActionOrderingRecord *action = &((BattleActionOrderingRecord *)state->actions)[actionIndex];
                if ((action->flags & 1) && (action->flags & 0x80) &&
                    action->group == group && action->id == id) {
                    action->order = (u8)order++;
                    break;
                }
            }
        }
    }
}
}
