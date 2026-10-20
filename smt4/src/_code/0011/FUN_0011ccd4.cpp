#include "common.h"

extern "C" {

typedef struct Obj18 {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 unk18;
} Obj18;

void FUN_0011ccd4(Obj18 *obj)
{
    obj->unk18 = 0xffffffff;
}

} /* extern "C" */
