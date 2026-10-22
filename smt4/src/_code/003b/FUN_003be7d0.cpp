/* NON_MATCHING: reward-array pointer formation and item-slot search scheduling differ. */
#include "shard/W4_Match6_BtlEntry.h"

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
struct BattleRewardView {
    u8 prefix[0x174];
    u32 items[6];
    u32 counts[6];
    u32 money;
    u32 experience;
    u32 highestLevel;
    u8 unk1B0[0x4307];
    u8 bonusDrops;
};
extern "C" {
BtlMainState *btlGetMainState(void);
BattleRewardRecord *dataTable00FindById(u32);
s32 randRange(u32);
}

extern "C" void FUN_003be7d0(const BtlEntry *entry)
{
    BattleRewardView *rewards = reinterpret_cast<BattleRewardView *>(btlGetMainState());
    const BattleRewardRecord *record = dataTable00FindById(entry->id);
    if (record != NULL) {
        rewards->experience += record->experience;
        rewards->money += record->money;
        if (rewards->highestLevel <= record->level) {
            rewards->highestLevel = record->level;
        }
        s32 bonus = reinterpret_cast<BattleRewardView *>(btlGetMainState())->bonusDrops ? 50 : 0;
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
