#include "common.h"
#include "code/Code0026_Smt4.h"

extern "C" {

/* Record of data table 41 (section 0): the two keys a list matches entries by. */
typedef struct Table41Entry {
    /* 0x00 */ s8 keyA;
    /* 0x01 */ s8 keyB;
} Table41Entry;

typedef struct EntryList {
    /* 0x00 */ u32 flags;
    /* 0x04 */ s32 keyA;
    /* 0x08 */ s32 keyB;
    /* 0x0C */ u8 unk0c[0xa0 - 0xc];
    /* 0xA0 */ u16 count;
    /* 0xA2 */ s16 indices[1];
} EntryList;

s32 dataTableGetRecordFortyOne(void);
Table41Entry *dataTable29Sub0GetEntryWithAoc(s32 index);
void FUN_00396b08(EntryList *list, s32 step);
void FUN_003966b8(EntryList *list);

/* Collects the indices of the table-41 entries matching the list's keys, then advances the list four steps. */
void entryListCollectMatches(EntryList *list)
{
    s32 count;
    s32 i;

    if (list->flags & 1) {
        return;
    }
    list->count = 0;
    count = dataTableGetRecordFortyOne();
    for (i = 0; i < count; i++) {
        Table41Entry *entry = dataTable29Sub0GetEntryWithAoc(i);
        if (entry->keyA != -1 && entry->keyA == list->keyA && entry->keyB == list->keyB) {
            list->indices[list->count] = i;
            list->count++;
        }
    }
    for (i = 0; i < 4; i++) {
        FUN_00396b08(list, 1);
    }
    FUN_003966b8(list);
}

} /* extern "C" */
