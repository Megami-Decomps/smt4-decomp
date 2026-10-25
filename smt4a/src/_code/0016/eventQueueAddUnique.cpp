#include "common.h"
#include "util/EventQueueAddUnique.h"

extern "C" {
extern s32 g_eventQueueEntries[32];

void eventQueueAddUnique(s32 event)
{
    for (s32 index = 0; index < 32; ++index) {
        if (g_eventQueueEntries[index] == event) {
            return;
        }
    }
    for (s32 index = 0; index < 32; ++index) {
        if (g_eventQueueEntries[index] == 0) {
            g_eventQueueEntries[index] = event;
            return;
        }
    }
}

} /* extern "C" */
