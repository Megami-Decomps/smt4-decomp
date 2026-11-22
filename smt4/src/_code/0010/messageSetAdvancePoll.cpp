#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"

extern "C" {

extern AsdTextDefaults g_asdTextDefaults;

void messageSetAdvancePoll(AsdTextWindowPoll poll)
{
    g_asdTextDefaults.advanceRequested = poll;
}

} /* extern "C" */
