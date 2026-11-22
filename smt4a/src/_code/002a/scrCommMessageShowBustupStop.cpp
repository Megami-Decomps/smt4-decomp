#include "common.h"
#include "script/ScriptArgs.h"
#include "script/ScriptMessageBustup.h"

extern "C" {

void FUN_002378b8(s32 command, s32 target);
void FUN_002a3518(s32 command, s32 target);

/* A script command with argument 1 == 13 stops the event textures and bust-up slots for these
 * argument 0 values; every other call is handled elsewhere. */
void scrCommMessageShowBustupStop(void)
{
    s32 command = scrGetArg(0);
    s32 target = scrGetArg(1);
    if (scrIsBustupMessageCommand(command, target)) {
        FUN_002a3518(command, target);
        return;
    }
    FUN_002378b8(command, target);
}

} /* extern "C" */
