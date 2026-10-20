#include "common.h"

extern "C" {

extern u32 FUN_002907a8(void);

typedef struct Obj {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 timestamp;
    /* 0x8 */ u8 unk8;
    /* 0x9 */ u8 unk9;
} Obj;

void FUN_00381ac0(Obj *obj)
{
    obj->unk9 = 0;
    obj->unk8 = 0;
    obj->timestamp = FUN_002907a8();
}

} /* extern "C" */
