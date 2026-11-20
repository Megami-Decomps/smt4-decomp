#include "battle/BtlMainAccess.h"
#include "common.h"
#include "code/Code004f_Smt4a.h"

extern "C" {

int textureCacheGetDirection(void);
int btlScriptUnitHasFlags(void);

/* Script command: after btlGetMainState, returns whether btlScriptUnitHasFlags or textureCacheGetDirection reports success. */
bool FUN_004f8264(void)
{
    reinterpret_cast<int>(btlGetMainState());
    return btlScriptUnitHasFlags() != 0 || textureCacheGetDirection() != 0;
}

} /* extern "C" */
