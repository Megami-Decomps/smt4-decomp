#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"

extern "C" {
extern AsdTextDefaultsA g_asdTextDefaults;

void asdTextSetCurrentMode(u32 value);
void asdTextSetDefaultMode(u32 value)
{
    g_asdTextDefaults.renderSetting = value;
    asdTextSetCurrentMode(value);
}

} /* extern "C" */
