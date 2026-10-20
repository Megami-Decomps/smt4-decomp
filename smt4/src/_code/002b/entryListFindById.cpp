#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[0x20];
} Entry;

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x37C];
    /* 0x37C */ int count;
    /* 0x380 */ Entry *entries;
} Obj;

/* Address of the 0x22-byte entry whose id is `id`, or 0. */
int entryListFindById(Obj *obj, u32 id)
{
    int i = 0;

    if (i < obj->count) {
        do {
            if (obj->entries[i].id == id) {
                return (int)&obj->entries[i];
            }
            i = i + 1;
        } while (i < obj->count);
    }
    return 0;
}

} /* extern "C" */
