#include "common.h"

extern "C" {

typedef struct Resources {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ int effect;
    /* 0x14 */ u8 unk14[0xC];
    /* 0x20 */ int sound;
} Resources;

extern Resources g_effectEditor;

int objectRegistryInsert(int handle, int arg);
int asdEffectQueueRelease(int handle, int arg);

/* Frees the global effect and sound handles (clearing them), then frees `handle`. */
void effEditorReleaseEffectAndSound(int handle)
{
    if (g_effectEditor.effect != 0) {
        asdEffectQueueRelease(g_effectEditor.effect, 3);
        g_effectEditor.effect = 0;
    }
    if (g_effectEditor.sound != 0) {
        objectRegistryInsert(g_effectEditor.sound, 3);
        g_effectEditor.sound = 0;
    }
    objectRegistryInsert(handle, 3);
}

} /* extern "C" */
