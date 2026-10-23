/* NON_MATCHING: lookup-key narrowing repeats; saved flag pointer and lookup temporaries use different registers. */
#include "quest_center/QuestUnlockDefinition.h"
#include "shard/PadState.h"
#include "gamedata/DataTable.h"
extern "C" {
u8 *gameDataGetFlagBits(void);
PadState *gameGetPlayerData(void);
s32 gameFlagIsSet(u32 flag);
s32 unsignedKeyRecordCompare(const void *left, const void *right);
void *libc_bsearch(const void *key, const void *entries, u32 count, u32 size,
    s32 (*compare)(const void *, const void *));
void FUN_00295cec(const QuestUnlockDefinition *record);

static inline const QuestUnlockDefinition *questFindUnlockDefinition(u16 id, QuestUnlockDefinition &key)
{
    void *table = dataTableGet(11, 0);
    if (!table)
        return NULL;
    const void *entries = dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    key.id = id;
    return (const QuestUnlockDefinition *)libc_bsearch(&key, entries, count, sizeof(key), unsignedKeyRecordCompare);
}

static inline bool questMeetsUnlockRequirements(u16 id, QuestUnlockDefinition &key)
{
    const QuestUnlockDefinition *record = questFindUnlockDefinition(id, key);
    if (!record || record->minimumLevel > gameGetPlayerData()->unk76)
        return false;
    for (s32 i = 0; i < 3; ++i) {
        if (record->requiredFlags[i] && !gameFlagIsSet(record->requiredFlags[i]))
            return false;
    }
    for (s32 i = 0; i < 3; ++i) {
        u16 quest = record->requiredQuests[i];
        if (quest && !(gameDataGetFlagBits()[quest >> 3] & (1 << (quest & 7))))
            return false;
    }
    return true;
}

void FUN_00334e18(void)
{
    u8 *flags = gameDataGetFlagBits();
    QuestUnlockDefinition key;
    for (u32 id = 1; id < 141; ++id) {
        const QuestUnlockDefinition *record = questFindUnlockDefinition((u16)id, key);
        if (record && record->category == 0 && questMeetsUnlockRequirements((u16)id, key)) {
            FUN_00295cec(questFindUnlockDefinition((u16)id, key));
            s32 index = (s32)id;
            u8 *byte = flags + index / 8;
            u8 mask = (u8)(1 << (index % 8));
            *byte |= mask;
            byte[0x12] |= mask;
        }
    }
}
}
