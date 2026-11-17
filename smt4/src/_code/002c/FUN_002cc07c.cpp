#include "gfx/GfxSettings.h"

extern "C" {

void FUN_002cc07c(u8 value)
{
    g_gfxSettings.ready = value;
}

} /* extern "C" */
