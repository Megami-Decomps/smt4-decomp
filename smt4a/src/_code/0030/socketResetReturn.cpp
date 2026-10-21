#include "common.h"

extern "C" {

void socketReset(void);

/* Runs socketReset and returns `object`. */
void *socketResetReturn(void *object)
{
    socketReset();
    return object;
}

} /* extern "C" */
