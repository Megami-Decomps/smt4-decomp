#include "common.h"

extern "C" {

typedef struct Record24 {
    /* 0x00 */ u8 unk00[0x18];
} Record24;

typedef struct RecordList {
    /* 0x0 */ Record24 *items;
} RecordList;

extern u32 elemVectorCount(RecordList *list);
extern void FUN_002e32a4(int kind, ...);

/* Returns record `index` of the list; an index past the count is reported through FUN_002e32a4 first. */
Record24 *recordListAt(RecordList *list, u32 index)
{
    if (elemVectorCount(list) <= index) {
        FUN_002e32a4(9, "", "", index, elemVectorCount(list));
    }
    return &list->items[index];
}

}
