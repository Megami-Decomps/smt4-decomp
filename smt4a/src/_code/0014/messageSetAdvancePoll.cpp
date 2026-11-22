#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"

extern "C" {

extern AsdTextDefaultsA g_asdTextDefaults;

/* Installs the message windows' advance-page poll. */
void messageSetAdvancePoll(AsdTextWindowPoll poll)
{
    g_asdTextDefaults.advanceRequested = poll;
}

} /* extern "C" */
