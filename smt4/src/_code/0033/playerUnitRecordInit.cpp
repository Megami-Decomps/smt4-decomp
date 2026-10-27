#include "common.h"
#include "AsdSDK/AsdMemUtil.h"
#include "gamedata/PlayerDataBlock.h"

/* The seven base stats of a unit. */
struct PlayerBaseStats {
    u16 stat0, stat1, stat2, stat3, stat4, stat5, stat6;
};

/* The player's unit record: seven base stats, the derived maximums, the name and the level (0x8C bytes). */
struct PlayerUnitRecord {
    /* 0x00 */ PlayerBaseStats stats;
    /* 0x0E */ u8 unk0E[0xE];
    /* 0x1C */ u16 maxHp;
    /* 0x1E */ u16 maxMp;
    /* 0x20 */ u8 unk20[0xA];
    /* 0x2A */ u16 hp;
    /* 0x2C */ u16 mp;
    /* 0x2E */ u8 unk2E[0x1E];
    /* 0x4C */ char name[18];
    /* 0x5E */ u8 unk5E[0x16];
    /* 0x74 */ u16 unk74;
    /* 0x76 */ s8 level;
    /* 0x77 */ u8 unk77[0x15];
};
typedef char PlayerUnitRecordSizeCheck[sizeof(PlayerUnitRecord) == 0x8C ? 1 : -1];

extern "C" {

char *strncpy(char *destination, const char *source, u32 count);
void unitApplyLevelGrowth(PlayerUnitRecord *unit, s32 levels, s32 growStats);
void FUN_003c1ef4(s32 value);
void FUN_00299370(s32 value);

// Builds the player's unit record: level, name and base stats, grown up from level 1.
void playerUnitRecordInit(s32 level, const char *name, const PlayerBaseStats *stats)
{
    PlayerUnitRecord *unit = reinterpret_cast<PlayerUnitRecord *>(gameGetPlayerData());
    memClear(unit, sizeof(PlayerUnitRecord));
    unit->level = (s8)level;
    unit->unk74 = 0;
    strncpy(unit->name, name, 18);
    unit->name[17] = 0;
    FUN_003c1ef4(0);
    if (level > 1) {
        unitApplyLevelGrowth(unit, (s8)(level - 1), 1);
    }
    unit->stats.stat0 = stats->stat0;
    unit->stats.stat1 = stats->stat1;
    unit->stats.stat2 = stats->stat2;
    unit->stats.stat3 = stats->stat3;
    unit->stats.stat4 = stats->stat4;
    unit->stats.stat5 = stats->stat5;
    unit->stats.stat6 = stats->stat6;
    FUN_00299370(0);
    unit->hp = unit->maxHp;
    unit->mp = unit->maxMp;
}

} /* extern "C" */
