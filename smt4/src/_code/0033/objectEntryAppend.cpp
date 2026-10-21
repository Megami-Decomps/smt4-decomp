#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x0 */ u32 b;
    /* 0x4 */ u32 a;
} Entry;

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x1F0];
    /* 0x1F0 */ Entry entries[0x20];
    /* 0x2F0 */ u8 unk2F0[0x100];
    /* 0x3F0 */ int count;
} Obj;

/* Appends the (b, a) pair to the entry list. */
void objectEntryAppend(Obj *obj, u32 a, u32 b)
{
    obj->entries[obj->count].b = b;
    obj->entries[obj->count].a = a;
    obj->count = obj->count + 1;
}

} /* extern "C" */
