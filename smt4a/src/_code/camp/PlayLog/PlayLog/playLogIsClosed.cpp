/* Returns nonzero when the play log screen is not open or has reached its closed state (4). */
#include "common.h"
#include "camp/PlayLog/PlayLog.h"

extern "C" {

extern PlayLogWorkA *g_playLog;

u8 playLogIsClosed(void)
{
    int state = 0;

    if (g_playLog != NULL) {
        state = g_playLog->state;
    }
    return g_playLog == NULL || state == 4;
}

} /* extern "C" */
