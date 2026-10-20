#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ s32 state;
} Obj;

extern Obj *DAT_0043e128;

u8 FUN_002b6b04(void)
{
    return DAT_0043e128->state != 0;
}

} /* extern "C" */
