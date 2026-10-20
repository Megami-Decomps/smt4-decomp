#include "common.h"

extern "C" {

typedef struct Scene {
    /* 0x00 */ u8 unk00[0xA0];
    /* 0xA0 */ u8 sub[1];
} Scene;

extern Scene *g_campCec;

/* Address of the scene's sub block at +0xA0. */
u8 *FUN_0024aaa0(void)
{
    return g_campCec->sub;
}

} /* extern "C" */
