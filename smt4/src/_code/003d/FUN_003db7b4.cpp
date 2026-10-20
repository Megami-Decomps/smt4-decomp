#include "common.h"

extern "C" {

int btlGetMainState(void);
int FUN_00246708(void);
int FUN_00293230(void);

/* Script command: after btlGetMainState, returns whether FUN_00293230 or FUN_00246708 reports success. */
bool FUN_003db7b4(void)
{
    btlGetMainState();
    return FUN_00293230() != 0 || FUN_00246708() != 0;
}

} /* extern "C" */
