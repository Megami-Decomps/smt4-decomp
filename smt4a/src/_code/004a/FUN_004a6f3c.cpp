/* NON_MATCHING: global load and zero-store scheduling differs from retail. */
#include "common.h"
extern "C" {
extern void *DAT_0057f0a0;
void asdMemFree(void *block);
/* Frees and clears the active object. */
int FUN_004a6f3c() {
    if (DAT_0057f0a0 != NULL) {
        asdMemFree(DAT_0057f0a0);
        DAT_0057f0a0 = NULL;
    }
    return 0;
}
}
