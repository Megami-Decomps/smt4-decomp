#include "common.h"
#include "sys/RuntimeObjects.h"

extern "C" {

int sysBreakWithCallback(int arg);

void asdFatalError(void)
{
    sysBreakWithCallback(0);
}

} /* extern "C" */
