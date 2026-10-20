#include "common.h"

extern "C" {

int FUN_00290d74(...);
int FUN_00296f4c(u32 a, int b);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x5A0];
    /* 0x5A0 */ u32 unk5A0;
    /* 0x5A4 */ u8 unk5A4[4];
    /* 0x5A8 */ u32 slotA;
    /* 0x5AC */ u32 unk5AC;
    /* 0x5B0 */ u8 unk5B0[4];
    /* 0x5B4 */ u32 slotB;
    /* 0x5B8 */ u8 unk5B8[0xC];
    /* 0x5C4 */ u32 *current;
} Obj;

int FUN_00235554(Obj *obj, u32 arg)
{
    int result;
    u32 *slot;

    result = FUN_00290d74(obj->unk5AC);
    if (result != -1) {
        slot = &obj->slotB;
    } else {
        result = FUN_00290d74(obj->unk5A0, arg);
        slot = &obj->slotA;
    }
    obj->current = slot;
    FUN_00296f4c(*slot, result);
    return result;
}

} /* extern "C" */
