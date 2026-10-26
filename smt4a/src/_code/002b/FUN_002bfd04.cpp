#include "common.h"

extern "C" {

typedef struct CampCecWork {
    /* 0x000 */ u8 unk000[0x140];
    /* 0x140 */ s32 state;
} CampCecWork;

extern struct {
    u8 unk0[4];
    CampCecWork *work;
} g_campCec;

/* True while the camp CEC work exists and is in state 1. */
u32 FUN_002bfd04(void)
{
    CampCecWork *work = g_campCec.work;
    u32 result = 0;

    if (work == NULL) {
        return 0;
    }
    if (work->state == 1) {
        result = 1;
    }
    return result;
}

} /* extern "C" */
