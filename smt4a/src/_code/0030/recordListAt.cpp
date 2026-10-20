#include "common.h"

extern "C" {

typedef struct Record24 {
    /* 0x00 */ u8 unk00[0x18];
} Record24;

typedef struct RecordList {
    /* 0x0 */ Record24 *items;
} RecordList;

extern u32 FUN_0030c8c0(RecordList *list);
extern void FUN_002e32a4(s32 kind, const char *a, const char *b, u32 index, u32 count);

/* Returns record `index` of the list; an index past the count is reported through FUN_002e32a4 first. */
Record24 *recordListAt(RecordList *list, u32 index)
{
    if (FUN_0030c8c0(list) <= index) {
        FUN_002e32a4(9, "", "", index, FUN_0030c8c0(list));
    }
    return &list->items[index];
}

}
