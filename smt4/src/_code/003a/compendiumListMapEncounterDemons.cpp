/* NON_MATCHING: the table-slot and list-head pointers are now precomputed at entry as in retail; retail also keeps the loop counters and data-table pointers in stack slots (88-byte frame vs 56) and orders the nested-loop exits differently. */
#include "common.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/EncountData.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "game/GameState.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

/* The list entry the add-routine takes: a value at 0x8 and an enabled byte at 0x18. */
typedef struct ListEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 value;
    /* 0x0C */ u8 unk0c[0xC];
    /* 0x18 */ u8 enabled;
    /* 0x19 */ u8 unk19[7];
} ListEntry;

/* The work block (only the fields touched here). */
typedef struct EntryListWork {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ u8 header[0xD];
    /* 0x02D */ u8 ready;
    /* 0x02E */ u8 unk02e[0x66];
    /* 0x094 */ u8 busy;
    /* 0x095 */ u8 unk095[0x513];
    /* 0x5A8 */ s16 first;              /* start of the list the entries are added to */
    /* 0x5AA */ u8 unk5aa[0xA00A];
    /* 0xA5B4 */ u32 map;
} EntryListWork;

EncountTableRecord *dataTableGetRecord02(s32 index);
s32 itemIsCollectedWithRelated(u32 id);
void FUN_0022e17c(ListEntry *out, u32 id, s32 arg);
void recordListAppendUniqueKey(void *list, ListEntry *entry);
void motionPlayForMode(EntryListWork *work, s32 arg);
void listScrollerInitialize(void *header, s32 a, s32 b, s32 c, s32 d);

/* Adds eligible demons from the map's encounter tables, then refreshes the compendium list. */
void compendiumListMapEncounterDemons(EntryListWork *work)
{
    u32 *map = &work->map;
    s16 *list = &work->first;
    for (s32 area = 1; area < 16; area++) {
        for (s32 occurrence = 0; occurrence < 16; occurrence++) {
            const EncountRecord *entry = FUN_003bc0ac(*map, area, occurrence);

            if (entry == NULL) {
                break;
            }
            for (s32 k = 0; k < 25; k++) {
                u16 key = k == 0 ? entry->initialTableId : entry->slots[k - 1].tableId;
                if (key == 0) {
                    break;
                }
                const EncountTableRecord *table = dataTableGetRecord02(key);
                if (table == NULL) {
                    continue;
                }
                for (s32 i = 0; i < 15; i++) {
                    if (table->choices[i].groupId == 0) {
                        continue;
                    }
                    const EncountGroupRecord *encounter = dataTable02GetEntryByIndex(table->choices[i].groupId);
                    if (encounter == NULL) {
                        continue;
                    }
                    for (s32 j = 0; j < 6; j++) {
                        u16 id = encounter->enemyIds[j];

                        if (id == 0 || nkmEnemyFindById(id) == NULL) {
                            continue;
                        }
                        NkmBaseRecord *devil = nkmBaseGetRecord(id);
                        NkmEnemyRecord *record = nkmEnemyFindById(id);

                        if (devil != NULL && record != NULL
                            && (g_gameState.showAllEntries != 0 || ((record->flags & 1) != 0 && itemIsCollectedWithRelated(devil->id) != 0))) {
                            ListEntry listEntry;
                            u32 value = 0;

                            FUN_0022e17c(&listEntry, devil->id, 0);
                            NkmEnemyRecord *found = nkmEnemyFindById(devil->id);
                            if (found != NULL) {
                                value = found->money;
                            }
                            listEntry.value = value;
                            listEntry.enabled = 1;
                            recordListAppendUniqueKey(list, &listEntry);
                        }
                    }
                }
            }
        }
    }
    motionPlayForMode(work, 1);
    listScrollerInitialize(work->header, 10, work->first, 0, 1);
    asdDebugHookPtrInt(work->header, 1);
    work->ready = 1;
    work->busy = 0;
}

}
