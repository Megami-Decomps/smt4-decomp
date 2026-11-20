/* NON_MATCHING: retail's empty entry loop counts down from the count through a copy of the state pointer (add r0, r4, #0; subs; bne) where the build counts up, and the request's entry offset is built in r2 where the build uses r0; the rest matches. */
#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"

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
s32 padButtonIsPressed(u32 button);
s32 padButtonRepeat(u32 button);

/* Select a sequence with wrapping single steps and clamped page steps. */
u32 sequenceSelectorHandleInput(void)
{
    /* Counts through the entries; what this loop did per entry is compiled out of this build. */
    u32 i = 0;
    while (i < g_startMenuProcessGroup.count)
        i++;
    if (padButtonIsPressed(0)) {
        asdSequenceRequest(g_startMenuProcessGroup.entries[g_startMenuProcessGroup.selection].sequence, NULL, 0);
        return ~0u;
    }
    if (padButtonRepeat(5))
        --g_startMenuProcessGroup.selection;
    if (padButtonRepeat(6))
        ++g_startMenuProcessGroup.selection;
    if ((s32)g_startMenuProcessGroup.selection < 0)
        g_startMenuProcessGroup.selection = g_startMenuProcessGroup.count - 1;
    if (g_startMenuProcessGroup.selection >= g_startMenuProcessGroup.count)
        g_startMenuProcessGroup.selection = 0;
    if (padButtonIsPressed(4))
        g_startMenuProcessGroup.selection -= 25;
    if (padButtonIsPressed(3))
        g_startMenuProcessGroup.selection += 25;
    u32 count = g_startMenuProcessGroup.count;
    g_startMenuProcessGroup.selection = (s32)g_startMenuProcessGroup.selection > 0 ? g_startMenuProcessGroup.selection : 0;
    if (g_startMenuProcessGroup.selection >= count)
        g_startMenuProcessGroup.selection = count - 1;
    return 0;
}
}
