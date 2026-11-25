/* NON_MATCHING: nested encounter loop counters and table pointers occupy registers rather
 * than the retail 88-byte frame. */
#include "common.h"
#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/EncountData.h"
#include "game/GameStateA.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "camp/CampStateQueries_UnitComparison.h"
#include "camp/InventoryList.h"
#include "ui/ItemListSelection.h"
#include "gamedata/NkmEnemyLookup.h"

struct Unk4cfeb0Scroller;
extern "C" {

/* The work block (only the fields touched here). */
typedef struct EntryListWork {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ u8 header[0xD];
    /* 0x02D */ u8 ready;
    /* 0x02E */ u8 unk02e[0x66];
    /* 0x094 */ u8 busy;
    /* 0x095 */ u8 unk095[0x7CF];
    /* 0x0864 */ InventoryList list;
    /* 0xA870 */ u8 unkA870[4];
    /* 0xA874 */ u32 map;
} EntryListWork;
typedef char EntryListWorkOffsets[offsetof(EntryListWork, list) == 0x864 &&
    offsetof(EntryListWork, map) == 0xA874 ? 1 : -1];

EncountTableRecordA *dataTableGetRecord02(s32 index);
s32 itemIsCollectedWithRelated(u32 id);
void listScrollerInitialize(Unk4cfeb0Scroller *scroller, s32 visible, s32 total,
    s32 direction, s32 unused, s32 option);

/* Adds eligible demons from the map's encounter tables, then refreshes the compendium list. */
void compendiumListMapEncounterDemons(EntryListWork *work)
{
    for (s32 area = 1; area < 16; area++) {
        for (s32 occurrence = 0; occurrence < 16; occurrence++) {
            const EncountRecordA *entry = dataTableFindEntryOccurrenceByBytePair(work->map, area, occurrence);

            if (entry == NULL) {
                break;
            }
            for (s32 k = 0; k < 25; k++) {
                u16 key = k == 0 ? entry->initialTableId : entry->slots[k - 1].tableId;
                if (key == 0) {
                    break;
                }
                const EncountTableRecordA *table = dataTableGetRecord02(key);
                if (table == NULL) {
                    continue;
                }
                for (s32 i = 0; i < 30; i++) {
                    if (table->choices[i].groupId == 0) {
                        continue;
                    }
                    const EncountGroupRecordA *encounter = dataTable02GetRecordWithAocPackage(table->choices[i].groupId);
                    if (encounter == NULL) {
                        continue;
                    }
                    for (s32 j = 0; j < 6; j++) {
                        u16 id = encounter->enemyIds[j];

                        if (id == 0 || nkmEnemyFindById(id) == NULL) {
                            continue;
                        }
                        NkmBaseRecordA *devil = nkmBaseGetRecord(id);
                        NkmEnemyRecordA *record = nkmEnemyFindById(id);

                        if (devil != NULL && record != NULL
                            && (g_gameState.showAllEntries != 0 || ((record->flags & 1) != 0 && itemIsCollectedWithRelated(devil->id) != 0))) {
                            CampUnitComparison listEntry;
                            u32 value = 0;

                            campFillUnitComparison(&listEntry, devil->id, 0);
                            NkmEnemyRecordA *found = nkmEnemyFindById(devil->id);
                            if (found != NULL) {
                                value = found->money;
                            }
                            listEntry.amount = value;
                            listEntry.unk18[0] = 1;
                            inventoryListAppendUnique(&work->list, &listEntry);
                        }
                    }
                }
            }
        }
    }
    itemListSelectVariant((ItemListSelectionOwner *)work, 1, 1);
    listScrollerInitialize((Unk4cfeb0Scroller *)work->header, 10, work->list.count, 0, 1, 1);
    asdDebugHookPtrInt(work->header, 1);
    work->ready = 1;
    work->busy = 0;
}

}
