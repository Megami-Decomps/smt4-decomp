/* NON_MATCHING: compiler schedules address formation, prologue and conditional return differently from retail. */
#include "common.h"
namespace { struct Map { u8 padding[0xcbd0]; u8 active; u8 reserved[0x1b]; u32 manager; }; }
extern "C" {
extern Map *g_mapIf;
void asdMdlManagerDestroy(u32 manager);
void asdTMTexTableReleaseNode(u32 table, u32 index);
void FUN_002dfea4(void)
{
    Map *map = g_mapIf;
    asdMdlManagerDestroy(map->manager);
    map->manager = 0;
    map->active = 0;
    asdTMTexTableReleaseNode(10, 37);
}
}
