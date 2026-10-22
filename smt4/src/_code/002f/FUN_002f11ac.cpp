#include "common.h"

extern "C" {

int scrSetResult(int result);

typedef struct Scene {
    /* 0x0000 */ u8 unk0000[0x3040];
    /* 0x3040 */ u8 unk3040;
} Scene;

extern Scene *DAT_00435d18;
u32 FUN_002f11ac(void)
{
    if ((DAT_00435d18)->unk3040 != '\r') {
        scrSetResult(0);
        return 0;
    }
    scrSetResult(1);
    return 1;
}

} /* extern "C" */
