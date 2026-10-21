#include "common.h"

struct MapInterfaceTimer {
    /* 0x00 */ u32 elapsed;
    /* 0x04 */ u32 state;
};

extern "C" {

extern MapInterfaceTimer *g_mapIfTimer;

/* Resets the map-interface timer. */
void mapIfResetTimer(void)
{
    g_mapIfTimer->elapsed = 0;
    g_mapIfTimer->state = 0;
}

} /* extern "C" */
