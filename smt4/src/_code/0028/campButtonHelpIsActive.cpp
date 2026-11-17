#include "ui/ButtonHelpGlobal.h"

extern "C" {

u8 campButtonHelpIsActive(void)
{
    return '\0' < g_buttonHelp.references;
}

} /* extern "C" */
