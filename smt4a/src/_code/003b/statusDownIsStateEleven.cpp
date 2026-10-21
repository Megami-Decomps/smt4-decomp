#include "shard/W4_W4Match5_StatusDown.h"

extern "C" {



s32 statusDownIsStateEleven(void)
{
    StatusDown *object = g_statusDown;
    if (object == NULL) {
        return 0;
    }
    return object->track.state == 11;
}

} /* extern "C" */
