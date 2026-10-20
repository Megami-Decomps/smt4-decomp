#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x4A24];
    /* 0x4A24 */ s32 states[2];
} Obj;

/* 0 while the slot's state is 4, 5 or 6, otherwise 1. */
u32 FUN_0024502c(Obj *obj, int slot)
{
    int state = obj->states[slot];
    u32 result;

    if ((state == 4 || state == 5) || (state == 6)) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
