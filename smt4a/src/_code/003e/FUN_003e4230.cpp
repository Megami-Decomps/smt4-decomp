/* NON_MATCHING: record and requiredBits trade r5/r6 (register allocation only). */
#include "common.h"
#include "gamedata/DataTableAccess.h"

extern "C" {

typedef struct ShopRecord {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 price;
    /* 0x28 */ u8 unk28[2];
    /* 0x2A */ u16 levelBits; // bits 6-15: level the player needs
    /* 0x2C */ u16 requiredFlags[3];
    /* 0x32 */ u16 requiredBits[3]; // bits in the area data block
} ShopRecord;

typedef struct PlayerLevelData {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 level;
} PlayerLevelData;

PlayerLevelData *gameGetPlayerData(void);
s32 gameFlagIsSet(u16 flag);
u8 *gameDataBlockGetArea2D68(void);
u32 FUN_002e5c2c(void);

static __inline u32 shopRecordGetPrice(u32 id)
{
    ShopRecord *record = (ShopRecord *)dataFindKeyedRecordWithOverrides(id);

    return record != NULL ? record->price : 0;
}

/* Shop availability: 2 when the entry is locked, 1 when it costs more than the player has, 0 otherwise. */
u8 FUN_003e4230(u32 id)
{
    ShopRecord *record = (ShopRecord *)dataFindKeyedRecordWithOverrides(id);
    s32 i;
    u32 price;
    u32 money;

    if (record == NULL) {
        return 2;
    }
    if (gameGetPlayerData()->level < (record->levelBits >> 6)) {
        return 2;
    }
    for (i = 0; i < 3; i++) {
        if (record->requiredFlags[i] != 0 && !gameFlagIsSet(record->requiredFlags[i])) {
            return 2;
        }
    }
    for (i = 0; i < 3; i++) {
        u16 bit = record->requiredBits[i];

        if (bit != 0 && !(gameDataBlockGetArea2D68()[bit >> 3] & (1 << (bit & 7)))) {
            return 2;
        }
    }
    price = shopRecordGetPrice(id);
    money = FUN_002e5c2c();
    return price > money;
}

} /* extern "C" */
