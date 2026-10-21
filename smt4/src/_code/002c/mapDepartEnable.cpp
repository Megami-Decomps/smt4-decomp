/* NON_MATCHING: constant store uses r0 rather than retail's r1 and reorders the pointer load. */
#include "common.h"

namespace {
struct MapDepartState {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 enabled;
};
}

extern "C" {
extern MapDepartState *g_mapDepart;

/* Enables the map departure state. */
void mapDepartEnable(void)
{
    g_mapDepart->enabled = 1;
}
}
