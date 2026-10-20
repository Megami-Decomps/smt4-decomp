#include "common.h"

extern "C" {

extern s8 g_buttonHelp;

u8 campButtonHelpIsActive(void)
{
    return '\0' < g_buttonHelp;
}

} /* extern "C" */
