#include "common.h"

struct PlayLogStatus {
    /* 0x000 */ u8 padding[0x344];
    /* 0x344 */ s32 state;
};

extern "C" {

extern PlayLogStatus *g_playLog;

/* Reports whether the play log screen is closed. */
bool playLogIsClosed(void)
{
    return g_playLog == NULL || g_playLog->state == 3;
}

} /* extern "C" */
