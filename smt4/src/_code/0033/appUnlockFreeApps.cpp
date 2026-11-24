/* NON_MATCHING: retail narrows the id once for all three lookups, initializes the cost at entry,
 * and sets the unlock bit via a byte load with writeback. The build schedules these differently. */
#include "battle/BattleCommandMenu.h"
#include "util/BinarySearch.h"
#include "code/Code002e.h"
#include "gamedata/GauntletAppTable.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/PackedAppFlags.h"
extern "C" {
s32 unsignedKeyRecordCompare(const void *left, const void *right);

/* The app with `id`, NULL when there is none (appTryPurchase's findGauntletAppRecord). */
static __inline const GauntletAppRecord *findGauntletAppRecord(u16 id)
{
    void *table = dataTableGet(11, 0);
    if (table == NULL)
        return NULL;
    const void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    GauntletAppRecord key;
    key.id = id;
    return (const GauntletAppRecord *)libc_bsearch(&key, entries, count, sizeof(GauntletAppRecord), unsignedKeyRecordCompare);
}

/* appCheckPurchaseRequirements' body (code/Code002e.h): 2 when the app is missing, the player is below its level
 * or a required flag or app is missing; otherwise whether its cost exceeds the player's points. */
static __inline u8 appCheckRequirements(u32 id)
{
    void *table = dataTableGet(11, 0);
    const GauntletAppRecord *entry;
    const void *entries;
    u32 count;
    GauntletAppRecord key;
    u32 need = 0;
    s32 i;

    if (table == NULL)
        return 2;
    entries = dataTableGetEntries(table);
    count = dataTableGetCount(table);
    u16 entryId = id;
    key.id = entryId;
    entry = (const GauntletAppRecord *)libc_bsearch(&key, entries, count, sizeof(GauntletAppRecord), unsignedKeyRecordCompare);
    if (entry == NULL)
        return 2;
    if (entry->minimumLevel > gameGetPlayerData()->level)
        return 2;
    for (i = 0; i < 3; i++) {
        if (entry->requiredFlags[i] != 0 && gameFlagIsSet(entry->requiredFlags[i]) == 0)
            return 2;
    }
    for (i = 0; i < 3; i++) {
        u16 flag = entry->requiredApps[i];

        if (flag != 0 && !flagBitIsSetInline(flag))
            return 2;
    }
    table = dataTableGet(11, 0);
    if (table != NULL) {
        entries = dataTableGetEntries(table);
        count = dataTableGetCount(table);
        key.id = entryId;
        entry = (const GauntletAppRecord *)libc_bsearch(&key, entries, count, sizeof(GauntletAppRecord), unsignedKeyRecordCompare);
        if (entry != NULL)
            need = entry->cost;
    }
    u32 points = gameSaveGetPoints();
    return need > points;
}

/* Unlocks every free app (ids 1..140) whose requirements are met, marking it unlocked and new. */
void appUnlockFreeApps(void)
{
    u8 *flags = gameDataGetFlagBits();
    for (u32 id = 1; id < 141; ++id) {
        const GauntletAppRecord *record = findGauntletAppRecord(id);
        if (record && record->cost == 0 && appCheckRequirements(id) != 2) {
            s32 index = (s32)id;
            u8 *byte = flags + index / 8;
            u8 mask = (u8)(1 << (index % 8));
            *byte |= mask;
            byte[0x12] |= mask;
        }
    }
}
}
