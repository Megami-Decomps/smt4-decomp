/* NON_MATCHING: map registration initialization and process-argument scheduling differ. */
#include "map/mapMain.h"
#include "map/mapDepart.h"
#include "shard/SaveWork.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemAlloc.h"

namespace {
/* This initialization view avoids increasing alignment of MapMain's byte padding at 0x0D. */
struct MapMainInitializationView {
    u32 job, drawJob, unk08;
    u8 freeOnEnd, startupFlags[8], unk15[3];
    u32 counter18;
    u8 transitionFlags[5], unk21[3];
    u32 counter24, counter28, mapId, areaId, counter34;
    u8 unk38[4], flag3C, flag3D, unk3E[2];
    u32 tint;
    u8 unk44[2], flag46, enabled, flag48, unk49[0x5F];
    u32 messageId, messageState;
    u8 unkB0[4];
    u32 counterB4;
    u8 messageFlags[2], unkBA[0xA];
    s32 scriptState;
};
typedef char MapMainInitializationOffsets[sizeof(MapMainInitializationView) == sizeof(MapMain) &&
    offsetof(MapMainInitializationView, startupFlags) == 0xD &&
    offsetof(MapMainInitializationView, messageId) == 0xA8 &&
    offsetof(MapMainInitializationView, scriptState) == 0xC4 ? 1 : -1];
}

extern "C" {
extern MapMain *g_mapMain;
extern GameState g_gameState;
SaveWork *gameGetMapBlock(void);
void FUN_00280ac0(s32 mode);
void MapEpl_InitState(void);
void FUN_001b4764(void);
void FUN_001b3da4(void);
void FUN_00192420(void);
void mapDepartResetWork(void);
void mapObjResetSlots(void);
void mapGimicClearAll(void);
s32 FUN_001b7f78(u32 job);
void mapMainRequest(u32 job);
void FUN_001e9508(u32 job);
void FUN_002ca6dc(u32 job);
u32 taskCreateDraw(const char *name, s32 group, s32 priority, s32 flags,
                   AsdProcFunc draw, AsdProcFunc request, u32 data, u32 parent);

void MapMain_Register(void)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\map\\mapMain.cpp", 392);
    g_mapMain = static_cast<MapMain *>(asdMemAlloc(0x100, 0x100, 0, sizeof(MapMain), 1));
    MapMainInitializationView *map = reinterpret_cast<MapMainInitializationView *>(g_mapMain);
    SaveWork *save = gameGetMapBlock();
    FUN_00280ac0(1);
    map->startupFlags[0] = 0;
    map->startupFlags[1] = 0;
    map->startupFlags[2] = 0;
    map->startupFlags[3] = 0;
    map->startupFlags[4] = 0;
    map->startupFlags[5] = 0;
    map->startupFlags[6] = 0;
    map->startupFlags[7] = 0;
    map->counter18 = 0;
    map->transitionFlags[0] = 0;
    map->transitionFlags[1] = 0;
    map->transitionFlags[2] = 0;
    map->transitionFlags[3] = 0;
    map->transitionFlags[4] = 0;
    map->flag3D = 0;
    map->tint = 0;
    map->counter24 = 0;
    map->counter28 = 0;
    map->mapId = 1;
    map->counter34 = 0;
    map->areaId = 1;
    map->flag3C = 0;
    map->enabled = 1;
    map->flag48 = 0;
    map->flag46 = 0;
    MapEpl_InitState();
    FUN_001b4764();
    FUN_001b3da4();
    FUN_00192420();
    mapDepartResetWork();
    mapObjResetSlots();
    mapGimicClearAll();
    map->messageId = 0x1C2;
    map->messageState = 0;
    map->counterB4 = 0;
    map->messageFlags[0] = 0;
    map->messageFlags[1] = 0;
    g_gameState.mapRegistration.pending = 0;
    save->mapRegistration.pending = 0;
    map->scriptState = 0;
    map->freeOnEnd = 0;
    u32 job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("MAP C"), 2, 0, 0, FUN_001b7f78, mapMainRequest, 0);
    map->job = job;
    map->drawJob = taskCreateDraw("MAP U", 0x6F, 0, 0, FUN_001e9508, FUN_002ca6dc, 0, job);
}
}
