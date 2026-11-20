/* NON_MATCHING: selector contains a retail empty countdown; omitted rather than retaining dead work. */
#include "common.h"

struct SequenceSelectionEntry {
    const char *name;
    u32 sequence;
};
struct SequenceSelectionState {
    u32 unk00;
    SequenceSelectionEntry *entries;
    u32 count;
    u32 selection;
};

extern "C" {
extern SequenceSelectionState g_startMenuProcessGroup;
s32 padIsButtonPressed(u32 button);
s32 padIsButtonRepeat(u32 button);
void asdSequenceRequest(u32 sequence, s32 mode);

/* Select a sequence with wrapping single steps and clamped page steps. */
u32 sequenceSelectorHandleInput(void)
{
    if (padIsButtonPressed(0)) {
        asdSequenceRequest(g_startMenuProcessGroup.entries[g_startMenuProcessGroup.selection].sequence, 0);
        return ~0u;
    }
    if (padIsButtonRepeat(5))
        --g_startMenuProcessGroup.selection;
    if (padIsButtonRepeat(6))
        ++g_startMenuProcessGroup.selection;
    if ((s32)g_startMenuProcessGroup.selection < 0)
        g_startMenuProcessGroup.selection = g_startMenuProcessGroup.count - 1;
    if (g_startMenuProcessGroup.selection >= g_startMenuProcessGroup.count)
        g_startMenuProcessGroup.selection = 0;
    if (padIsButtonPressed(4))
        g_startMenuProcessGroup.selection -= 25;
    if (padIsButtonPressed(3))
        g_startMenuProcessGroup.selection += 25;
    if ((s32)g_startMenuProcessGroup.selection <= 0)
        g_startMenuProcessGroup.selection = 0;
    if (g_startMenuProcessGroup.selection >= g_startMenuProcessGroup.count)
        g_startMenuProcessGroup.selection = g_startMenuProcessGroup.count - 1;
    return 0;
}
}
