#include "Terminal/tmnlMain.h"

extern "C" s32 questTestPackedFlag(u32 flag);

/* Collects other terminals in the current group, including locked destinations when requested. */
extern "C" void tmnlCollectDestinations(TmnlWorkA *work)
{
    const s32 terminalCount = sizeof(g_tmnlEntries) / sizeof(g_tmnlEntries[0]);
    work->destinationCount = 0;
    for (s32 index = 0; index < terminalCount; ++index)
        work->destinations[index] = NULL;
    if (work->showLocked) {
        for (s32 index = 0; index < terminalCount; ++index) {
            if (work->destination != index &&
                g_tmnlEntries[work->destination].group == g_tmnlEntries[index].group) {
                work->destinations[work->destinationCount] = &g_tmnlEntries[index];
                ++work->destinationCount;
            }
        }
    } else {
        for (u32 index = 0; index < terminalCount; ++index) {
            if (work->destination != index &&
                g_tmnlEntries[work->destination].group == g_tmnlEntries[index].group &&
                questTestPackedFlag(index)) {
                work->destinations[work->destinationCount] = &g_tmnlEntries[index];
                ++work->destinationCount;
            }
        }
    }
}
