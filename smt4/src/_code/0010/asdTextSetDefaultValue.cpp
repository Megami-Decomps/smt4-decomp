#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"

extern "C" {

extern AsdTextDefaults g_asdTextDefaults;

void asdTextSetDefaultValue(u32 value)
{
    g_asdTextDefaults.unk30 = value;
}

} /* extern "C" */
