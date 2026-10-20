#include "common.h"

extern "C" {

void mulU32ToU64(s32 value, s32 divisor);
void FUN_005144ec(void);
void FUN_005144f0(void);

/* With a value: calls mulU32ToU64(value, 1000000) and FUN_005144ec; without: FUN_005144f0. */
void FUN_002f8b88(s32 value)
{
    if (value != 0) {
        mulU32ToU64(value, 1000000);
        FUN_005144ec();
        return;
    }
    FUN_005144f0();
}

} /* extern "C" */
