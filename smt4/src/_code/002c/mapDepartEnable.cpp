#include "common.h"

namespace {
struct MapDepartState {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 enabled;
};
}

extern "C" {
extern MapDepartState *g_mapDepart;

static __inline void mapDepartSetEnabled(MapDepartState *state, u8 enabled)
{
    state->enabled = enabled;
}

/* Enables the map departure state. */
void mapDepartEnable(void)
{
    mapDepartSetEnabled(g_mapDepart, 1);
}
}
