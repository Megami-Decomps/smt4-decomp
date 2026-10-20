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

u16 FUN_002d6624(u32 index)
{
    Obj *obj = DAT_0043da28.obj;

    if ((obj != NULL) && (index < 6)) {
        return obj->entries[index].value;
    }
    return 0;
}

} /* extern "C" */
