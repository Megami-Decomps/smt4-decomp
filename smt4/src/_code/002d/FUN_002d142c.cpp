#include "common.h"

extern "C" {

typedef struct Resources {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ int effect;
    /* 0x14 */ u8 unk14[0xC];
    /* 0x20 */ int sound;
} Resources;

extern Resources g_effectEditor;

int FUN_002629a8(int handle, int arg);
int registrationEntryInsert(int handle, int arg);

/* Frees the global effect and sound handles (clearing them), then frees `handle`. */
void FUN_002d142c(int handle)
{
    if (g_effectEditor.effect != 0) {
        registrationEntryInsert(g_effectEditor.effect, 3);
        g_effectEditor.effect = 0;
    }
    if (g_effectEditor.sound != 0) {
        FUN_002629a8(g_effectEditor.sound, 3);
        g_effectEditor.sound = 0;
    }
    FUN_002629a8(handle, 3);
}

} /* extern "C" */
