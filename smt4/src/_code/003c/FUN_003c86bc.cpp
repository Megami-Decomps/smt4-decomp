/* NON_MATCHING: candidate counting, selection loop and ordered stat copies now match (ported from smt4a FUN_004da144); only the selection ordinal/loop temp registers (retail r2/r1) and the stat-value registers are exchanged. */
#include "shard/GameOptions.h"
#include "gamedata/SupportUnitRecord.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
GameOptions *gameGetSupportUnitData(void);
void *gameGetPlayerData(void);
s32 randNextInRange(u16);
u32 tableEntryIndexByKey(s32, u8);
SupportUnitRecord *supportUnitGetEntry(s32, u32);

void FUN_003c86bc(void)
{
    struct Candidates { u8 prefix[0x60A]; u16 ids[3]; };
    struct PlayerVariant { u8 prefix[0x76]; u8 key; };
    // These stat copies overlay the legacy settings prefix; keep the context-specific interpretation local.
    struct StatCopies {
        u16 base[7];
        u16 current[7];
        u16 maximum[7];
        u16 health;
        u16 mana;
    };
    GameOptions *options = gameGetSupportUnitData();
    u32 count = 0;
    for (s32 i = 0; i < 3; ++i) {
        if (reinterpret_cast<Candidates *>(options)->ids[i] != 0)
            ++count;
    }
    u32 selected = randNextInRange(static_cast<u16>(count - 1));
    s32 index = 0;
    for (;;) {
        if (reinterpret_cast<Candidates *>(options)->ids[index] != 0) {
            if (selected == 0)
                break;
            --selected;
        }
        if (++index >= 3)
            return;
    }
    s16 id = reinterpret_cast<Candidates *>(options)->ids[index];
    GameOptions *unit = gameGetSupportUnitData();
    u32 variant = ~0u;
    for (s32 j = 0; j < 3; ++j) {
        if (reinterpret_cast<Candidates *>(unit)->ids[j] == id) {
            PlayerVariant *player = static_cast<PlayerVariant *>(gameGetPlayerData());
            variant = tableEntryIndexByKey(id, player->key);
            break;
        }
    }
    memClear(unit, 0x604);
    const SupportUnitRecord *record = supportUnitGetEntry(id, variant);
    unit->unk604 = id;
    unit->supportIndex = variant;
    unit->unk46 = 0x4B1;
    unit->unk0048[0] = record->flags & 0x7F;
    StatCopies *stats = reinterpret_cast<StatCopies *>(unit);
    u16 health = record->stats.base[0];
    stats->base[0] = health;
    u16 mana = record->stats.base[1];
    stats->base[1] = mana;
    u16 stat2 = record->stats.base[2];
    stats->base[2] = stat2;
    u16 stat4 = record->stats.base[4];
    stats->base[4] = stat4;
    u16 stat5 = record->stats.base[5];
    stats->base[5] = stat5;
    u16 stat6 = record->stats.base[6];
    stats->base[6] = stat6;
    u16 stat3 = record->stats.base[3];
    stats->base[3] = stat3;
    stats->maximum[0] = health;
    stats->current[0] = health;
    stats->maximum[1] = mana;
    stats->current[1] = mana;
    stats->maximum[2] = stat2;
    stats->current[2] = stat2;
    stats->maximum[4] = stat4;
    stats->current[4] = stat4;
    stats->maximum[5] = stat5;
    stats->current[5] = stat5;
    stats->maximum[6] = stat6;
    stats->current[6] = stat6;
    stats->maximum[3] = stat3;
    stats->current[3] = stat3;
    stats->health = health;
    stats->mana = mana;
}
}
