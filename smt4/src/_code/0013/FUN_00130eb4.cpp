#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ s32 unk38;
} Obj;

void FUN_00130eb4(Obj *obj, s32 base)
{
    obj->unk38 = base + 8;
}

} /* extern "C" */
