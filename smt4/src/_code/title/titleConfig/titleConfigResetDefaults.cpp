#include "common.h"

extern "C" {

extern u8 g_titleConfigValues[];

/* Writes the title-configuration defaults. */
void titleConfigResetDefaults(void)
{
    g_titleConfigValues[0] = 50;
    g_titleConfigValues[1] = 80;
    g_titleConfigValues[2] = 80;
    g_titleConfigValues[3] = 48;
}

} /* extern "C" */
