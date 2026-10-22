#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"

extern "C" {

extern AsdTextDefaults g_asdTextDefaults;

/* Sets the default text style word. */
void asdTextSetDefaultStyle(u32 value)
{
    g_asdTextDefaults.style = value;
}

} /* extern "C" */
