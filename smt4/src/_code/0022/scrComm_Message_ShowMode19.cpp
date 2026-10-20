#include "common.h"

extern "C" {

void FUN_002866b4(u32 unit, u32 arg, u32 value, s32 kind, s32 a, s32 b);
void FUN_0028dc98(s32 arg);
u32 FUN_002865f8(void);
u32 scrGetCommandFrame(void);
u32 scrGetArg(u32 index);

/* Shows a message of the given kind for the unit FUN_002865f8 names, using script argument 0 and the command frame. */
static void showMessage(s32 kind)
{
    u32 unit = FUN_002865f8();
    u32 arg = scrGetArg(0);
    u32 value = scrGetCommandFrame();

    FUN_002866b4(unit, arg, value, kind, 0, 0);
}

void scrComm_Message_ShowMode19(void)
{
    FUN_0028dc98(0);
    showMessage(0x13);
}

} /* extern "C" */
