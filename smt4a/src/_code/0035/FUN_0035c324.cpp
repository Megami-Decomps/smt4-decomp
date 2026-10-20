#include "shard/Shard0035.h"

extern "C" {

extern Unit66 *FUN_00239288(void);
extern u32 FUN_0018719c(u32 index);
extern void scrSetResult(u32 value);

/* Script command: result is the unit's value at +0x66 once flag 0x581 is set, else -1. */
u32 FUN_0035c324(void)
{
    Unit66 *unit = FUN_00239288();
    u32 result;

    if (FUN_0018719c(0x581) != 0) {
        result = unit->unk66;
    } else {
        result = -1;
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
