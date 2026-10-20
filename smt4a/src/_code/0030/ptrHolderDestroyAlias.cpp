#include "common.h"

extern "C" {

void ptrHolderDestroy(void);

/* Forwards to ptrHolderDestroy. */
void ptrHolderDestroyAlias(void)
{
    ptrHolderDestroy();
}

} /* extern "C" */
