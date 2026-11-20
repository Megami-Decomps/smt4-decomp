#include "battle/BtlMainAccess.h"
#include "common.h"
#include "battle/btlUnit.h"

extern "C" {

int textureCacheGetDirection(void);
int btlScriptUnitIsIncapacitated(void);

/* Script command: after btlGetMainState, returns whether btlScriptUnitIsIncapacitated or textureCacheGetDirection reports success. */
bool FUN_003db7b4(void *arg0)
{
    reinterpret_cast<int>(btlGetMainState());
    return btlScriptUnitIsIncapacitated() != 0 || textureCacheGetDirection() != 0;
}

} /* extern "C" */
