#include "ui/ButtonHelpGlobal.h"
#include "code/Code0029_Smt4.h"

extern "C" {

void buttonHelpSetTextVisible(u8 value)
{
    g_buttonHelp.work->textVisible = value;
}

} /* extern "C" */
