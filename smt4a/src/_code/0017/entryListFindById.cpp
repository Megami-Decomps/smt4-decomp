#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[0x30];
} Record;                       /* 0x32 */

typedef struct Holder {
    /* 0x000 */ u8 unk000[0x37C];
    /* 0x37C */ s32 count;
    /* 0x380 */ Record *records;
} Holder;

/* Returns the record with the given id, or NULL. */
Record *entryListFindById(Holder *object, u32 id)
{
    s32 i;

    i = 0;
    if (i < object->count) {
        do {
            if (object->records[i].id == id) {
                return &object->records[i];
            }
            i = i + 1;
        } while (i < object->count);
    }
    return NULL;
}

} /* extern "C" */
