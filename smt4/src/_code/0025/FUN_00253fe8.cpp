#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;

void FUN_00253fe8(u32 a, u8 b, u8 c, u8 d)
{
    ButtonHelpWork *obj = g_buttonHelp.work;

    g_buttonHelp.work->unk550 = a;
    obj->unk554 = b;
    obj->unk555 = c;
    obj->unk556 = d;
}

} /* extern "C" */
