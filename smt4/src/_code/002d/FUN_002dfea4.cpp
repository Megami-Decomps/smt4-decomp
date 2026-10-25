#include "common.h"
namespace {
struct MapState { u8 active; u8 reserved[0x1b]; u32 manager; };
struct Map { u8 padding[0xcbd0]; MapState state; };
}
extern "C" {
extern Map *g_mapIf;
void asdMdlManagerDestroy(u32 manager);
void asdTMTexTableReleaseNode(u32 table, u32 index);
void FUN_002dfea4(void)
{
    MapState *state = &g_mapIf->state;
    asdMdlManagerDestroy(state->manager);
    state->manager = 0;
    state->active = 0;
    asdTMTexTableReleaseNode(10, 37);
}
}
