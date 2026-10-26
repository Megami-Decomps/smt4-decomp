#include "shard/W5_W5Match2_MapCallbacks.h"

extern "C" {

extern CampCecWork *g_campCec;

/* Test whether camp communication is in state six. */
s32 campCecIsStateSix(void)
{
    s32 result = 0;
    if (g_campCec == NULL) {
        return 0;
    }
    if (g_campCec->state == 6) {
        result = 1;
    }
    return result;
}

}
