#include "common.h"
#include "sys/RuntimeObjects.h"

extern "C" {

int FUN_002ad61c(int arg);

void asdFatalError(void)
{
    FUN_002ad61c(0);
}

} /* extern "C" */
