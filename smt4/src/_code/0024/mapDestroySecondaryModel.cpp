#include "common.h"
extern "C" {
struct MapModelBlock { u8 active; u8 unk01[0x1B]; u32 model; };
struct MapModelOwner { u8 unk00[0xCC30]; MapModelBlock block; };
extern MapModelOwner *g_mapIf;
void asdMdlManagerDestroy(u32 model);
/* Destroy the map model and clear its active state. */
void mapDestroySecondaryModel(void) { MapModelBlock *block=&g_mapIf->block; asdMdlManagerDestroy(block->model); block->model=0; block->active=0; }
}
