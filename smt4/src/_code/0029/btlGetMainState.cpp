#include "battle/BtlMainAccess.h"
#include "battle/BtlMainGlobals.h"

extern "C" {


/* The battle's state block. */
BtlMainState *btlGetMainState(void)
{
    return g_btlMainState.state;
}

} /* extern "C" */
