#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x85];
    /* 0x85 */ u8 unk85;
} Obj;

void FUN_0014bfe0(Obj *obj)
{
    obj->unk85 = 1;
}

} /* extern "C" */
