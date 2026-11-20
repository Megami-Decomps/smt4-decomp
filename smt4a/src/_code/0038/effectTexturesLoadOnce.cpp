#include "common.h"
#include <stdio.h>
#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "shard/W6_W6Match2_TextureHolder.h"

extern "C" {

void asdMemFree(void *block);

extern u8 g_effectTexturesLoaded; /* set once the effect textures are loaded */
extern void *g_sysWordTable[22]; /* the effect textures (read back through sysGetTableWord) */

/* Loads the 22 numbered effect textures once. */
void effectTexturesLoadOnce(void)
{
    char path[260];
    s32 i;

    if (g_effectTexturesLoaded == 0) {
        i = 0;
        do {
            sprintf(path, "effect/tex/be_%04d.stex", i + 1);
            void *file = asdLoadFileSyncNoContext(path, NULL, 1, 0x80);
            g_sysWordTable[i] = asdEffectTextureCreate(file);
            asdMemFree(file);
            i++;
        } while (i < 22);
        g_effectTexturesLoaded = 1;
    }
}

} /* extern "C" */
