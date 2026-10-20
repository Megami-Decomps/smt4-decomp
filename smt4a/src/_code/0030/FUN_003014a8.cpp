#include "common.h"

extern "C" {

void socketReset(void);

/* Runs socketReset and returns `object`. */
void *FUN_003014a8(void *object)
{
    socketReset();
    return object;
}

} /* extern "C" */
