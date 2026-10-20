#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u8 unk60;
    /* 0x61 */ u8 unk61;
} Obj;

void FUN_002937d0(Obj *obj)
{
    obj->unk61 = 0;
    obj->unk60 = 0;
}

} /* extern "C" */
