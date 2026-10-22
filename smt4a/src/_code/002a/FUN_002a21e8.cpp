#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;

s32 scrRunOpcodesStub(u32 handle);

/* Returns whether scrRunOpcodesStub reports 2 for the record's handle at 0x680. */
u8 FUN_002a21e8(void)
{
    s32 state;

    state = scrRunOpcodesStub(g_buttonHelp.work->process);
    return state == 2;
}

} /* extern "C" */
