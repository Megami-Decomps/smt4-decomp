#include "common.h"

extern "C" {

void nngxLockLeaveImpl(void);

/* Forwards to nngxLockLeaveImpl, the function that follows it. */
void nngxLockLeave(void)
{
    nngxLockLeaveImpl();
}

} /* extern "C" */
