#include "common.h"

extern "C" u8 g_titleConfigModeFlag;

/* Read the title configuration flag. */
extern "C" u8 titleConfigGetModeFlag(void)
{
    return g_titleConfigModeFlag;
}
