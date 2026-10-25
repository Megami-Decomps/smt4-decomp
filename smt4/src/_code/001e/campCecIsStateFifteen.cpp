/* NON_MATCHING: armcc adds a branch after the state comparison and schedules the zero result differently. */
#include "shard/W5_W5Match2_MapCallbacks.h"

extern "C" {

extern CampCecWork *g_campCec;

/* Test whether the camp communication work exists and is in state fifteen. */
bool campCecIsStateFifteen(void)
{
    if (g_campCec != NULL) {
        return g_campCec->state == 15;
    }
    return 0;
}

}
