#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ u32 value;
} Obj;

void FUN_00379cc4(Obj *obj)
{
    obj->value = 0;
}

} /* extern "C" */
