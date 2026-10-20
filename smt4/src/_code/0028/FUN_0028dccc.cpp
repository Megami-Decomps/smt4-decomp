#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x496];
    /* 0x496 */ struct { u16 value; u16 pad; } entries[6];
} Obj;

extern struct {
    u8 unk0[4];
    Obj *obj;
} DAT_0043da28;

/* Value of entry `index` (0-5), or 0 when out of range. */
u16 FUN_0028dccc(u32 index)
{
    u16 value;

    if (index >= 6) {
        value = 0;
    } else {
        Obj *obj = DAT_0043da28.obj;

        value = obj->entries[index].value;
    }
    return value;
}

} /* extern "C" */
