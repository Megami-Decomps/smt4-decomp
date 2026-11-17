/* NON_MATCHING: member search is not pair-unrolled; vector-return epilogues and height-kind branches merge. */
#include "battle/btlAction.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_EnemyDrawOffset.h"
#include "gamedata/NkmEnemyRecord.h"
#include "code/Code0027.h"
#include "gamedata/NkmEnemyLookup.h"
#include "battle/BtlGlobals.h"

static inline s32 findAnchorMember(const BtlEntry *entry, s16 id)
{
    for (s32 index = 0; index < 50; ++index) {
        if (entry->members.ids[index] == id)
            return index;
    }
    return -1;
}

extern "C" {
void enemyDrawCalcVerticalOffset(const EnemyDrawOffsetOwner *, BattleVector3 *, f32);
const BattleVector3 *FUN_002d8c3c(void *);

BattleVector3 FUN_0023cd08(BtlMainState *state, s32 index, s32 forceEnemy)
{
    BtlActionRecord *action = &state->actions[index];
    BattleVector3 position;
    if (!(action->status & 0x10) || forceEnemy) {
        BtlEntry *entry = btlMainFindEntryByListedId(state, action->memberId);
        s32 part = entry ? findAnchorMember(entry, action->memberId) : -1;
        if (part < 0)
            part = 0;
        BtlUnitData *source = btlFindEntryBlockByMemberId(state, index);
        const EnemyDrawOffsetOwner *owner = reinterpret_cast<const EnemyDrawOffsetOwner *>(idSlotsFindEntryById(state, source->parts[part]));
        enemyDrawCalcVerticalOffset(owner, &position, action->geometry.scale);
        position.x += action->geometry.position[0];
        position.y += action->geometry.position[1];
        position.z = position.z + action->geometry.position[2] + 2.0f;
    } else {
        position = *FUN_002d8c3c(state->arrangement.file);
        position.z += 2.0f;
        BtlUnitData *source = btlFindEntryBlockByMemberId(state, index);
        u8 kind = nkmEnemyFindById(source->id)->arrangementFirst;
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
