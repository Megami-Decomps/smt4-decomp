#include "camp/CampMenuEntry.h"

// Check whether any of the command's suppression flags is set.
extern "C" u32 idListAnyValid(const CampComRecord *record)
{
    u32 found = 0;
    if (campMenuEntryHidden(record))
        found = 1;
    return found;
}
