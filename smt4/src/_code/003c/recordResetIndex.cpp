#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x11];
    /* 0x11 */ u8 unk11;
    /* 0x12 */ u8 unk12;
    /* 0x13 */ u8 unk13;
    /* 0x14 */ u16 unk14;
} Obj;

void recordResetIndex(Obj *obj)
{
    obj->unk11 = 0;
    obj->unk14 = 0xffff;
    obj->unk12 = 0;
}

} /* extern "C" */
