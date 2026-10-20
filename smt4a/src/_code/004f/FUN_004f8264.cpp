#include "common.h"

extern "C" {

int btlGetMainState(void);
int FUN_003c5d8c(void);
int FUN_003e8430(void);

/* Script command: after btlGetMainState, returns whether FUN_003e8430 or FUN_003c5d8c reports success. */
bool FUN_004f8264(void)
{
    btlGetMainState();
    return FUN_003e8430() != 0 || FUN_003c5d8c() != 0;
}

} /* extern "C" */
