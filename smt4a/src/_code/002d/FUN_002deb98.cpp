#include "common.h"
extern "C" {
extern void *g_aocBoot;
void asdMemFree(void *memory);
/* Releases the module's allocation and clears its pointer. */
void FUN_002deb98(void) {
    if (g_aocBoot != NULL) {
        asdMemFree(g_aocBoot);
        g_aocBoot = NULL;
    }
}
}
