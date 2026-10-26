#include "common.h"

extern "C" {

struct ObjFUN_002e2054 {
    /* 0x000 */ u8 unk000[0x140];
    /* 0x140 */ s32 state;
};

struct GlobalFUN_002e2054 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ ObjFUN_002e2054 *current;
};

extern GlobalFUN_002e2054 g_campCec;

/* True while the current camp CEC object exists and is in state 2. */
s32 FUN_002e2054(void)
{
    ObjFUN_002e2054 *obj = g_campCec.current;
    s32 result = 0;

    if (obj == NULL) {
        return 0;
    }
    if (obj->state == 2) {
        result = 1;
    }
    return result;
}
}
