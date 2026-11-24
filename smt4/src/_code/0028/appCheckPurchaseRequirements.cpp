/* NON_MATCHING: 12 lines; retail uses r8 for the cost and r7 for the narrowed id (single-use locals for the player
 * record and the points give retail's registers, but only by moving the allocation). */
#include "code/Code002e.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include "gamedata/GauntletAppTable.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/PackedAppFlags.h"

extern "C" {

typedef s32 AppKeyCompare(const UnsignedRecordKey32 *a, const UnsignedRecordKey32 *b);

GauntletAppRecord *libc_bsearch(const GauntletAppRecord *key, const GauntletAppRecord *base, u32 count, u32 size, AppKeyCompare *compare);
s32 gameFlagIsSet(u32 flag);

s32 unsignedKeyRecordCompare(const UnsignedRecordKey32 *left, const UnsignedRecordKey32 *right);

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
    u16 entryId = id;
    key.id = entryId;
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
        if (flag != 0 && !flagBitIsSetInline(flag)) {
            return 2;
        }
    }
    table = dataTableGet(11, 0);
    if (table != NULL) {
        entries = gauntletAppRecords(table);
        count = dataTableGetCount(table);
        key.id = entryId;
        entry = libc_bsearch(&key, entries, count, sizeof(GauntletAppRecord), unsignedKeyRecordCompare);
        if (entry != NULL) {
            need = entry->cost;
        }
    }
    return need > gameSaveGetPoints();
}

} /* extern "C" */
