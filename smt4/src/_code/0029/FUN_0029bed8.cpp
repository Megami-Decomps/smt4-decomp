/* NON_MATCHING: live snapshot fields copy directly; retail stages a larger temporary, redundant overwritten loads and an unchanged trailing word before its VFP block copy. */
#include "shard/GameDataBlocks.h"

namespace {
struct UnitSnapshotStatusBytes {
    u16 current;
    u8 options;
    u8 registration;
};
// A word-aligned view cannot be added to GameSavedItem's byte union without moving its 0x2E field.
struct RegisteredUnitSnapshotView {
    u32 packedStats[3];
    u32 currentValues[2];
    union {
        u32 flags;
        UnitSnapshotStatusBytes status;
    };
    u32 identity;
    UnitSummarySkills skills;
    u32 preserved2C;
    u32 experience;
};
// Bonuses lie inside the shared stat block's unaligned byte padding.
struct UnitSnapshotBonusesView {
    u8 unk000[0x590];
    u16 stats[5];
};
typedef char RegisteredUnitSnapshotLayoutCheck[sizeof(RegisteredUnitSnapshotView) == sizeof(GameSavedItem) &&
    offsetof(RegisteredUnitSnapshotView, identity) == 0x18 &&
    offsetof(RegisteredUnitSnapshotView, experience) == 0x30 ? 1 : -1];

inline u32 packSnapshotPair(u16 low, u16 high)
{
    return static_cast<u32>(low) | (static_cast<u32>(high) << 16);
}
}

extern "C" void FUN_0029bed8(u32 id)
{
    GameSaveData *save = g_gameDataBlocks.saveBlock;
    StatBlock *unit = NULL;
    for (u16 i = 0; i < save->party.stockCount; ++i) {
        const s32 index = save->party.stock[i];
        if (index >= 0 && save->party.units[index].id == id) {
            unit = &save->party.units[index];
            break;
        }
    }
    if (id < 0x501) {
        RegisteredUnitSnapshotView *snapshot = reinterpret_cast<RegisteredUnitSnapshotView *>(&save->items[id]);
        const UnitSnapshotBonusesView *bonuses = reinterpret_cast<const UnitSnapshotBonusesView *>(unit);
        snapshot->flags = (snapshot->flags & 0xFFC30000) | unit->cur5 |
            (static_cast<u32>(unit->encounter.initialization.initializationKind & 0xF) << 18);
        snapshot->packedStats[0] = packSnapshotPair(unit->level, unit->summary.stats[0] + bonuses->stats[0]);
        snapshot->packedStats[1] = packSnapshotPair(unit->summary.stats[1] + bonuses->stats[1],
            unit->summary.stats[2] + bonuses->stats[2]);
        snapshot->packedStats[2] = packSnapshotPair(unit->summary.stats[3] + bonuses->stats[3],
            unit->summary.stats[4] + bonuses->stats[4]);
        snapshot->status.options |= 1;
        snapshot->currentValues[0] = packSnapshotPair(unit->cur2, unit->cur6);
        snapshot->currentValues[1] = packSnapshotPair(unit->cur3, unit->cur4);
        snapshot->identity = packSnapshotPair(unit->summary.id, unit->summary.kind);
        snapshot->experience = unit->experience;
        snapshot->skills = unit->skills;
    }
}
