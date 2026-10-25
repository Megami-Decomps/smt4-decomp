/* NON_MATCHING: highest-level maximum compares level/current in reversed order (HI rather than LS); all other instructions match. */
#include "shard/W4_Match6_BtlEntry.h"
#include <stddef.h>

struct BattleDrop {
    u16 item;
    u16 chance;
    u16 unk04;
};
struct BattleRewardRecord {
    u16 id;
    u8 level;
    u8 unk03[0x55];
    BattleDrop drops[3];
    u16 unk6A;
    u32 experience;
    u8 unk70[8];
    u32 money;
};
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
BtlMainState *btlGetMainState(void);
BattleRewardRecord *dataTable00FindById(u32);
s32 randRange(u32);
}

extern "C" void FUN_003be7d0(const BtlEntry *entry)
{
    BattleRewardTotals *rewards = &reinterpret_cast<BattleRewardView *>(btlGetMainState())->rewards;
    const BattleRewardRecord *record = dataTable00FindById(entry->id);
    if (record != NULL) {
        rewards->experience += record->experience;
        rewards->money += record->money;
        u32 highestLevel = rewards->highestLevel;
        if (highestLevel < record->level)
            highestLevel = record->level;
        rewards->highestLevel = highestLevel;
        s32 bonus = 0;
        if (reinterpret_cast<BattleRewardView *>(btlGetMainState())->bonusDrops)
            bonus = 50;
        for (s32 i = 0; i < 3; ++i) {
            const BattleDrop *drop = &record->drops[i];
            if (drop->item != 0 &&
                (randRange(99) < drop->chance + bonus || (entry->flags & 0x4000000))) {
                for (s32 j = 0; j < 6; ++j) {
                    if (rewards->items[j] == 0 || rewards->items[j] == drop->item) {
                        rewards->items[j] = drop->item;
                        ++rewards->counts[j];
                        break;
                    }
                }
            }
        }
    }
}
