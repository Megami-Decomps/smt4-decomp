#include "common.h"

extern "C" {

int scrSetResult(u32 result);
extern u8 *btlGetMainState(void);
extern u32 scrGetArg(void);

/* Result: (unit count + 1) modulo argument 0. */
u32 FUN_002ffe04(void)
{
    u32 divisor = scrGetArg();
    u8 *btl = btlGetMainState();

    scrSetResult((btl[0x44b4] + 1) % (int)divisor);
    return 1;
}

} /* extern "C" */
