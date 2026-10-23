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
extern SequenceSelectionState DAT_00640388;
s32 padButtonIsPressed(u32 button);
s32 padButtonRepeat(u32 button);
void asdSequenceRequest(u32 sequence, s32 mode);

/* Select a sequence with wrapping single steps and clamped page steps. */
u32 FUN_002e10f0(void)
{
    if (padButtonIsPressed(0)) {
        asdSequenceRequest(DAT_00640388.entries[DAT_00640388.selection].sequence, 0);
        return ~0u;
    }
    if (padButtonRepeat(5))
        --DAT_00640388.selection;
    if (padButtonRepeat(6))
        ++DAT_00640388.selection;
    if ((s32)DAT_00640388.selection < 0)
        DAT_00640388.selection = DAT_00640388.count - 1;
    if (DAT_00640388.selection >= DAT_00640388.count)
        DAT_00640388.selection = 0;
    if (padButtonIsPressed(4))
        DAT_00640388.selection -= 25;
    if (padButtonIsPressed(3))
        DAT_00640388.selection += 25;
    if ((s32)DAT_00640388.selection <= 0)
        DAT_00640388.selection = 0;
    if (DAT_00640388.selection >= DAT_00640388.count)
        DAT_00640388.selection = DAT_00640388.count - 1;
    return 0;
}
}
