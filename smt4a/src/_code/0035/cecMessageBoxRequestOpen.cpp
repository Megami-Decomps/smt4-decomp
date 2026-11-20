#include "common.h"

extern "C" {

void asdCecMaintainMessageBoxOnce(void);

/* Runs the CEC message-box request below. */
void cecMessageBoxRequestOpen(void)
{
    asdCecMaintainMessageBoxOnce();
}

} /* extern "C" */
