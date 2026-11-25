#include "code/Code0026_Smt4.h"
#include "status/StatusTabTransition.h"

extern "C" {

/* Clears the old status tab and its navigation state. */
void FUN_0026d670(void)
{
    statusResetTabTransition();
}

} /* extern "C" */
