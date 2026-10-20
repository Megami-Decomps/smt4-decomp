#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ s32 state;
} Obj;

extern Obj *g_uiQuest;

/* 0 while the state is 0x11-0x13, otherwise 1. */
u32 FUN_00203610(void)
{
    s32 state = g_uiQuest->state;
    u32 result;

    if ((state == 0x11 || state == 0x12) || (state == 0x13)) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
