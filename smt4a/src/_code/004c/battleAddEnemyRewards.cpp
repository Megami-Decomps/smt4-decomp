/* NON_MATCHING: 38 lines (32 by shape), rewritten from the raw draft on the battle and enemy record types. What
 * remains is allocation: the experience clamp (retail compares in r5 and moves the limit in with movge, the build
 * keeps the limit in r5 and moves the product in with vmovlt), the shuffle's fill loop counter (r5 against r2, so
 * retail needs no second zero) and the drop mask test loading the entry's flags with ldrd. gameDataGetTableValue
 * and randRange are declared returning u32 (include/shard/Shard0035.h, include/util/Random.h) but retail converts
 * and compares both as signed (vcvt.f32.s32, blt, __aeabi_idivmod), hence the (s32) casts; the fix is signed
 * prototypes (follow-up: changing them globally broke 2 units and regressed 5 in wave 77). */
#include "common.h"
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/BattleSkillResponseMasks.h"
#include "battle/BtlEntryA.h"
#include "gamedata/NkmEnemyLookup.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GameDataAccess_VariantE.h"
#include "shard/Shard0035.h"
#include "util/Random.h"
#include "code/Code002e_Smt4a.h"
#include "code/Code003e_Smt4a.h"

#define BATTLE_REWARD_SLOTS 6
#define BATTLE_EXPERIENCE_MAX 9999999

extern "C" {
void *asdOperatorNewD(u32 size);
s32 dataTableCountEntrySet(BtlMainStateA *state);
s32 dataTable4dSelectRowEntry(BtlMainStateA *state, s32 rowIndex);
s32 FUN_003eaea0(BtlMainStateA *state, s16 key);

/* Adds a defeated enemy's experience, money and level to the battle's reward totals, then its item drops: the
 * table rows of the extra drop list (shuffled) when the drop bonus is active, else the enemy's own three drops. */
void battleAddEnemyRewards(BtlCombatantEntryA *entry)
{
    BtlMainStateA *state = btlGetMainState();
    BattleRewardsA *rewards = &state->rewards.totals;
    NkmEnemyRecordA *record = nkmEnemyFindById(entry->data.id);
    if (record == NULL) {
        return;
    }
    s32 experience = record->experience;
    if (gameProgressIsAdvanced()) {
        f32 bonus = (f32)(s32)gameDataGetTableValue();
        if (bonus < 0.0f) {
            bonus = 0.0f;
        } else if (bonus > 9.0f) {
            bonus = 9.0f;
        }
        experience = (s32)((bonus * 0.3f + 1.0f) * (f32)experience + bonus * bonus * 0.033333335f);
        experience = experience < BATTLE_EXPERIENCE_MAX ? experience : BATTLE_EXPERIENCE_MAX;
    }
    rewards->experience += experience;
    rewards->money += record->money;
    u32 level = record->level & 0x7FFF;
    rewards->maxLevel = rewards->maxLevel > level ? rewards->maxLevel : level;
    if (valueAtF0IsReady(reinterpret_cast<ValueAtF0 *>(state))) {
        s32 limit = (s32)gameDataGetTableValue() + 1;
        limit = limit < BATTLE_REWARD_SLOTS ? limit : BATTLE_REWARD_SLOTS;
        f32 chance = (f32)((s32)gameDataGetTableValue() * 2);
        s32 count = 0;
        if (limit <= 0) {
            return;
        }
        if ((s32)gameDataGetTableValue() >= 2) {
            s32 item = FUN_003eaea0(state, entry->data.id);
            if (item > 0 && (f32)(s32)randRange(99) <= chance) {
                rewards->itemCounts[0] = 1;
                count = 1;
                rewards->itemIds[0] = item;
            }
        }
        if (count >= limit) {
            return;
        }
        s32 rows = dataTableCountEntrySet(state);
        s32 *order = (s32 *)asdOperatorNewD(rows * 4);
        for (s32 i = 0; i < rows; i++) {
            order[i] = i;
        }
        for (s32 i = 0; i < rows; i++) {
            s32 j = (s32)randRange((u16)rows) % rows;
            s32 swap = order[i];
            order[i] = order[j];
            order[j] = swap;
        }
        s32 row = 0;
        for (s32 tries = 0; tries < limit; tries++) {
            if (count >= limit) {
                break;
            }
            s32 item = dataTable4dSelectRowEntry(state, order[row]);
            if (item > 0) {
                rewards->itemIds[count] = item;
                rewards->itemCounts[count] = 1;
                count++;
            }
            row++;
            if (row > rows - 1) {
                row = 0;
            }
        }
        asdOperatorDeleteC(order);
        return;
    }
    s32 bonus = 0;
    if (state->encounterGate.disabled != 0) {
        bonus = 50;
    }
    for (s32 i = 0; i < 3; i++) {
        Table00Choice *drop = &record->choices[i];
        if (drop->value == 0) {
            continue;
        }
        if (drop->unk04 != 0 && !gameFlagIsSet(drop->unk04)) {
            continue;
        }
        if (drop->chance + bonus <= (s32)lcgRandomRange(99) && (entry->flags & g_btlSkillResponseMasks.unk058) == 0) {
            continue;
        }
        for (s32 k = 0; k < BATTLE_REWARD_SLOTS; k++) {
            if (rewards->itemIds[k] == 0 || rewards->itemIds[k] == drop->value) {
                rewards->itemIds[k] = drop->value;
                rewards->itemCounts[k]++;
                break;
            }
        }
    }
}
}
