#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include <stddef.h>
#include "battle/BtlMainAccess.h"
#include "gamedata/NkmEnemyLookup.h"

struct BattleRewardTotals {
    u32 items[6];
    u32 counts[6];
    u32 money;
    u32 experience;
    u32 highestLevel;
};
struct BattleRewardView {
    u8 prefix[0x174];
    BattleRewardTotals rewards;
    u8 unk1B0[0x4307];
    u8 bonusDrops;
};
typedef char BattleRewardLayoutCheck[
    sizeof(BattleRewardTotals) == 0x3c &&
    offsetof(BattleRewardView, rewards) == 0x174 &&
    offsetof(BattleRewardView, bonusDrops) == 0x44b7 ? 1 : -1];
extern "C" {
s32 randRange(u32);
}

extern "C" void FUN_003be7d0(const BtlEntry *entry)
{
    BattleRewardTotals *rewards = &reinterpret_cast<BattleRewardView *>(btlGetMainState())->rewards;
    const NkmEnemyRecord *record = nkmEnemyFindById(entry->data.id);
    if (record != NULL) {
        rewards->experience += record->experience;
        rewards->money += record->money;
        rewards->highestLevel = rewards->highestLevel > record->level ? rewards->highestLevel : record->level;
        s32 bonus = 0;
        if (reinterpret_cast<BattleRewardView *>(btlGetMainState())->bonusDrops)
            bonus = 50;
        for (s32 i = 0; i < 3; ++i) {
            const Table00Choice *drop = &record->drops[i];
            if (drop->value != 0 &&
                (randRange(99) < drop->chance + bonus || (entry->flags & 0x4000000))) {
                for (s32 j = 0; j < 6; ++j) {
                    if (rewards->items[j] == 0 || rewards->items[j] == drop->value) {
                        rewards->items[j] = drop->value;
                        ++rewards->counts[j];
                        break;
                    }
                }
            }
        }
    }
}
