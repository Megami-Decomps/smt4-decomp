#include "battle/BtlMainAccess.h"
#include "common.h"
#include "battle/btlUnit.h"

extern "C" {

int FUN_00246708(void);
int FUN_00293230(void);

/* Script command: after btlGetMainState, returns whether FUN_00293230 or FUN_00246708 reports success. */
bool FUN_003db7b4(void *arg0)
{
    reinterpret_cast<int>(btlGetMainState());
    return FUN_00293230() != 0 || FUN_00246708() != 0;
}

} /* extern "C" */
