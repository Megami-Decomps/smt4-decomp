#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"

extern "C" {

extern AsdTextDefaults g_asdTextDefaults;

void messageSetSkipPoll(AsdTextWindowPoll poll)
{
    g_asdTextDefaults.skipRequested = poll;
}

} /* extern "C" */
