#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"

extern "C" {

extern AsdTextDefaults g_asdTextDefaults;

extern void asdTextSetRenderSetting(u32 value);

/* Updates the default text word and the corresponding renderer setting. */
void asdTextSetDefaultRenderSetting(u32 value)
{
    g_asdTextDefaults.renderSetting = value;
    asdTextSetRenderSetting(value);
}

} /* extern "C" */
