#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 value;
    /* 0x24 */ u8 unk24[0x3C];
    /* 0x60 */ u8 unk60;
    /* 0x61 */ u8 unk61;
    /* 0x62 */ u8 disabled;
} Obj;

u32 flaggedEntryGetValueA(Obj *obj)
{
    u32 value;

    if (obj->disabled == 0) {
        value = obj->value;
    } else {
        value = 0;
    }
    return value;
}

} /* extern "C" */
