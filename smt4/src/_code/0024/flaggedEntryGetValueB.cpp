#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u32 value;
    /* 0x4C */ u8 unk4C[0x16];
    /* 0x62 */ u8 disabled;
} Obj;

u32 flaggedEntryGetValueB(Obj *obj)
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
