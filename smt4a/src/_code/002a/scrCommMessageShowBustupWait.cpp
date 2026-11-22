#include "common.h"
#include "script/ScriptArgs.h"
#include "script/ScriptMessageBustup.h"

extern "C" {

void FUN_00282a08(s32 type, s32 kind);
void FUN_002a33f0(void);

/* Script command: argument 1 must be 13 and argument 0 one of a fixed set for FUN_002a33f0 (the
 * function that follows); any other pair goes to FUN_00282a08. */
void scrCommMessageShowBustupWait(void)
{
    s32 type = scrGetArg(0);
    s32 kind = scrGetArg(1);
    if (scrIsBustupMessageCommand(type, kind)) {
        FUN_002a33f0();
        return;
    }
    FUN_00282a08(type, kind);
}

} /* extern "C" */
