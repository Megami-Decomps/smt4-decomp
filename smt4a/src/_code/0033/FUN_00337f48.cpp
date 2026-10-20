#include "common.h"

extern "C" {

typedef struct Resources {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ int effect;
    /* 0x14 */ u8 unk14[0xC];
    /* 0x20 */ int sound;
} Resources;

extern Resources DAT_0059dbe0;

int FUN_00399768(int handle, int arg);
int FUN_003ba614(int handle, int arg);

/* Frees the global effect and sound handles (clearing them), then frees `handle`. */
void FUN_00337f48(int handle)
{
    if (DAT_0059dbe0.effect != 0) {
        FUN_003ba614(DAT_0059dbe0.effect, 3);
        DAT_0059dbe0.effect = 0;
    }
    if (DAT_0059dbe0.sound != 0) {
        FUN_00399768(DAT_0059dbe0.sound, 3);
        DAT_0059dbe0.sound = 0;
    }
    FUN_00399768(handle, 3);
}

} /* extern "C" */
