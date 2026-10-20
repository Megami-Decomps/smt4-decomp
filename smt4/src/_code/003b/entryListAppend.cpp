#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x52C];
    /* 0x52C */ int count;
    /* 0x530 */ int entries[1];
} Obj;

/* Appends a nonzero entry to the list. */
void entryListAppend(Obj *obj, int entry)
{
    if (entry != 0) {
        obj->entries[obj->count] = entry;
        obj->count = obj->count + 1;
    }
}

} /* extern "C" */
