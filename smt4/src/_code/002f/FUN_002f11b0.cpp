#include "common.h"

extern "C" {

int scrSetResult(int result);

typedef struct Scene {
    /* 0x0000 */ u8 unk0000[0x3040];
    /* 0x3040 */ u8 unk3040;
} Scene;

u32 FUN_002f11b0(Scene **owner)
{
    if ((*owner)->unk3040 != '\r') {
        scrSetResult(0);
        return 0;
    }
    scrSetResult(1);
    return 1;
}

} /* extern "C" */
