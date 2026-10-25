/* NON_MATCHING: retail ends the nested test with `moveq r0,#1` only; armcc adds a trailing `bne` to the return. */
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

/* True while the camp CEC work exists and is in state 12. */
u32 FUN_002a2814(void)
{
    if (g_campCec.work != NULL) {
        return g_campCec.work->state == 12;
    }
    return 0;
}

} /* extern "C" */
