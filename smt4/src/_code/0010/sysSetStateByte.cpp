#include "common.h"

extern "C" {

extern u8 g_titleConfigModeFlag;

void sysSetStateByte(u8 value)
{
    g_titleConfigModeFlag = value;
}

} /* extern "C" */
