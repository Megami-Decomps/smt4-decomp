#include "common.h"

extern "C" {

void asdCecResetMessageBox(void);

/* Forwards to asdCecResetMessageBox, the function that follows it. */
void asdCecResetMessageBoxImpl(void)
{
    asdCecResetMessageBox();
}

} /* extern "C" */
