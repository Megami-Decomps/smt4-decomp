#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ int unk4;
    /* 0x8 */ u32 unk8;
} Obj;

void objSetBaseAndValue(Obj *obj, int base, u32 value)
{
    obj->unk4 = base + 100;
    obj->unk8 = value;
}

} /* extern "C" */
