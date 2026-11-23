/* NON_MATCHING: retail uses r8 for the cost and r7 for the narrowed id; the build swaps those registers and schedules the level and unlock-bit tests differently. */
#include "code/Code002e.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include "gamedata/GauntletAppTable.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

typedef s32 AppKeyCompare(const UnsignedRecordKey32 *a, const UnsignedRecordKey32 *b);

GauntletAppRecord *libc_bsearch(const GauntletAppRecord *key, const GauntletAppRecord *base, u32 count, u32 size, AppKeyCompare *compare);
s32 gameFlagIsSet(u32 flag);
u8 *gameDataGetFlagBits(void);

s32 unsignedKeyRecordCompare(const UnsignedRecordKey32 *left, const UnsignedRecordKey32 *right);

/* Inline body of flagBitIsSet. */
static __inline u8 appUnlockBitIsSet(u32 bit)
{
    u8 *bits = gameDataGetFlagBits();
    u32 byte = bit >> 3;
    u32 shift = bit & 7;
    return (bits[byte] & (1 << shift)) != 0;
}

/* Entry check for `id`: 2 when it is missing, the player is below its level or a required flag is unset; otherwise whether its cost exceeds gameSaveGetPoints. */
u8 appCheckPurchaseRequirements(u32 id)
{
    void *table = dataTableGet(11, 0);
    GauntletAppRecord *entry;
    GauntletAppRecord *entries;
    u32 count;
    GauntletAppRecord key;
    u32 need = 0;
    s32 i;

    if (table == NULL) {
        return 2;
    }
    entries = gauntletAppRecords(table);
    count = dataTableGetCount(table);
    key.id = id;
    entry = libc_bsearch(&key, entries, count, sizeof(GauntletAppRecord), unsignedKeyRecordCompare);
    if (entry == NULL) {
        return 2;
    }
    if (entry->minimumLevel > gameGetPlayerData()->level) {
        return 2;
    }
    for (i = 0; i < 3; i++) {
        if (entry->requiredFlags[i] != 0 && gameFlagIsSet(entry->requiredFlags[i]) == 0) {
            return 2;
        }
    }
    for (i = 0; i < 3; i++) {
        u16 flag = entry->requiredApps[i];
        if (flag != 0 && !appUnlockBitIsSet(flag)) {
            return 2;
        }
    }
    table = dataTableGet(11, 0);
    if (table != NULL) {
        entries = gauntletAppRecords(table);
        count = dataTableGetCount(table);
        key.id = id;
        entry = libc_bsearch(&key, entries, count, sizeof(GauntletAppRecord), unsignedKeyRecordCompare);
        if (entry != NULL) {
            need = entry->cost;
        }
    }
    return need > gameSaveGetPoints();
}

} /* extern "C" */
