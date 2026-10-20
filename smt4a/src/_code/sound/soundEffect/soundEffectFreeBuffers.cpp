/* Frees the two sound effect buffers, if allocated. */
#include "common.h"

extern "C" {

int asdMemFree(void *ptr);               /* heap free */

extern void *g_soundEffectBuffers[2];

void soundEffectFreeBuffers(void)
{
    if (g_soundEffectBuffers[0] != NULL) {
        asdMemFree(g_soundEffectBuffers[0]);
        g_soundEffectBuffers[0] = NULL;
    }
    if (g_soundEffectBuffers[1] != NULL) {
        asdMemFree(g_soundEffectBuffers[1]);
        g_soundEffectBuffers[1] = NULL;
    }
}

} /* extern "C" */
