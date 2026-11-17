#include "battle/BtlMainAccess.h"
#include "battle/BtlGlobals.h"

extern "C" {


/* The battle's state block. */
BtlMainStateA *btlGetMainState(void)
{
    return g_btlMain.state;
}

} /* extern "C" */
