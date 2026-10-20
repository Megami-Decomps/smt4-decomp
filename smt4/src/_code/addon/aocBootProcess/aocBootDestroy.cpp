#include "addon/aocBootProcess.h"

extern "C" {

void asdMemFree(void *block);

extern AocBoot *g_aocBoot;

/* The boot job's destroy callback: frees the boot block. */
void aocBootDestroy(void)
{
    if (g_aocBoot != NULL) {
        asdMemFree(g_aocBoot);
        g_aocBoot = NULL;
    }
}

} /* extern "C" */
