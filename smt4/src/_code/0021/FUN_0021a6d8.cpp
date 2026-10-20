#include "common.h"

extern "C" {

int FUN_002570a8(u32 value);
int FUN_00257108(void);
int FUN_0025715c(void);
int asdMemFree(void *ptr);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0xC8];
    /* 0xC8 */ u32 unkC8;
    /* 0xCC */ u32 unkCC;
    /* 0xD0 */ u32 unkD0;
} Obj;

void FUN_0021a6d8(Obj *obj)
{
    if (obj->unkCC != 0) {
        FUN_00257108();
    }
    if (obj->unkD0 != 0) {
        FUN_0025715c();
    }
    FUN_002570a8(obj->unkC8);
    asdMemFree(obj);
}

} /* extern "C" */
