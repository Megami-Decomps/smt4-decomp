#include "battle/BtlMainAccess.h"
#include "shard/Shard003C.h"

extern "C" {

extern void btlMainClearUnk24(void *state);

/* Script command: clears the battle state's field at +0x24. */
u32 scrBtlStateClearField(void)
{
    btlMainClearUnk24(static_cast<void *>(btlGetMainState()));
    return 1;
}

} /* extern "C" */
