#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"

extern "C" {
extern AsdTextDefaultsA g_asdTextDefaults;

void asdTextSetDefaultValue(u32 value)
{
    g_asdTextDefaults.style = value;
}

} /* extern "C" */
