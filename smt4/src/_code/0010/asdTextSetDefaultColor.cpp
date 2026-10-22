#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"

extern "C" {

extern AsdTextDefaults g_asdTextDefaults;

void asdTextSetDefaultColor(u32 value)
{
    g_asdTextDefaults.color = value & 0xffffff00;
}

} /* extern "C" */
