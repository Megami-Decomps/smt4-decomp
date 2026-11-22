#include "battle/BtlMainAccess.h"
#include "common.h"

struct BtlMainFUN_002e430c;

extern "C" {

void battleShowUnitMarkers(BtlMainFUN_002e430c *state);

/* Script command: runs battleShowUnitMarkers on the battle state. */
s32 FUN_002e430c(void)
{
    battleShowUnitMarkers(reinterpret_cast<BtlMainFUN_002e430c *>(btlGetMainState()));
    return 1;
}

} /* extern "C" */
