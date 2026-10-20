#include "common.h"

extern "C" {

extern int g_partyPanel;

u8 FUN_00201ab0(void)
{
    return g_partyPanel != 0;
}

} /* extern "C" */
