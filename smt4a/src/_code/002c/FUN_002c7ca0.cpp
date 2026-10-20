#include "common.h"

extern "C" {

typedef struct Scene {
    /* 0x000 */ u8 unk000[0x514];
    /* 0x514 */ u8 flag;
    /* 0x515 */ u8 unk515[3];
    /* 0x518 */ s32 state;
} Scene;
extern Scene *g_statusDown;

/* Returns the flag byte at 0x514 of the scene at 0x588FE8. */
u8 FUN_002c7ca0(void)
{
    return g_statusDown->flag;
}

} /* extern "C" */
