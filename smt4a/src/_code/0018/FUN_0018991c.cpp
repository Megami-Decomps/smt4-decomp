#include "common.h"

extern "C" {

void FUN_00189938(void);
extern s8 DAT_00589284;

/* Runs FUN_00189938 when the flag at 0x589284 is set. */
void FUN_0018991c(void)
{
    if (DAT_00589284 != 0) {
        FUN_00189938();
        return;
    }
}

} /* extern "C" */
