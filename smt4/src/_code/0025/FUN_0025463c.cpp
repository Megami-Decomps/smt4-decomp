#include "common.h"

extern "C" {

typedef struct Scene {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u8 sub[1];
} Scene;

extern Scene *g_campCec;

u8 *FUN_0025463c(void)
{
    return g_campCec->sub;
}

} /* extern "C" */
