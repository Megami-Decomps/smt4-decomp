#include "common.h"
#include "util/CalleeContracts.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ s32 state;
} Obj;

extern Obj *g_infoWin;

/* 1 for states 1-4. */
u32 dialogIsActive(void)
{
    int state = g_infoWin->state;
    u32 result;

    if ((state == 3 || state == 4) || (state == 1 || state == 2)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
