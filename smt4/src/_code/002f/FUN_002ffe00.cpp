#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

int scrSetResult(u32 result);
extern u32 scrGetArg(u32 index);

/* Result: (unit count + 1) modulo argument 0. */
u32 FUN_002ffe00(void)
{
    u32 divisor = scrGetArg(0);
    u8 *btl = reinterpret_cast<u8 *>(btlGetMainState());

    scrSetResult((btl[0x44b4] + 1) % (int)divisor);
    return 1;
}

} /* extern "C" */
