/* NON_MATCHING: register allocation only: retail keeps `need` in r8 and the narrowed id in r7 (here swapped), and the entry in r5 / flag in r6 (here swapped); the final need > FUN_00295cec() comparison now matches. Declaration order does not affect it. */
#include "shard/W5_W5Match1_RecordKeys.h"
#include "gamedata/GauntletAppTable.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

typedef s32 AppKeyCompare(const UnsignedRecordKey32 *a, const UnsignedRecordKey32 *b);

GauntletAppRecord *libc_bsearch(const GauntletAppRecord *key, const GauntletAppRecord *base, u32 count, u32 size, AppKeyCompare *compare);
s32 gameFlagIsSet(u32 flag);
u8 *gameDataGetFlagBits(void);
u32 FUN_00295cec(void);

s32 unsignedKeyRecordCompare(const UnsignedRecordKey32 *left, const UnsignedRecordKey32 *right);

/* Entry check for `id`: 2 when it is missing, the player is below its level or a required flag is unset; otherwise whether its cost exceeds FUN_00295cec. */
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

        if (flag != 0 && (gameDataGetFlagBits()[flag >> 3] & (1 << (flag & 7))) == 0) {
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
    return need > FUN_00295cec();
}

} /* extern "C" */
