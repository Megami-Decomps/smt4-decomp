/* NON_MATCHING: explicit argument zero and semantic dispatcher recover ABI/setup; two final equality-chain comparisons retain command in r0 instead of saved r4. */
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

void FUN_002378b8(s32 command, s32 target);
void FUN_002a3518(s32 command, s32 target);

/* A script command with argument 1 == 13 stops the event textures and bust-up slots for these
 * argument 0 values; every other call is handled elsewhere. */
static __inline void dispatchScriptTextureCommand(s32 command, s32 target)
{
    if (target == 13) {
        switch (command) {
        case 1:
        case 2:
        case 3:
        case 6:
        case 7:
        case 8:
        case 10:
        case 11:
        case 15:
        case 18:
        case 25:
        case 40:
        case 42:
        case 71:
        case 73:
            FUN_002a3518(command, target);
            return;
        }
    }
    FUN_002378b8(command, target);
}

void FUN_002a3470(void)
{
    s32 command = scrGetArg(0);
    s32 target = scrGetArg(1);
    dispatchScriptTextureCommand(command, target);
}

} /* extern "C" */
