#include "common.h"

extern "C" {

extern u32 FUN_0029aef0(u32 value);

typedef struct Obj {
    /* 0x0000 */ u32 unk0000;
    /* 0x0004 */ u8 unk0004[0x9460];
    /* 0x9464 */ u32 unk9464;
} Obj;

void FUN_00223da0(Obj **owner)
{
    Obj *obj = *owner;
    u32 value;

    if (obj != NULL) {
        value = FUN_0029aef0(obj->unk0000);
        obj->unk9464 = value;
    }
}

} /* extern "C" */
