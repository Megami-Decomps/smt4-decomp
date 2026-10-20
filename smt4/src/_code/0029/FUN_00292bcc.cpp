#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u8 unk48;
    /* 0x49 */ u8 unk49[3];
    /* 0x4C */ u32 unk4C;
    /* 0x50 */ u32 unk50;
} Obj;

void FUN_00292bcc(Obj *obj, u32 value)
{
    obj->unk48 = 1;
    obj->unk4C = value;
    obj->unk50 = 0;
}

} /* extern "C" */
