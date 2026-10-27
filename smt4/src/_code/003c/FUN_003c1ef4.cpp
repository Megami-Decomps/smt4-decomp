#include "gamedata/PlayerInitialization.h"
#include "gamedata/DataTable.h"
#include "gamedata/PlayerDataBlock.h"

extern "C" {
void FUN_00299370(s32 mode);

/* Table 9 record: byte data, so the id bytes sit unaligned at offset 5. */
typedef struct Table09Record {
    u8 unk00[5];
    u8 id[4];    /* 0x05 */
    u8 valueA;   /* 0x09 */
    u8 valueB;   /* 0x0A */
    u8 valueC;   /* 0x0B */
    u8 valueD;   /* 0x0C */
    u8 valueE;   /* 0x0D */
} Table09Record;

/* The record's packed copy; its bytes 0x0A..0x0D are the growth parameters FUN_003c1ab4 reads. */
typedef struct Table09Info {
    u8 id[4];    /* 0x00 */
    u8 valueA;   /* 0x04 */
    u8 unk05;
    u8 valueB;   /* 0x06 */
    u8 unk07;
    u8 valueC;   /* 0x08 */
    u8 unk09;
    u8 valueD;   /* 0x0A */
    u8 valueE;   /* 0x0B */
    u32 unk0C;   /* 0x0C */
} Table09Info;

struct GrowthParameters {
    u8 unk00[6];   // 0x00
    u16 firstBase;  // 0x06
    u16 secondBase; // 0x08
    u8 firstGain;  // 0x0a
    u8 secondGain; // 0x0b
};

struct GrowthValues {
    s16 first;  // 0x00
    u16 second; // 0x02
};

/* Copies the first record of data table 9 into info. */
void FUN_003c1e50(Table09Info *info)
{
    void *resource = dataTableGet(9, 0);
    dataTableGetCount(resource);
    Table09Record *record = (Table09Record *)dataTableGetEntries(resource);
    Table09Info result = {0};
    result.id[0] = record->id[0];
    result.id[1] = record->id[1];
    result.id[2] = record->id[2];
    result.id[3] = record->id[3];
    result.valueA = record->valueA;
    result.valueB = record->valueB;
    result.valueC = record->valueC;
    result.valueD = record->valueD;
    result.valueE = record->valueE;
    *info = result;
}

// Calculate the two growth values, applying the second-value percentage and upper cap.
void FUN_003c1ab4(s16 level, GrowthValues *output, const GrowthParameters *parameters)
{
    s32 first = level * parameters->firstGain + parameters->firstBase;
    u16 firstValue = first <= 9999 ? (u16)first : 9999;
    output->first = firstValue;
    s32 second = (level * parameters->secondGain + parameters->secondBase) * 45 / 100;
    output->second = second <= 9999 ? (u16)second : 9999;
}

/* Resets player advancement and initial attributes, computes base HP/MP, then restores both. */
void FUN_003c1ef4(void)
{
    /* A u32 view of the shared byte padding at 0x2E would change that member's alignment. */
    struct PlayerExperienceView {
        /* 0x00 */ u8 unk00[0x30];
        /* 0x30 */ u32 experience;
    };
    typedef char PlayerExperienceOffsetCheck[offsetof(PlayerExperienceView, experience) == 0x30 ? 1 : -1];
    PlayerInitialRecordIV *player = reinterpret_cast<PlayerInitialRecordIV *>(gameGetPlayerData());
    player->enabled = 1;
    ((PlayerExperienceView *)player)->experience = 0;
    player->advancement.points = 0;
    void *table = dataTableGet(9, 0);
    dataTableGetCount(table);
    const PlayerInitialGrowthIV *initial = (const PlayerInitialGrowthIV *)dataTableGetEntries(table);
    for (s32 index = 0; index < 5; ++index) {
        player->baseStats.stats[index] = initial->stats[index];
    }
    Table09Info info;
    FUN_003c1e50(&info);
    // The base HP and MP words (0x0E, 0x10) are the growth output pair.
    FUN_003c1ab4(player->enabled, reinterpret_cast<GrowthValues *>(&player->baseStats),
                 reinterpret_cast<const GrowthParameters *>(&info));
    FUN_00299370(0);
    player->hp = player->maximumHp;
    player->mp = player->maximumMp;
}
}
