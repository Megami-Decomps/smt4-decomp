/* NON_MATCHING: result-local form now matches retail's early zero and `moveq`; armcc still emits a branch-to-next `bne` after it. */
#include "shard/W5_W5Match2_MapCallbacks.h"

extern "C" {

extern CampCecWork *g_campCec;

/* Test whether the camp communication work exists and is in state fifteen. */
bool campCecIsStateFifteen(void)
{
    bool result = false;
    if (g_campCec != NULL && g_campCec->state == 15) {
        result = true;
    }
    return result;
}

}
