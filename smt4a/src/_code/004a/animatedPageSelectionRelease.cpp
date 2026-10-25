#include "common.h"
extern "C" {
extern void *g_animatedPageSelection;
void asdMemFree(void *block);
/* Frees and clears the active object. */
void animatedPageSelectionRelease() {
    if (g_animatedPageSelection != NULL) {
        asdMemFree(g_animatedPageSelection);
        g_animatedPageSelection = NULL;
    }
}
}
