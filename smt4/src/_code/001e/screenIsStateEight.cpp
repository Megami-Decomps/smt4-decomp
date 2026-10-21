#include "common.h"

extern "C" {

struct StateWork {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 state;
};
extern StateWork *g_screenStateWork;

/* Test whether the active work has reached state eight. */
u8 screenIsStateEight(void)
{
    return g_screenStateWork->state == 8;
}

}
