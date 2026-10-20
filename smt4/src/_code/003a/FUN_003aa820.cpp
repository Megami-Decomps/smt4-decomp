#include "common.h"

extern "C" {

int FUN_003a8cc8(void);
extern u8 DAT_00422400;
extern u32 *FUN_0022cb58(void);

typedef struct Obj {
    /* 0x000 */ const void *vtbl;
    /* 0x004 */ u8 unk004[0x5A0];
    /* 0x5A4 */ u8 unk5A4;
} Obj;

Obj *FUN_003aa820(void)
{
    Obj *obj = (Obj *)FUN_0022cb58();

    obj->vtbl = &DAT_00422400;
    FUN_003a8cc8();
    *(u8 *)((u32 *)obj + 0x169) = 0;
    return obj;
}

} /* extern "C" */
