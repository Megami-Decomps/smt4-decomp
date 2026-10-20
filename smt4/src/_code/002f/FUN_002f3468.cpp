#include "common.h"

extern "C" {

int FUN_002570a8(u32 value);
int FUN_00257108(void);
int FUN_0025715c(void);
int asdMemFree(void *ptr);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x13C];
    /* 0x13C */ u32 unk13C;
    /* 0x140 */ int unk140;
    /* 0x144 */ int unk144;
} Obj;

void FUN_002f3468(Obj *obj)
{
    if (obj->unk140 != 0) {
        FUN_00257108();
    }
    if (obj->unk144 != 0) {
        FUN_0025715c();
    }
    FUN_002570a8(obj->unk13C);
    asdMemFree(obj);
}

} /* extern "C" */
