#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"

extern "C" {

extern AsdTextDefaults g_asdTextDefaults;

void scrCommSetQueueRequestCallback(u32 value)
{
    g_asdTextDefaults.unk14 = value;
}

} /* extern "C" */
