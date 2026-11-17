#include "ui/ButtonHelpGlobal.h"
#include "bible/bibleAnalyze.h"

extern "C" {

u8 buttonHelpIsNotActive(void)
{
    return g_buttonHelp.work->state != 1;
}

} /* extern "C" */
