#include "gfx/GfxSettings.h"

extern "C" {

u8 FUN_00104e0c(void)
{
    return g_gfxSettings.fadeMode == 2;
}

} /* extern "C" */
