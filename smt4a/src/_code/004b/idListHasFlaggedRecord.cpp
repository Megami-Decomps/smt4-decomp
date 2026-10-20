#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x33];
    /* 0x33 */ u8 flag;
} Record;

typedef struct IdList {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u16 ids[8];
} IdList;

extern Record *FUN_0034a290(u32 id);

/* True when any of the list's ids names a record whose flag is set. */
s32 idListHasFlaggedRecord(IdList *list)
{
    s32 i;

    for (i = 0; i < 8; i++) {
        if (list->ids[i] != 0) {
            Record *record = FUN_0034a290(list->ids[i]);

            if (record != NULL && record->flag != 0) {
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
