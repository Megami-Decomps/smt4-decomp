#include "common.h"

extern "C" {

int mapIfStart(void);

typedef struct MapIfTimer {
    /* 0x00 */ s32 state;
    /* 0x04 */ s32 frames;
    /* 0x08 */ u8 unk08[0xC];
    /* 0x14 */ s32 unk14;
} MapIfTimer;

extern MapIfTimer *g_mapIfTimer;

/* Counts frames while the timer is in state 1-3; starts the map interface at frame 8 and resets after 60. */
void mapIfTimerStep(void)
{
    MapIfTimer *timer = g_mapIfTimer;

    if (timer->state != 0 && ((timer->state == 1 || timer->state == 2) || timer->state == 3)) {
        timer->frames = timer->frames + 1;
        if (timer->frames == 8) {
            if (timer->unk14 == 0) {
                return;
            }
            mapIfStart();
        }
        timer = g_mapIfTimer;
        if (timer->frames > 60) {
            timer->state = 0;
            timer->frames = 0;
        }
    }
}

} /* extern "C" */
