#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 value;
} Obj;

void FUN_003799f8(Obj *obj)
{
    obj->value = 0;
}

} /* extern "C" */
