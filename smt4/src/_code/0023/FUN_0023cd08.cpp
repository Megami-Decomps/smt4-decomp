/* NON_MATCHING: 42 lines: layout, the pair-unrolled member search and the shared `+ 2.0f` tail now match; the index
 * parameter and the found part swap r6/r7, the member id and entry swap r1/r2 in the search, and armcc returns the
 * final z straight from s2 where retail stores it and reloads all three components. */
#include "battle/btlAction.h"
#include "battle/BtlPositionedRequests.h"
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_EnemyDrawOffset.h"
#include "gamedata/NkmEnemyRecord.h"
#include "code/Code0027.h"
#include "gamedata/NkmEnemyLookup.h"
#include "battle/BtlGlobals.h"

extern "C" {
const BattleVector3 *FUN_002d8c3c(void *arrangement);
void enemyDrawCalcVerticalOffset(const EnemyDrawOffsetOwner *owner, BattleVector3 *output, f32 scale);

/* idSetFindSubjectIndex's body: the position of the action's member within its combatant entry, or -1 when absent. */
static s32 actionFindSubjectIndex(BtlMainState *state, const BtlActionRecord *action)
{
    BtlEntry *entry = btlMainFindEntryByListedId(state, action->memberId);
    if (entry == NULL) {
        return -1;
    }
    for (s32 index = 0; index < 50; ++index) {
        if (action->memberId == entry->ids[index]) {
            return index;
        }
    }
    return -1;
}

/* Calculates the battle effect anchor of an action: the arrangement's anchor raised by the enemy's arrangement
 * height, or the acting part's position plus its vertical draw offset. */
BattleVector3 FUN_0023cd08(BtlMainState *state, s32 index, s32 forceEnemy)
{
    BtlActionRecord *action = &state->actions[index];
    BattleVector3 position;
    if ((action->status & 0x10) != 0 && forceEnemy == 0) {
        position = *FUN_002d8c3c(state->arrangement.file);
        position.z += 2.0f;
        BtlUnitData *source = btlFindEntryBlockByMemberId(state, index);
        u8 kind = nkmEnemyFindById(source->id)->arrangementFirst;
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
    } else {
        s32 part = actionFindSubjectIndex(state, action);
        part = part < 0 ? 0 : part;
        BtlUnitData *source = btlFindEntryBlockByMemberId(state, index);
        const EnemyDrawOffsetOwner *owner = reinterpret_cast<const EnemyDrawOffsetOwner *>(idSlotsFindEntryById(state, source->parts[part]));
        enemyDrawCalcVerticalOffset(owner, &position, action->geometry.scale);
        position.x += action->geometry.position[0];
        position.y += action->geometry.position[1];
        position.z += action->geometry.position[2];
    }
    position.z += 2.0f;
    return position;
}
}
