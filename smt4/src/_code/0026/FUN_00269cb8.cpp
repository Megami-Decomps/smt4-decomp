#include "common.h"

extern "C" {

typedef struct Scene {
    /* 0x000 */ u8 unk000[0xD34];
    /* 0xD34 */ u32 unkD34;
} Scene;

extern Scene *DAT_0043daa8;

void FUN_00269cb8(u32 value)
{
    if (DAT_0043daa8 != NULL) {
        DAT_0043daa8->unkD34 = value;
    }
}

} /* extern "C" */
