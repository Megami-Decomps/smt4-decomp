#include "status/StatusTabTransition.h"

extern "C" {

/* Clears the old status tab and its navigation state. */
void FUN_00285800(void)
{
    statusResetTabTransition();
}

} /* extern "C" */
