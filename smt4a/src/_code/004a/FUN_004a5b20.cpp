/* NON_MATCHING: recovered selector/scroller arguments; nested-loop counters and table pointers occupy registers instead of retail's88-byte frame. */
#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "ui/ItemListSelection.h"

struct Unk4cfeb0Scroller;
extern "C" {

/* A gift-table style entry: a first key and up to 24 more (key, two words) records. */
typedef struct OccurrenceEntry {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ u16 firstKey;
    struct {
        /* 0x14 */ u16 key;
        /* 0x16 */ u16 unk16[2];
    } more[24];
} OccurrenceEntry;

/* A table-00 record: bit 0 of the flags at 0x16 allows it without the debug flag; 0x7C is its value. */
typedef struct Table00Record {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u16 flags;
    /* 0x18 */ u8 unk18[0x64];
    /* 0x7C */ u32 value;
} Table00Record;

typedef struct Table02Slot {
    u16 id;
    u16 unk02;
} Table02Slot;

typedef struct ItemRecord {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u16 ids[6];
} ItemRecord;

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
    /* 0x095 */ u8 unk095[0x7CF];
    /* 0x864 */ s16 first;              /* start of the list the entries are added to */
    /* 0x866 */ u8 unk866[0xA00E];
    /* 0xA874 */ u32 table;
} EntryListWork;

typedef struct GameStateFlag {
    /* 0x000 */ u8 unk000[0x660];
    /* 0x660 */ s32 showAll;
} GameStateFlag;

extern GameStateFlag g_gameState;

OccurrenceEntry *dataTableFindEntryOccurrenceByBytePair(u32 table, s32 first, s32 second);
Table02Slot *dataTableGetRecord02(u16 key);
ItemRecord *FUN_004bb80c(u32 id);
Table00Record *dataTable00FindById(u32 id);
u16 *FUN_00184310(u32 id);
s32 FUN_0026264c(u32 id);
void campFillUnitComparison(ListEntry *out, u32 id, s32 arg);
void FUN_004a833c(void *list, ListEntry *entry);
void FUN_004cfeb0(Unk4cfeb0Scroller *scroller, s32 visible, s32 total,
    s32 direction, s32 unused, s32 option);

/* Scans every (group, subgroup) entry, and for each of its keys every item and unlockable id that
 * is allowed, adding it to the work's list; then finalises the list. */
void FUN_004a5b20(EntryListWork *work)
{
    for (s32 group = 1; group < 16; group++) {
        for (s32 sub = 0; sub < 16; sub++) {
            OccurrenceEntry *entry = dataTableFindEntryOccurrenceByBytePair(work->table, group, sub);

            if (entry == NULL) {
                break;
            }
            for (s32 k = 0; k < 25; k++) {
                u16 key = k == 0 ? entry->firstKey : entry->more[k - 1].key;

                if (key == 0) {
                    break;
                }
                Table02Slot *slots = dataTableGetRecord02(key);

                if (slots == NULL) {
                    continue;
                }
                for (s32 i = 0; i < 30; i++) {
                    if (slots[i].id == 0) {
                        continue;
                    }
                    ItemRecord *item = FUN_004bb80c(slots[i].id);

                    if (item == NULL) {
                        continue;
                    }
                    for (s32 j = 0; j < 6; j++) {
                        u32 id = item->ids[j];

                        if (id == 0 || dataTable00FindById(id) == NULL) {
                            continue;
                        }
                        u16 *named = FUN_00184310(id);
                        Table00Record *record = dataTable00FindById(id);

                        if (named != NULL && record != NULL
                            && (g_gameState.showAll != 0 || ((record->flags & 1) != 0 && FUN_0026264c(*named) != 0))) {
                            ListEntry listEntry;
                            u32 value = 0;

                            campFillUnitComparison(&listEntry, *named, 0);
                            Table00Record *found = dataTable00FindById(*named);
                            if (found != NULL) {
                                value = found->value;
                            }
                            listEntry.value = value;
                            listEntry.enabled = 1;
                            FUN_004a833c(&work->first, &listEntry);
                        }
                    }
                }
            }
        }
    }
    itemListSelectVariant(reinterpret_cast<ItemListSelectionOwner *>(work), 1, 1);
    FUN_004cfeb0(reinterpret_cast<Unk4cfeb0Scroller *>(work->header), 10, work->first, 0, 1, 1);
    asdDebugHookPtrInt(work->header, 1);
    work->ready = 1;
    work->busy = 0;
}

}
