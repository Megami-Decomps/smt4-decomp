/* NON_MATCHING: lookup-key narrowing repeats; saved flag pointer and lookup temporaries use different registers. */
#include "gamedata/GauntletAppTable.h"
#include "gamedata/GamePlayerData.h"
extern "C" {
u8 *gameDataGetFlagBits(void);
s32 gameFlagIsSet(u32 flag);
s32 unsignedKeyRecordCompare(const void *left, const void *right);
void *libc_bsearch(const void *key, const void *entries, u32 count, u32 size,
    s32 (*compare)(const void *, const void *));
void gameSaveGetPoints(const GauntletAppRecord *record); // declcheck: local (the shared declaration does not compile here or changes this unit)

static inline const GauntletAppRecord *questFindUnlockDefinition(u16 id, GauntletAppRecord &key)
{
    void *table = dataTableGet(11, 0);
    if (!table)
        return NULL;
    const void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    key.id = id;
    return (const GauntletAppRecord *)libc_bsearch(&key, entries, count, sizeof(key), unsignedKeyRecordCompare);
}

static inline bool questMeetsUnlockRequirements(u16 id, GauntletAppRecord &key)
{
    const GauntletAppRecord *record = questFindUnlockDefinition(id, key);
    if (!record || record->minimumLevel > gameGetPlayerData()->level)
        return false;
    for (s32 i = 0; i < 3; ++i) {
        if (record->requiredFlags[i] && !gameFlagIsSet(record->requiredFlags[i]))
            return false;
    }
    for (s32 i = 0; i < 3; ++i) {
        u16 quest = record->requiredApps[i];
        if (quest && !(gameDataGetFlagBits()[quest >> 3] & (1 << (quest & 7))))
            return false;
    }
    return true;
}

void FUN_00334e18(void)
{
    u8 *flags = gameDataGetFlagBits();
    GauntletAppRecord key;
    for (u32 id = 1; id < 141; ++id) {
        const GauntletAppRecord *record = questFindUnlockDefinition((u16)id, key);
        if (record && record->cost == 0 && questMeetsUnlockRequirements((u16)id, key)) {
            gameSaveGetPoints(questFindUnlockDefinition((u16)id, key));
            s32 index = (s32)id;
            u8 *byte = flags + index / 8;
            u8 mask = (u8)(1 << (index % 8));
            *byte |= mask;
            byte[0x12] |= mask;
        }
    }
}
}
