#include "common.h"

extern "C" {

typedef struct Scene {
    /* 0x000 */ u8 unk000[0xD34];
    /* 0xD34 */ u32 unkD34;
} Scene;

extern Scene *g_campCec;

void FUN_00269cb8(u32 value)
{
    if (g_campCec != NULL) {
        g_campCec->unkD34 = value;
    }
}

} /* extern "C" */
