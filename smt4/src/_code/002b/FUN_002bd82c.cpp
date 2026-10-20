#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 unk38;
} Obj;

void FUN_002bd82c(Obj *obj, u32 value)
{
    obj->unk38 = value & 0xffffff00;
}

} /* extern "C" */
