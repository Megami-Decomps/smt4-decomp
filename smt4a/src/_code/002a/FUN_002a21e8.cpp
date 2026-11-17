#include "ui/ButtonHelpGlobal.h"
#include "script/scrScriptProcess.h"
#include "code/Code002a.h"

extern "C" {

/* Returns whether scrRunOpcodesStub reports 2 for the record's handle at 0x680. */
u8 FUN_002a21e8(void)
{
    s32 state;

    state = scrRunOpcodesStub(g_buttonHelp.work->scriptProcess);
    return state == 2;
}

} /* extern "C" */
