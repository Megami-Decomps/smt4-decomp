#include "common.h"

extern "C" {

struct LocalMapWork {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 requested;
};
extern LocalMapWork *g_lmapMainState;

static __inline void lmapSetRequested(LocalMapWork *map, u8 value)
{
    map->requested = value;
}

/* Set the local map's request flag. */
void lmapMainRequest(void)
{
    lmapSetRequested(g_lmapMainState, 1);
}

}
