#include "shard/Shard003C.h"

extern "C" {

extern void *btlGetMainState(void);
extern void btlMainClearUnk24(void *state);

/* Script command: clears the battle state's field at +0x24. */
u32 FUN_003c22c4(void)
{
    btlMainClearUnk24(btlGetMainState());
    return 1;
}

} /* extern "C" */
