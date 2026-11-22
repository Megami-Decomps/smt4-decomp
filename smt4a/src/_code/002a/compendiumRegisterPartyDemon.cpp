/* NON_MATCHING: 108 lines off: retail reads the party count through an add chain from the save block (a pooled
 * offset here), hoists the NULL and the record address, and allocates the loop registers differently. */
#include "shard/W4_W4Match6b_GameDataBlock.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/NkmBaseRecordA.h"
#include "shard/W6_W6Match1_BattleStageModel.h"
#include <string.h>

/* The demon record flags of a listed (compendium) demon and the item bit of one that was registered. */
enum {
    COMPENDIUM_LISTED = 1,
    COMPENDIUM_SEEN = 2,
    COMPENDIUM_REGISTERED = 1,
    COMPENDIUM_MAX_ID = 0x500
};

/* slotEntryFindById's body (with gameGetSlotTable's): the party demon with id `id`, NULL when absent. */
static __inline SlotRecordA *partyFindDemon(u32 id)
{
    SaveSlotTableA *table = &g_gameDataBlocks.saveBlock->body.slots;

    for (u16 i = 0; i < table->count; i++) {
        s32 index = table->party[i];
        if (index >= 0) {
            SlotRecordA *entry = &table->entries[index];
            if (entry->id == id) {
                return entry;
            }
        }
    }
    return NULL;
}

/* compendiumEntryIsRegistered's body: 1 once entry `index` of the compendium was registered. */
static __inline u32 compendiumIsRegistered(u32 index)
{
    if (index > COMPENDIUM_MAX_ID) {
        return 0;
    }
    GameSaveDataA *save = g_gameDataBlocks.saveBlock;
    GameSavedItemA *entry = &save->body.items[index];
    return (entry->bits & COMPENDIUM_SEEN) >> 1;
}

extern "C" {

void __aeabi_memcpy4(void *destination, const void *source, u32 size);

/* Registers the party demon with id `id` in the compendium (a copy of its unit record), then raises counter 5 to
 * the percentage of listed demons that were registered. */
void compendiumRegisterPartyDemon(u32 id)
{
    SlotRecordA *demon = partyFindDemon(id);

    if (id <= COMPENDIUM_MAX_ID) {
        GameSaveDataA *save = g_gameDataBlocks.saveBlock;
        GameSavedItemA *entry = &save->body.items[id];
        GameSavedItemA record;

        __aeabi_memcpy4(&record, entry, sizeof(record));
        record.level = demon->level;
        record.experience = demon->experience;
        record.maxHp = demon->tableStats[0];
        record.maxMp = demon->tableStats[1];
        record.stats[0] = demon->tableStats[2] + demon->bonuses[2];
        record.unitStats[0] = demon->stats[0];
        record.stats[1] = demon->tableStats[3] + demon->bonuses[3];
        record.unitStats[1] = demon->stats[1];
        record.stats[2] = demon->tableStats[4] + demon->bonuses[4];
        record.unitStats[2] = demon->stats[2];
        record.stats[3] = demon->tableStats[5] + demon->bonuses[5];
        record.unitStats[3] = demon->stats[3];
        record.stats[4] = demon->tableStats[6] + demon->bonuses[6];
        record.unitStats[4] = demon->stats[4];
        memcpy(record.skillWords, demon->skillWords, sizeof(record.skillWords));
        memcpy(record.skillRankWords, demon->skillRankWords, sizeof(record.skillRankWords));
        __aeabi_memcpy4(record.categoryRanks, demon->categoryRanks, sizeof(record.categoryRanks));
        record.flags = (record.flags & ~0x3C) | ((demon->status << 2) & 0x3C);
        __aeabi_memcpy4(entry, &record, sizeof(record));
        entry->flags |= COMPENDIUM_REGISTERED;

        s32 listed = 0;
        s32 seen = 0;
        for (s32 index = 0; index < 0x4FF; index++) {
            NkmBaseRecordA *info = nkmBaseGetRecord((u16)(index + 1));
            if (info != NULL && (info->flags & COMPENDIUM_LISTED) != 0) {
                listed++;
                if (compendiumIsRegistered(info->id)) {
                    seen++;
                }
            }
        }
        countersRaiseA(5, seen * 100 / listed);
    }
}

} /* extern "C" */
