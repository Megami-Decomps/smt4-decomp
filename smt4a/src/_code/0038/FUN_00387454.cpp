/* NON_MATCHING: retail loads the flag address (ldr r7) before `sub sp, #260`; built emits it after the sub */
#include "common.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"

extern "C" {

s32 textFormatBuffer(char *output, const char *format, ...);
void *asdEffectTextureCreate(const void *image);
void asdMemFree(void *block);

extern u8 g_effectTexturesLoaded; /* 0x5b3270 */
extern void *g_effectTextures[22]; /* 0x635770 */

/* Loads the 22 numbered effect textures once. */
void FUN_00387454(void)
{
    char path[260];
    s32 i;

    if (g_effectTexturesLoaded == 0) {
        i = 0;
        do {
            textFormatBuffer(path, "effect/tex/be_%04d.stex", i + 1);
            void *file = asdLoadFileSyncNoContext(path, NULL, 1, 0x80);
            g_effectTextures[i] = asdEffectTextureCreate(file);
            asdMemFree(file);
            i++;
        } while (i < 22);
        g_effectTexturesLoaded = 1;
    }
}

} /* extern "C" */
