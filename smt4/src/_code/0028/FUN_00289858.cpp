#include "common.h"

extern "C" {

typedef struct Header {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ s32 count;
} Header;

typedef struct Obj {
    /* 0x00 */ u8 unk00[0xB0];
    /* 0xB0 */ Header *header;
    /* 0xB4 */ int entries;
} Obj;

/* Address of the 0x20-byte entry `index`, or 0 when out of range. */
int FUN_00289858(Obj *obj, int index)
{
    int entry;

    if ((index >= 0) && (obj->header->count > index)) {
        entry = obj->entries + index * 0x20;
    } else {
        entry = 0;
    }
    return entry;
}

} /* extern "C" */
