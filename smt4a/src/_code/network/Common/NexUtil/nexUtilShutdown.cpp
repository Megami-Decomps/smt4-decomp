/* Shuts down the NEX (network) utility: finalizes its object if it is not already, then frees the buffer. */
#include "common.h"

extern "C" {

int asdMemFree(void *ptr);               /* heap free */
int FUN_004d9430(void *nex);
int FUN_004d9560(void *nex);
int FUN_004d9b9c(void *nex);
int FUN_0050d3a0(void *nex);

extern u8 g_nexUtil[];
extern void *DAT_0058811c;

void nexUtilShutdown(void)
{
    if (FUN_0050d3a0(g_nexUtil) == 0) {
        FUN_004d9b9c(g_nexUtil);
        FUN_004d9430(g_nexUtil);
    }
    FUN_004d9560(g_nexUtil);
    if (DAT_0058811c != NULL) {
        asdMemFree(DAT_0058811c);
        DAT_0058811c = NULL;
    }
}

} /* extern "C" */
