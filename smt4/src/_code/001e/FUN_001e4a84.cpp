/* Calls FUN_003dd1a4 with the global's field at +0x18 and the jobGetWork value, if that field is set; returns its result or 0. */
#include "common.h"

extern "C" {

typedef struct Global {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ void *target;
} Global;

extern Global g_btlEffect;

extern u32 jobGetWork(void);
extern s32 FUN_003dd1a4(void *target, u32 value);

s32 FUN_001e4a84(void)
{
    u32 value = jobGetWork();

    if (g_btlEffect.target != NULL) {
        return FUN_003dd1a4(g_btlEffect.target, value);
    }
    return 0;
}

}
