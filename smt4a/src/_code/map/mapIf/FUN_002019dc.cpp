/* NON_MATCHING: only the three corner-quad tables differ: retail walks base, base+1584, base+1584*2 chained from one pointer and orders the stores differently; here each table is addressed from the global with its own offset. */
#include "map/MapIfGlobals.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

struct MapIfVec3 {
    f32 x, y, z;
};

/* A quad drawn as a triangle strip. */
struct MapIfQuad {
    MapIfVec3 corner[4];
};

extern "C" {
u32 taskCreateDraw(const char *name, s32 priority, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc update, AsdProcFunc destroy, u32 work, u32 parent);
void mapIfResetRecords(void);
s32 FUN_00226538(u32 handle);
void mapIfFree(u32 handle);
s32 FUN_0029d760(u32 handle);
s32 FUN_00315d34(u32 handle);
s32 mapIfDrawWorldIndicators(u32 handle);

extern const char DAT_00201a50[];
extern MapIfQuad DAT_006087e4[3][33];

/* Creates the map interface: its work block, the three tasks and the corner quads of the indicators. */
void FUN_002019dc(u32 parent, u8 mode)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapIf.cpp", 987);
    g_mapIf.state = (MapIfStateA *)asdMemoryAllocTracked(0x100, 0x100, 0, 0xCD30, 1);
    MapIfStateA *mapIf = g_mapIf.state;
    mapIf->unk14 = 0;
    mapIf->unk16 = 0;
    mapIf->unk18 = 0;
    mapIf->dialogOpen = 0;
    mapIf->unk20 = 0;
    mapIf->unk24 = 0;
    mapIf->unk34 = 0;
    mapIf->unk38 = 0;
    mapIf->unk3C = 0;
    mapIf->unk40 = 0;
    mapIf->unk44 = 0;
    mapIf->slots[0].active = 0;
    mapIf->notice.state = 0;
    mapIf->notice.frame = 0;
    mapIf->fade.active = 0;
    mapIf->fade.offset[0] = 0.0f;
    mapIf->fade.offset[1] = 0.0f;
    mapIf->fade.offset[2] = 0.0f;
    mapIf->unkCD08 = 0;
    mapIf->unkCD10 = 0;
    mapIf->unkCD14 = 0;
    mapIf->fadeProgress = 0.0f;
    mapIf->fadeMode = 0;
    mapIf->unkCD20 = -40.0f;
    mapIf->unkCD24 = 195.0f;
    mapIf->fadeStep = 0;
    mapIf->fadeTimer = 0;
    mapIf->job = taskCreateDraw("MAPIF C", 4, 0, 0, FUN_00226538, mapIfFree, NULL, parent);
    mapIf->updateTask = taskCreateDraw("MAPIF U", 117, 0, 0, FUN_0029d760, NULL, NULL, mapIf->job);
    taskCreateDraw("MAP FADE", 138, 0, 0, FUN_00315d34, NULL, NULL, mapIf->job);
    mapIf->indicatorTask = taskCreateDraw("MIF3DL", 113, 0, 0, mapIfDrawWorldIndicators, NULL, NULL, mapIf->job);

    MapIfQuad *quads = DAT_006087e4[0];
    quads[0].corner[0].x = -64.0f;
    quads[0].corner[0].y = 16.0f;
    quads[0].corner[0].z = 0.0f;
    quads[0].corner[1].x = -64.0f;
    quads[0].corner[1].y = -16.0f;
    quads[0].corner[1].z = 0.0f;
    quads[0].corner[2].x = 64.0f;
    quads[0].corner[2].y = 16.0f;
    quads[0].corner[2].z = 0.0f;
    quads[0].corner[3].x = 64.0f;
    quads[0].corner[3].y = -16.0f;
    quads[0].corner[3].z = 0.0f;
    quads[33].corner[0].x = -64.0f;
    quads[33].corner[0].y = 0.0f;
    quads[33].corner[0].z = 16.0f;
    quads[33].corner[1].x = -64.0f;
    quads[33].corner[1].y = 0.0f;
    quads[33].corner[1].z = -16.0f;
    quads[33].corner[2].x = 64.0f;
    quads[33].corner[2].y = 0.0f;
    quads[33].corner[2].z = 16.0f;
    quads[33].corner[3].x = 64.0f;
    quads[33].corner[3].y = 0.0f;
    quads[33].corner[3].z = -16.0f;
    quads[66].corner[0].x = -64.0f;
    quads[66].corner[0].y = 0.0f;
    quads[66].corner[0].z = -16.0f;
    quads[66].corner[1].x = -64.0f;
    quads[66].corner[1].y = 0.0f;
    quads[66].corner[1].z = 16.0f;
    quads[66].corner[2].x = 64.0f;
    quads[66].corner[2].y = 0.0f;
    quads[66].corner[2].z = -16.0f;
    quads[66].corner[3].x = 64.0f;
    quads[66].corner[3].y = 0.0f;
    quads[66].corner[3].z = 16.0f;
    mapIf->mode = mode;
    mapIfResetRecords();
}

}
