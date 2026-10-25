/* NON_MATCHING: member lookup is not pair-unrolled, saved state/index/part roles differ and vector-return epilogues merge; arrangement kind 1 now has its explicit zero-height case. */
#include "battle/btlAction.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "shard/W6_W6Match3_EnemyDrawOffset.h"
#include "gamedata/Table00.h"

/* Find the part occupied by a listed member, or -1 when it is absent. */
static inline s32 findBattleMemberPart(const BtlEntry *entry, s16 id)
{
    for (s32 member = 0; member < 50; ++member) {
        if (id == entry->members.ids[member])
            return member;
    }
    return -1;
}

extern "C" {
struct BattleAnchorSource { u16 flags; u16 id; u32 unk04; u32 unk08; u32 parts[50]; };
BattleAnchorSource *FUN_0027da30(BtlMainState *state, s32 index);
const EnemyDrawOffsetOwner *FUN_0027d9e8(BtlMainState *state, u32 part);
BtlEntry *btlMainFindEntryByListedId(BtlMainState *state, s32 member);
const BattleVector3 *FUN_002d8cc8(void *arrangement);
Table00Record *dataTable00FindById(u32 id);
void btlEnemyDrawCalcVerticalOffset(const EnemyDrawOffsetOwner *owner, BattleVector3 *output, f32 scale);

// Calculate the battle effect anchor for an action record.
BattleVector3 FUN_0024d434(BtlMainState *state, s32 index, s32 forceEnemy)
{
    struct ActionAnchorView {
        u8 prefix[0xC];
        BattleVector3 position;
        u8 unk18[0x28];
        f32 scale;
    };
    BtlActionRecord *action = &state->actions.records[index];
    BattleVector3 position;
    if (!(action->status & 0x10) || forceEnemy) {
        BtlEntry *entry = btlMainFindEntryByListedId(state, action->memberId);
        s32 part = entry != NULL ? findBattleMemberPart(entry, action->memberId) : -1;
        if (part < 0)
            part = 0;
        BattleAnchorSource *source = FUN_0027da30(state, index);
        const EnemyDrawOffsetOwner *owner = FUN_0027d9e8(state, source->parts[part]);
        ActionAnchorView *anchor = (ActionAnchorView *)action;
        btlEnemyDrawCalcVerticalOffset(owner, &position, anchor->scale);
        position.x += anchor->position.x;
        position.y += anchor->position.y;
        position.z += anchor->position.z + 2.0f;
    } else {
        struct ArrangementView { u8 prefix[0x1E88]; void *arrangement; };
        position = *FUN_002d8cc8(((ArrangementView *)state)->arrangement);
        position.z += 2.0f;
        BattleAnchorSource *source = FUN_0027da30(state, index);
        u8 kind = dataTable00FindById(source->id)->arrangement.first;
        f32 height = 0.0f;
        switch (kind) {
        case 0:
            height = 15.0f;
            break;
        case 1:
            height = 0.0f;
            break;
        case 2:
            height = -20.0f;
            break;
        }
        position.z += height;
    }
    return position;
}
}
