/* NON_MATCHING: retail narrows the id once (uxth at the first key store, reused by all three lookups) and keeps the
 * inlined requirement check's dead `need = 0` in fp from entry; the build hoists the narrowing and sets the zero inside
 * the loop (66 lines). */
#include "battle/BattleCommandMenu.h"
#include "util/BinarySearch.h"
#include "code/Code002e.h"
#include "gamedata/GauntletAppTable.h"
#include "gamedata/GamePlayerData.h"
extern "C" {
u8 *gameDataGetFlagBits(void);
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
    key.id = id;
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

        if (flag != 0 && (gameDataGetFlagBits()[flag >> 3] & (1 << (flag & 7))) == 0)
            return 2;
    }
    table = dataTableGet(11, 0);
    if (table != NULL) {
        entries = dataTableGetEntries(table);
        count = dataTableGetCount(table);
        key.id = id;
        entry = (const GauntletAppRecord *)libc_bsearch(&key, entries, count, sizeof(GauntletAppRecord), unsignedKeyRecordCompare);
        if (entry != NULL)
            need = entry->cost;
    }
    return need > gameSaveGetPoints();
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
