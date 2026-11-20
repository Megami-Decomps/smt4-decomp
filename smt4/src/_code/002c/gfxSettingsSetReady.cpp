#include "gfx/GfxSettings.h"

extern "C" {

void gfxSettingsSetReady(u8 value)
{
    g_gfxSettings.ready = value;
}

} /* extern "C" */
