#include "ui/ButtonHelpGlobal.h"

extern "C" {

void FUN_00253fe8(u32 a, u8 b, u8 c, u8 d)
{
    ButtonHelpWork *obj = g_buttonHelp.work;

    g_buttonHelp.work->text.highlightStyle = a;
    obj->text.highlightLine = b;
    obj->text.highlightStart = c;
    obj->text.highlightLength = d;
}

} /* extern "C" */
