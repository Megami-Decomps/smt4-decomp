#include "common.h"

extern "C" {

int FUN_00221c10(void);

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x3028];
    /* 0x3028 */ u32 flags;
} Obj;

void FUN_003d9e88(Obj *obj)
{
    if ((obj->flags & 4) != 0) {
        FUN_00221c10();
        obj->flags = (obj->flags & 0xfffffffb) | 8;
    }
}

} /* extern "C" */
