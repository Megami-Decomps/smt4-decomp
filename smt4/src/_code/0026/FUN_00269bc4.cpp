#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x178];
    /* 0x178 */ u32 unk178;
} Obj;

void FUN_00269bc4(Obj *obj)
{
    obj->unk178 = 0;
}

} /* extern "C" */
