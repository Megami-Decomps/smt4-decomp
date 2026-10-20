#include "common.h"

extern "C" {

int FUN_002c0894(u32 item);
int asdMemFree(u32 ptr);

typedef struct Obj {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 count;
    /* 0x08 */ u8 unk08[0xC];
    /* 0x14 */ u32 *items;
    /* 0x18 */ u8 unk18[4];
    /* 0x1C */ s32 refCount;
    /* 0x20 */ u8 unk20[4];
    /* 0x24 */ u32 buffer;
} Obj;

/* Drops a reference; the last one releases the items and the buffer. */
void FUN_00257108(Obj *obj)
{
    s32 refs = obj->refCount - 1;
    u32 i;

    obj->refCount = refs;
    if (refs == 0) {
        for (i = 0; i < obj->count; i++) {
            FUN_002c0894(obj->items[i]);
        }
        asdMemFree(obj->buffer);
    }
}

} /* extern "C" */
