#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0xA0];
    /* 0xA0 */ u16 values[1];
} Obj;

void FUN_001576b4(Obj *obj, s32 index, u16 value)
{
    obj->values[index] = value;
}

} /* extern "C" */
