#include "common.h"

extern "C" {

void asdCecResetMessageBox(void);

/* Forwards to asdCecResetMessageBox, the function that follows it. */
void FUN_00358f70(void)
{
    asdCecResetMessageBox();
}

} /* extern "C" */
