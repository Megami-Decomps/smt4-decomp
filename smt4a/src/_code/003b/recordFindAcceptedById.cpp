#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 id;
} Record;

extern int FUN_00187168(Record *record);
extern Record *FUN_003e4d68(u16 index);

/* Finds the record (of the 12) with id `id` that FUN_00187168 accepts; NULL when there is none. */
Record *recordFindAcceptedById(u32 id)
{
    s32 i;

    for (i = 0; i < 12; i++) {
        Record *record = FUN_003e4d68((u16)i);

        if (FUN_00187168(record) != 0 && record->id == id) {
            return record;
        }
    }
    return NULL;
}

}
