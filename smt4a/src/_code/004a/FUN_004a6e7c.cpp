/* NON_MATCHING: global load and zero-store scheduling differs from retail. */
#include "common.h"
extern "C" {
extern void *g_animatedPageSelection;
void asdMemFree(void *block);
/* Frees and clears the active object. */
int FUN_004a6e7c() {
    if (g_animatedPageSelection != NULL) {
        asdMemFree(g_animatedPageSelection);
        g_animatedPageSelection = NULL;
    }
    return 0;
}
}
