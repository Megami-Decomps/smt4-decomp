/* NON_MATCHING: one extra `bne` to the return after `moveq r0, #1` (armcc's branch layout for the nested if) */
/* Returns 1 if the global object exists and its state (+0x400) is 20. */
#include "common.h"

extern "C" {

struct Obj00223c78 {
    /* 0x000 */ u8 unk000[0x400];
    /* 0x400 */ s32 state;
};

extern Obj00223c78 *g_statusDown;

s32 FUN_00223c78(void)
{
    Obj00223c78 *obj = g_statusDown;
    s32 result = 0;

    if (obj != NULL) {
        if (obj->state == 20) {
            result = 1;
        }
    }
    return result;
}

}
