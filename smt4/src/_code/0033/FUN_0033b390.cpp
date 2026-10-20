#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x4A24];
    /* 0x4A24 */ int states[2];
} Obj;

/* 1 while the slot's state is 4-7. */
u32 FUN_0033b390(Obj *obj, int slot)
{
    int state = obj->states[slot];
    u32 result;

    if ((state == 4 || state == 5) || (state == 6 || state == 7)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
