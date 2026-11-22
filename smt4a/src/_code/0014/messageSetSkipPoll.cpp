#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"

extern "C" {

extern AsdTextDefaultsA g_asdTextDefaults;

/* Installs the message windows' skip-line poll. */
void messageSetSkipPoll(AsdTextWindowPoll poll)
{
    g_asdTextDefaults.skipRequested = poll;
}

} /* extern "C" */
