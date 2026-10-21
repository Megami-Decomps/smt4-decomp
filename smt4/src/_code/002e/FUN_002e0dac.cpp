#include "common.h"

extern "C" {

void asdCecResetMessageBox(void);

/* Forwards to asdCecResetMessageBox, the function that follows it. */
void FUN_002e0dac(void)
{
    asdCecResetMessageBox();
}

} /* extern "C" */
