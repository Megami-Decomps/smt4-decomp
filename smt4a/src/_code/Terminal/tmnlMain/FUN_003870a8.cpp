/* NON_MATCHING: initial clear loop uses different zero and induction registers. */
#include "common.h"
#include <stddef.h>

extern "C" s32 questTestPackedFlag(u32 flag);

// Collect other terminals in the current group, optionally including locked destinations.
extern "C" void FUN_003870a8(void *terminal)
{
    struct DestinationRecord {
        u8 unk00[4];
        s8 group; // 0x04
        u8 unk05[0x37];
    };
    // The destination array and count extend beyond the shared TmnlWorkA prefix.
    struct DestinationListView {
        u8 unk00[5];
        u8 showLocked; // 0x05
        u8 unk06[3];
        u8 currentDestination; // 0x09
        u8 unk0a[0x59e];
        DestinationRecord *destinations[22]; // 0x5a8
        s32 count; // 0x600
    };
    typedef char LayoutCheck[sizeof(DestinationRecord) == 0x3c &&
        offsetof(DestinationListView, destinations) == 0x5a8 &&
        offsetof(DestinationListView, count) == 0x600 ? 1 : -1];
    extern DestinationRecord DAT_0056fd38[22];
    DestinationListView *work = static_cast<DestinationListView *>(terminal);
    work->count = 0;
    for (s32 index = 0; index < 22; ++index)
        work->destinations[index] = NULL;
    if (work->showLocked) {
        for (s32 index = 0; index < 22; ++index) {
            if (work->currentDestination != index &&
                DAT_0056fd38[work->currentDestination].group == DAT_0056fd38[index].group) {
                work->destinations[work->count] = &DAT_0056fd38[index];
                ++work->count;
            }
        }
    } else {
        for (u32 index = 0; index < 22; ++index) {
            if (work->currentDestination != index &&
                DAT_0056fd38[work->currentDestination].group == DAT_0056fd38[index].group &&
                questTestPackedFlag(index)) {
                work->destinations[work->count] = &DAT_0056fd38[index];
                ++work->count;
            }
        }
    }
}
