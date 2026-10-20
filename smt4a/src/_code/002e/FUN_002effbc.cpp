#include "common.h"

extern "C" {

typedef struct Scene {
    /* 0x000 */ u8 unk000[0x518];
    /* 0x518 */ s32 state;
} Scene;
extern Scene *DAT_00588fe8;

/* Returns 0 when the scene at 0x588FE8 is in state 2, otherwise 1. */
u8 FUN_002effbc(void)
{
    if (DAT_00588fe8->state == 2) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
