/* NON_MATCHING: register use differs (retail keeps the zero stack arguments in ip). */
/* Script body: shows a plain message made from the script argument and FUN_002893d8's result, for the given battle unit. `unit` is what the stub in front passes in r0. */
#include "common.h"

extern "C" {

u32 scrGetArg(u32 index);
u32 FUN_002893d8(void);
void FUN_002866b4(u32 unit, u32 arg, u32 value, s32 kind, s32 a, s32 b);

void FUN_002118a0(u32 unit)
{
    u32 arg = scrGetArg(0);
    u32 value = FUN_002893d8();

    FUN_002866b4(unit, arg, value, 7, 0, 0);
}

}
