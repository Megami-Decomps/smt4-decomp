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

/* True while the current camp CEC object exists and is in state 13. */
s32 FUN_0035a094(void)
{
    ObjFUN_0035a094 *obj = g_campCec.current;
    s32 result = 0;

    if (obj == NULL) {
        return 0;
    }
    if (obj->state == 13) {
        result = 1;
    }
    return result;
}
}
