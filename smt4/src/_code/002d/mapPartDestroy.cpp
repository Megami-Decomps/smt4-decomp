#include "common.h"

namespace { struct MapPart { u8 active; u8 padding[0x1b]; u32 model; }; struct MapState { u8 padding[0xcbf0]; MapPart part; }; }

extern "C" {
/* Reads or updates the requested task state. */
extern MapState *g_mapIf;
void asdMdlManagerDestroy(u32 model);
void mapPartDestroy(void)
{
    MapPart *part = &g_mapIf->part;
    asdMdlManagerDestroy(part->model);
    part->model = 0;
    part->active = 0;
}
}
