/* Script body: shows a plain message made from the script argument and scrGetCommandFrame's result, for the given battle unit. `unit` is what the stub in front passes in r0. */
#include "common.h"

extern "C" {

u32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
void FUN_002866b4(u32 unit, u32 arg, u32 value, s32 kind, s32 a, s32 b);

/* File-local wrapper: FUN_002866b4 with the two trailing arguments 0. */
static void showMessage(u32 unit, u32 arg, u32 value, s32 kind)
{
    FUN_002866b4(unit, arg, value, kind, 0, 0);
}

void scrCommMessageShowPlainBody(u32 unit)
{
    u32 arg = scrGetArg(0);
    u32 value = scrGetCommandFrame();

    showMessage(unit, arg, value, 7);
}

}
