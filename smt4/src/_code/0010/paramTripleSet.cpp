#include "title/SequenceSelector.h"

/* Configures the StartMenu's sequence choices and selects the first entry. */
extern "C" void paramTripleSet(s32 processGroup, const SequenceSelectionEntry *entries, u32 count)
{
    g_startMenuProcessGroup.processGroup = processGroup;
    g_startMenuProcessGroup.entries = entries;
    g_startMenuProcessGroup.count = count;
    g_startMenuProcessGroup.selection = 0;
}
