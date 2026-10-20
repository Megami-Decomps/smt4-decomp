#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x389C];
    /* 0x389C */ u8 flags[8];
    /* 0x38A4 */ u32 values[5];
    /* 0x38B8 */ u32 targets[5];
} Obj;

void FUN_002dc424(Obj *obj, int index, u32 target)
{
    obj->flags[index] = 1;
    obj->values[index] = 0;
    obj->targets[index] = target;
}

} /* extern "C" */
