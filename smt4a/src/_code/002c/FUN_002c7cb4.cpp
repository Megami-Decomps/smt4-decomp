#include "common.h"

extern "C" {

typedef struct Scene {
    /* 0x000 */ u8 unk000[0x514];
    /* 0x514 */ u8 flag;
    /* 0x515 */ u8 unk515[3];
    /* 0x518 */ s32 state;
} Scene;
extern Scene *DAT_00588fe8;

/* Returns 0 when the scene state is 1, otherwise 1. */
u8 FUN_002c7cb4(void)
{
    if (DAT_00588fe8->state == 1) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
