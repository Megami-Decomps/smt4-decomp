/* NON_MATCHING: member search is not pair-unrolled; vector-return epilogues and height-kind branches merge. */
#include "battle/btlAction.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_EnemyDrawOffset.h"
#include "gamedata/Table00.h"

struct BattleAnchorSource { u16 flags; u16 id; u32 unk04; u32 unk08; u32 parts[50]; };

static inline s32 findAnchorMember(const BtlEntry *entry, s16 id)
{
    for (s32 index = 0; index < 50; ++index) {
        if (entry->members.ids[index] == id)
            return index;
    }
    return -1;
}

extern "C" {
BtlEntry *btlMainFindEntryByListedId(BtlMainState *, s32);
BattleAnchorSource *FUN_0027da30(BtlMainState *, s32);
const EnemyDrawOffsetOwner *FUN_0027d9e8(BtlMainState *, u32);
void enemyDrawCalcVerticalOffset(const EnemyDrawOffsetOwner *, BattleVector3 *, f32);
const BattleVector3 *FUN_002d8c3c(void *);
Table00Record *dataTable00FindById(u32);

BattleVector3 FUN_0023cd08(BtlMainState *state, s32 index, s32 forceEnemy)
{
    BtlActionRecord *action = &state->actions[index];
    BattleVector3 position;
    if (!(action->status & 0x10) || forceEnemy) {
        BtlEntry *entry = btlMainFindEntryByListedId(state, action->memberId);
        s32 part = entry ? findAnchorMember(entry, action->memberId) : -1;
        if (part < 0)
            part = 0;
        BattleAnchorSource *source = FUN_0027da30(state, index);
        const EnemyDrawOffsetOwner *owner = FUN_0027d9e8(state, source->parts[part]);
        enemyDrawCalcVerticalOffset(owner, &position, action->geometry.scale);
        position.x += action->geometry.position[0];
        position.y += action->geometry.position[1];
        position.z = position.z + action->geometry.position[2] + 2.0f;
    } else {
        position = *FUN_002d8c3c(state->arrangement.file);
        position.z += 2.0f;
        BattleAnchorSource *source = FUN_0027da30(state, index);
        u8 kind = dataTable00FindById(source->id)->arrangement.first;
        f32 height = 0.0f;
        if (kind == 0)
            height = 15.0f;
        else if (kind == 2)
            height = -20.0f;
        position.z += height;
    }
    return position;
}
}
