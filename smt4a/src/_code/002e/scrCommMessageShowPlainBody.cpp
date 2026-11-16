/* NON_MATCHING: IDENTICAL when the unit is compiled with -O2 (needs a cflags entry: -O2 -Otime); under the default -O3 the zero stack arguments are stored before the register arguments. */
/* Script body: shows a plain message made from the script argument and scrGetCommandFrame's result, for the given battle unit. `unit` is what the stub in front passes in r0. */
#include "common.h"

extern "C" {

u32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
void FUN_0021bdac(u32 unit, u32 arg, u32 value, s32 kind, s32 a, s32 b);

/* File-local wrapper: FUN_0021bdac with the two trailing arguments 0. */
static void showMessage(u32 unit, u32 arg, u32 value, s32 kind)
{
    FUN_0021bdac(unit, arg, value, kind, 0, 0);
}

void scrCommMessageShowPlainBody(u32 unit)
{
    u32 arg = scrGetArg(0);
    u32 value = scrGetCommandFrame();

    showMessage(unit, arg, value, 7);
}

}
