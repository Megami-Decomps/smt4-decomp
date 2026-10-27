#include "common.h"

extern "C" {

void svcExitProcess(void);

/* Runs svcExitProcess (placed right after, so the call is a linker NOP). */
void nn_os_ExitProcess(void)
{
    svcExitProcess();
}

} /* extern "C" */
