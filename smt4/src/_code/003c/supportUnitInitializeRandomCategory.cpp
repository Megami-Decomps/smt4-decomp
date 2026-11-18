#include "shard/GameOptions.h"
#include "gamedata/SupportUnitRecord.h"
#include "AsdSDK/AsdMemUtil.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
GameOptions *gameGetSupportUnitData(void); // declcheck: local (the shared declaration does not compile here or changes this unit)
s32 randNextInRange(u16); // declcheck: local (the shared declaration does not compile here or changes this unit)
u32 tableEntryIndexByKey(s32, u8);
SupportUnitRecord *supportUnitGetEntry(s32, u32);

// Pick a nonzero support-unit category at random and initialize its statistics.
void supportUnitInitializeRandomCategory(void)
{
    GameOptions *options = gameGetSupportUnitData();
    u32 count = 0;
    for (s32 i = 0; i < 3; ++i) {
        if (options->supportCandidates[i] != 0)
            ++count;
    }
    u32 selected = randNextInRange(static_cast<u16>(count - 1));
    s32 index = 0;
    for (;;) {
        if (options->supportCandidates[index] != 0) {
            if (selected == 0)
                break;
            --selected;
        }
        if (++index >= 3)
            return;
    }
    s16 id = options->supportCandidates[index];
    GameOptions *unit = gameGetSupportUnitData();
    u32 variant = ~0u;
    for (s32 j = 0; j < 3; ++j) {
        if (unit->supportCandidates[j] == id) {
            PlayerDataIV *player = gameGetPlayerData();
            variant = tableEntryIndexByKey(id, player->level);
            break;
        }
    }
    memClear(unit, 0x604);
    const SupportUnitRecord *record = supportUnitGetEntry(id, variant);
    unit->unk604 = id;
    unit->supportIndex = variant;
    unit->unk46 = 0x4B1;
    unit->unk0048[0] = record->flags & 0x7F;
    GameOptionsSupportStats &stats = unit->supportStats;
    u16 health = record->stats.base[0];
    stats.base[0] = health;
    u16 mana = record->stats.base[1];
    stats.base[1] = mana;
    u16 stat2 = record->stats.base[2];
    stats.base[2] = stat2;
    u16 stat4 = record->stats.base[4];
    stats.base[4] = stat4;
    u16 stat5 = record->stats.base[5];
    stats.base[5] = stat5;
    u16 stat6 = record->stats.base[6];
    stats.base[6] = stat6;
    u16 stat3 = record->stats.base[3];
    stats.base[3] = stat3;

    stats.current[0] = stats.maximum[0] = health;
    stats.current[1] = stats.maximum[1] = mana;
    stats.current[2] = stats.maximum[2] = stat2;
    stats.current[4] = stats.maximum[4] = stat4;
    stats.current[5] = stats.maximum[5] = stat5;
    stats.current[6] = stats.maximum[6] = stat6;
    stats.current[3] = stats.maximum[3] = stat3;
    stats.health = health;
    stats.mana = mana;
}
}
