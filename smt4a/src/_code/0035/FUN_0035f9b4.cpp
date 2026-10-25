#include "battle/BtlMainAccess.h"
#include "common.h"

struct BtlMainFUN_0035f9b4;

extern "C" {

void FUN_003e89bc(BtlMainFUN_0035f9b4 *state);

/* Script command: runs FUN_003e89bc on the battle state. */
s32 FUN_0035f9b4(void)
{
    FUN_003e89bc(reinterpret_cast<BtlMainFUN_0035f9b4 *>(btlGetMainState()));
    return 1;
}

} /* extern "C" */
