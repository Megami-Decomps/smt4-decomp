/* NON_MATCHING: initial clear loop uses different zero and induction registers. */
#include "common.h"
#include <stddef.h>

extern "C" s32 questTestPackedFlag(u32 flag);

// Collect other terminals in the current group, optionally including locked destinations.
extern "C" void FUN_002fc008(void *terminal)
{
    struct DestinationRecord {
        u8 unk00[4];
        s8 group; // 0x04
        u8 unk05[0x1f];
    };
    // The destination array and count extend beyond the shared TmnlWork prefix.
    struct DestinationListView {
        u8 unk00[5];
        u8 showLocked; // 0x05
        u8 unk06[3];
        u8 currentDestination; // 0x09
        u8 unk0a[0x58a];
        DestinationRecord *destinations[20]; // 0x594
        s32 count; // 0x5e4
    };
    typedef char LayoutCheck[sizeof(DestinationRecord) == 0x24 &&
        offsetof(DestinationListView, destinations) == 0x594 &&
        offsetof(DestinationListView, count) == 0x5e4 ? 1 : -1];
    extern DestinationRecord g_tmnlEntries[20];
    DestinationListView *work = static_cast<DestinationListView *>(terminal);
    work->count = 0;
    for (s32 index = 0; index < 20; ++index)
        work->destinations[index] = NULL;
    if (work->showLocked) {
        for (s32 index = 0; index < 20; ++index) {
            if (work->currentDestination != index &&
                g_tmnlEntries[work->currentDestination].group == g_tmnlEntries[index].group) {
                work->destinations[work->count] = &g_tmnlEntries[index];
                ++work->count;
            }
        }
    } else {
        for (u32 index = 0; index < 20; ++index) {
            if (work->currentDestination != index &&
                g_tmnlEntries[work->currentDestination].group == g_tmnlEntries[index].group &&
                (index == 0 || questTestPackedFlag(index))) {
                work->destinations[work->count] = &g_tmnlEntries[index];
                ++work->count;
            }
        }
    }
}
