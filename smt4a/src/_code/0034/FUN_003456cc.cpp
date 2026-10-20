/* Script body: shows a message for the script argument and scrGetCommandFrame's result, with the message kind the stub in front derives from the active quest entry (passed in r0). */
#include "common.h"

extern "C" {

u32 scrGetArg(u32 index);
u32 FUN_002ba85c(void);
u32 scrGetCommandFrame(void);
void FUN_0021bdac(u32 unit, u32 arg, u32 value, u32 kind, s32 a, s32 b);

void FUN_003456cc(u32 kind)
{
    u32 unit = FUN_002ba85c();
    u32 arg = scrGetArg(0);
    u32 value = scrGetCommandFrame();

    FUN_0021bdac(unit, arg, value, kind, 0, 0);
}

}
