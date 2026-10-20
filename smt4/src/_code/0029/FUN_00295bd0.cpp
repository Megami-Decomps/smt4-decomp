#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ s32 state;
} Obj;

extern Obj *DAT_0043e128;

/* 1 for states 1-4. */
u32 FUN_00295bd0(void)
{
    int state = DAT_0043e128->state;
    u32 result;

    if ((state == 3 || state == 4) || (state == 1 || state == 2)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
