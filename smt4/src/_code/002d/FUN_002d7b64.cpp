/* Script body: shows a message for the script argument and FUN_002893d8's result, with the message kind the stub in front derives from the active quest entry (passed in r0). */
#include "common.h"

extern "C" {

u32 scrGetArg(u32 index);
u32 FUN_002865f8(void);
u32 FUN_002893d8(void);
void FUN_002866b4(u32 unit, u32 arg, u32 value, u32 kind, s32 a, s32 b);

void FUN_002d7b64(u32 kind)
{
    u32 unit = FUN_002865f8();
    u32 arg = scrGetArg(0);
    u32 value = FUN_002893d8();

    FUN_002866b4(unit, arg, value, kind, 0, 0);
}

}
