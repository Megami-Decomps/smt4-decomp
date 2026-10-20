#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 unk20;
} Obj;

extern Obj *FUN_002c2950(void);

void FUN_0027d8b4(u16 value)
{
    Obj *obj = FUN_002c2950();

    obj->unk20 = value;
}

} /* extern "C" */
