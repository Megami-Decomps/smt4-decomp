/* NON_MATCHING: retail loads the flag address (ldr r7) before `sub sp, #260`; built emits it after the sub */
#include "common.h"
#include "shard/W6_W6Match2_TextureHolder.h"

extern "C" {

s32 textFormatBuffer(char *output, const char *format, ...);
u32 asdLoadFileSync(const char *path, u32 a, u32 b, u32 c);
void asdMemFree(void *block);

extern u8 g_effectTexturesLoaded; /* 0x4640e8 */
extern void *g_effectTextures[22]; /* 0x4d96f0 */

/* Loads the 22 numbered effect textures once. */
void FUN_002fc1a8(void)
{
    char path[256];
    s32 i;

    if (g_effectTexturesLoaded == 0) {
        i = 0;
        do {
            textFormatBuffer(path, "effect/tex/be_%04d.stex", i + 1);
            void *file = (void *)asdLoadFileSync(path, 0, 1, 0x80);
            g_effectTextures[i] = asdEffectTextureCreate(file);
            asdMemFree(file);
            i++;
        } while (i < 22);
        g_effectTexturesLoaded = 1;
    }
}

} /* extern "C" */
