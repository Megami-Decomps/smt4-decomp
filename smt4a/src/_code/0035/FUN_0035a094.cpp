/* NON_MATCHING: one extra `bne` to the return after `moveq r0, #1` (armcc's branch layout for the nested if) */
/* Returns 1 if the second global object exists and its state (+0x140) is 13. */
#include "common.h"

extern "C" {

struct ObjFUN_0035a094 {
    /* 0x000 */ u8 unk000[0x140];
    /* 0x140 */ s32 state;
};

struct GlobalFUN_0035a094 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ ObjFUN_0035a094 *current;
};

extern GlobalFUN_0035a094 g_campCec;

s32 FUN_0035a094(void)
{
    ObjFUN_0035a094 *obj = g_campCec.current;
    s32 result = 0;

    if (obj != NULL) {
        if (obj->state == 13) {
            result = 1;
        }
    }
    return result;
}

}
