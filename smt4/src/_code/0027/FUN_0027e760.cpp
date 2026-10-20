#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ u32 unk80;
    /* 0x84 */ u8 unk84[0x18];
    /* 0x9C */ u16 unk9C;
} Obj;

void FUN_0027e760(Obj *obj)
{
    obj->unk80 = 1;
    obj->unk9C = 0;
}

} /* extern "C" */
