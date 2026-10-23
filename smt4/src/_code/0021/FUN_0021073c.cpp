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
extern SequenceSelectionState DAT_004e3f64;
s32 padIsButtonPressed(u32 button);
s32 padIsButtonRepeat(u32 button);
void asdSequenceRequest(u32 sequence, s32 mode);

/* Select a sequence with wrapping single steps and clamped page steps. */
u32 FUN_0021073c(void)
{
    if (padIsButtonPressed(0)) {
        asdSequenceRequest(DAT_004e3f64.entries[DAT_004e3f64.selection].sequence, 0);
        return ~0u;
    }
    if (padIsButtonRepeat(5))
        --DAT_004e3f64.selection;
    if (padIsButtonRepeat(6))
        ++DAT_004e3f64.selection;
    if ((s32)DAT_004e3f64.selection < 0)
        DAT_004e3f64.selection = DAT_004e3f64.count - 1;
    if (DAT_004e3f64.selection >= DAT_004e3f64.count)
        DAT_004e3f64.selection = 0;
    if (padIsButtonPressed(4))
        DAT_004e3f64.selection -= 25;
    if (padIsButtonPressed(3))
        DAT_004e3f64.selection += 25;
    if ((s32)DAT_004e3f64.selection <= 0)
        DAT_004e3f64.selection = 0;
    if (DAT_004e3f64.selection >= DAT_004e3f64.count)
        DAT_004e3f64.selection = DAT_004e3f64.count - 1;
    return 0;
}
}
