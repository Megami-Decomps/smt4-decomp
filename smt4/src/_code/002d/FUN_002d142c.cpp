#include "common.h"

extern "C" {

typedef struct Resources {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ int effect;
    /* 0x14 */ u8 unk14[0xC];
    /* 0x20 */ int sound;
} Resources;

extern Resources DAT_0044ea80;

int FUN_002629a8(int handle, int arg);
int FUN_002629f0(int handle, int arg);

/* Frees the global effect and sound handles (clearing them), then frees `handle`. */
void FUN_002d142c(int handle)
{
    if (DAT_0044ea80.effect != 0) {
        FUN_002629f0(DAT_0044ea80.effect, 3);
        DAT_0044ea80.effect = 0;
    }
    if (DAT_0044ea80.sound != 0) {
        FUN_002629a8(DAT_0044ea80.sound, 3);
        DAT_0044ea80.sound = 0;
    }
    FUN_002629a8(handle, 3);
}

} /* extern "C" */
