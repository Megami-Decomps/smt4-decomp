#include "common.h"

extern "C" {

void nngxLockEnterImpl(void);

/* Forwards to nngxLockEnterImpl, the function that follows it. */
void nngxLockEnter(void)
{
    nngxLockEnterImpl();
}

} /* extern "C" */
