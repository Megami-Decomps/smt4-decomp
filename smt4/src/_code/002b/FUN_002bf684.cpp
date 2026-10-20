#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ int unk4;
} Obj;

u8 FUN_002bf684(Obj *obj)
{
    return obj->unk4 != 0;
}

} /* extern "C" */
