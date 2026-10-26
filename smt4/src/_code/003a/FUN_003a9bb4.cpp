/* NON_MATCHING: the table-slot and list-head pointers are now precomputed at entry as in retail; retail also keeps the loop counters and data-table pointers in stack slots (88-byte frame vs 56) and orders the nested-loop exits differently. */
#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

/* A gift-table style entry: a first key and up to 24 more (key, two words) records. */
typedef struct OccurrenceEntry {
    /* 0x00 */ u8 unk00[0x0E];
    /* 0x0E */ u16 firstKey;
    struct {
        /* 0x10 */ u16 key;
        /* 0x12 */ u16 unk12[2];
    } more[24];
} OccurrenceEntry;

/* A table-00 record: bit 0 of the flags at 0x16 allows it without the debug flag; 0x78 is its value. */
typedef struct Table00Record {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u16 flags;
    /* 0x18 */ u8 unk18[0x60];
    /* 0x78 */ u32 value;
} Table00Record;

typedef struct Table02Slot {
    u16 id;
    u16 unk02;
} Table02Slot;

typedef struct ItemRecord {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u16 ids[6];
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
    /* 0x095 */ u8 unk095[0x513];
    /* 0x5A8 */ s16 first;              /* start of the list the entries are added to */
    /* 0x5AA */ u8 unk5aa[0xA00A];
    /* 0xA5B4 */ u32 table;
} EntryListWork;

typedef struct GameStateFlag {
    /* 0x000 */ u8 unk000[0x3E0];
    /* 0x3E0 */ s32 showAll;
} GameStateFlag;

extern GameStateFlag g_gameState;

OccurrenceEntry *FUN_003bc0ac(u32 table, s32 first, s32 second);
Table02Slot *dataTableGetRecord02(u16 key);
ItemRecord *dataTable02GetEntryByIndex(u32 id);
Table00Record *dataTable00FindById(u32 id);
u16 *devilGetRecord(u32 id);
s32 FUN_0029e9cc(u32 id);
void FUN_0022e17c(ListEntry *out, u32 id, s32 arg);
void recordListAppendUniqueKey(void *list, ListEntry *entry);
void motionPlayForMode(EntryListWork *work, s32 arg);
void FUN_00233730(void *header, s32 a, s32 b, s32 c, s32 d);

/* Scans every (group, subgroup) entry, and for each of its keys every item and unlockable id that
 * is allowed, adding it to the work's list; then finalises the list. */
void FUN_003a9bb4(EntryListWork *work)
{
    u32 *tableSlot = &work->table;
    s16 *list = &work->first;
    for (s32 group = 1; group < 16; group++) {
        for (s32 sub = 0; sub < 16; sub++) {
            OccurrenceEntry *entry = FUN_003bc0ac(*tableSlot, group, sub);

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
                for (s32 i = 0; i < 15; i++) {
                    if (slots[i].id == 0) {
                        continue;
                    }
                    ItemRecord *item = dataTable02GetEntryByIndex(slots[i].id);

                    if (item == NULL) {
                        continue;
                    }
                    for (s32 j = 0; j < 6; j++) {
                        u32 id = item->ids[j];

                        if (id == 0 || dataTable00FindById(id) == NULL) {
                            continue;
                        }
                        u16 *named = devilGetRecord(id);
                        Table00Record *record = dataTable00FindById(id);

                        if (named != NULL && record != NULL
                            && (g_gameState.showAll != 0 || ((record->flags & 1) != 0 && FUN_0029e9cc(*named) != 0))) {
                            ListEntry listEntry;
                            u32 value = 0;

                            FUN_0022e17c(&listEntry, *named, 0);
                            Table00Record *found = dataTable00FindById(*named);
                            if (found != NULL) {
                                value = found->value;
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
    FUN_00233730(work->header, 10, work->first, 0, 1);
    asdDebugHookPtrInt(work->header, 1);
    work->ready = 1;
    work->busy = 0;
}

}
