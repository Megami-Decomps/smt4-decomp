#include "common.h"

extern "C" {

int FUN_0025715c(void);
int FUN_002c0894(void);
int asdMemFree(void *ptr);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u8 unk3C[4];
    /* 0x40 */ u32 unk40;
} Obj;

void FUN_00247240(Obj *obj)
{
    if (obj->unk38 != 0) {
        FUN_002c0894();
    }
    if (obj->unk40 != 0) {
        FUN_0025715c();
    }
    asdMemFree(obj);
}

} /* extern "C" */
