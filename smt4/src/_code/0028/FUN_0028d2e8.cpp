#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x8C];
    /* 0x8C */ u16 values[0x14];
    /* 0xB4 */ s16 count;
} Obj;

/* Entry `index` of the halfword table at +0x8C, or 0 when out of range. */
u16 FUN_0028d2e8(Obj *obj, int index)
{
    u16 value;

    if ((index >= 0) && (obj->count - 1 >= index)) {
        value = obj->values[index];
    } else {
        value = 0;
    }
    return value;
}

} /* extern "C" */
