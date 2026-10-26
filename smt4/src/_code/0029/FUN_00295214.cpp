#include "ui/ButtonHelp.h"
#include "code/Code0029_Smt4.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;

void FUN_00295214(u8 value)
{
    g_buttonHelp.work->unk4CB = value;
}

} /* extern "C" */
