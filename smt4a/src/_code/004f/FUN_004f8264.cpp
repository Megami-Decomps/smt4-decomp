#include "common.h"

extern "C" {

int btlGetMainState(void);
int FUN_003c5d8c(void);
int btlScriptUnitHasFlags(void);

/* Script command: after btlGetMainState, returns whether btlScriptUnitHasFlags or FUN_003c5d8c reports success. */
bool FUN_004f8264(void)
{
    btlGetMainState();
    return btlScriptUnitHasFlags() != 0 || FUN_003c5d8c() != 0;
}

} /* extern "C" */
