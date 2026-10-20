#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ u8 unk12;
} Obj;

void FUN_002aea44(Obj *obj)
{
    obj->unk12 = 0;
}

} /* extern "C" */
