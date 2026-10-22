#include "status/StatusDown.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

s32 statusDownIsStateEleven(void)
{
    StatusDownStateA *object = g_statusDown;
    if (object == NULL) {
        return 0;
    }
    return object->track.state == 11;
}

} /* extern "C" */
