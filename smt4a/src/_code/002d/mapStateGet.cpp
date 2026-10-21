#include "common.h"
extern "C" {
extern struct { u8 unk00[0x40]; s8 state; } *g_mapMain;
/* Reads the current map state, or zero when the map is absent. */
s32 mapStateGet(void) {
    return g_mapMain != NULL ? g_mapMain->state : 0;
}
}
