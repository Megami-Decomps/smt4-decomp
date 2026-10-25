/* NON_MATCHING: reward multiplier operand order, clamp condition scheduling and saved table registers differ. */
#include "shard/GameGlobals.h"
#include "gamedata/Table00.h"

extern "C" {
s32 gameDataGetTableValue(void);
const Table00Record *dataTable00FindById(u16 id);

// Scale a unit's level and rewards by the current progression multiplier.
void FUN_0034dae0(void *unitData, u32 id)
{
    // These views extend beyond the shared prefix or cross its byte-aligned padding.
    struct UnitRewardView {
        u16 unk00;
        u16 level;
        u8 unk04[12];
        u32 experience;
        u32 money;
    };
    struct RewardTableView {
        u16 id;
        u16 level;
        u32 experience;
        u32 money;
    };
    struct GameRewardView {
        u8 unk0000[0x20E8];
        s32 experience;
        s32 money;
    };
    UnitRewardView *unit = static_cast<UnitRewardView *>(unitData);
    GameRewardView *rewards = reinterpret_cast<GameRewardView *>(g_gameGlobals.data);
    f32 progression = static_cast<f32>(gameDataGetTableValue());
    if (progression < 0.0f) {
        progression = 0.0f;
    } else if (progression > 9.0f) {
        progression = 9.0f;
    }
    const RewardTableView *base = reinterpret_cast<const RewardTableView *>(dataTable00FindById(static_cast<u16>(id)));
    u16 level = static_cast<u16>(static_cast<s32>(static_cast<f32>(base->level & 0x7FFFu) *
        (progression * 0.55f + 1.0f) + progression * progression * 5.0f));
    unit->level = level;
    if (level >= 999) {
        level = 999;
    }
    unit->level = level;
    if (base != NULL) {
        f32 multiplier = progression * 0.3f + 1.0f + progression * progression * (1.0f / 15.0f);
        s32 experience = static_cast<s32>(multiplier * static_cast<f32>(base->experience));
        rewards->experience = experience;
        if (9999999 <= experience) {
            experience = 9999999;
        }
        rewards->experience = experience;
        s32 money = static_cast<s32>(multiplier * static_cast<f32>(base->money));
        rewards->money = money;
        rewards->money = money < 9999999 ? money : 9999999;
    } else {
        rewards->experience = unit->experience;
        rewards->money = unit->money;
    }
}
}
