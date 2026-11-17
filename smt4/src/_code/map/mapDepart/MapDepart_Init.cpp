#include "map/mapDepart.h"
#include "shard/SaveWork.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "map/MapSceneAccess.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "game/GameState.h"

// The allocated departure work extends the public prefix.  SaveWork's word at
// 0x24 lies inside two-byte-aligned padding, so neither shared layout is enlarged.
struct MapDepartureInitView {
    MapDepart prefix;
    s32 mode;
    s32 map;
    s32 entry;
    u8 unk18[0x30];
    u32 destinationState[4];
    u8 unk58[0x28];
};

struct MapDepartureLocationView {
    u8 prefix[0x24];
    s32 map;
};
typedef char MapDepartureInitLayout[sizeof(MapDepartureInitView) == 0x80 &&
    offsetof(MapDepartureInitView, mode) == 0xC && offsetof(MapDepartureInitView, destinationState) == 0x48 ? 1 : -1];

extern "C" {
extern MapDepart *g_mapDepart;
s32 FUN_001e553c(u32 process);
void mapDepartEnable(u32 process);
s32 scrCommWaitStateAction(u32 process);
void FUN_002f4b30(u32 process);
s32 FUN_002ca09c(u32 process);
void FUN_002f4b2c(u32 process);
u32 taskCreateDraw(const s8 *name, s32 priority, u16 firstDelay, u16 lastDelay,
    AsdProcUpdateFunc update, AsdProcFunc end, void *work, u32 parent);

/* Past story stage 100 the request also carries the destination's state. */
static __inline void mapDepartCopyDestination(MapDepartureInitView *work, const MapDepartureRequest *request)
{
    if (g_gameState.mapId >= 100) {
        work->destinationState[0] = request->destinationState[0];
        work->destinationState[1] = request->destinationState[1];
        work->destinationState[2] = request->destinationState[2];
        work->destinationState[3] = request->destinationState[3];
    }
}

void MapDepart_Init(const MapDepartureRequest *request, u32 requestSize)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\map\\mapDepart.cpp", 173);
    g_mapDepart = static_cast<MapDepart *>(asdMemAlloc(0x100, 0x100, 0, sizeof(MapDepartureInitView), 1));
    MapDepartureInitView *work = reinterpret_cast<MapDepartureInitView *>(g_mapDepart);
    MapDepartureLocationView *location = (MapDepartureLocationView *)gameGetMapBlock();
    if (request != NULL) {
        if (request->mode == 0) {
            MapDepart_InitState(&work->prefix, 1);
            work->mode = 0;
            work->map = request->map;
            location->map = request->map;
            mapDepartCopyDestination(work, request);
        } else if (request->mode == 1) {
            MapDepart_InitState(&work->prefix, 0);
            work->mode = 1;
            work->entry = request->entry;
            mapDepartCopyDestination(work, request);
        } else if (request->mode == 2) {
            MapDepart_InitState(&work->prefix, 0);
            work->mode = 2;
            work->entry = request->entry;
            mapDepartCopyDestination(work, request);
        }
    } else {
        MapDepart_InitState(&work->prefix, 1);
    }
    work->prefix.freeOnEnd = 0;
    work->prefix.job = asdProcessCreateSimple((const s8 *)"DEPART C", 2, 0, 0, FUN_001e553c, mapDepartEnable, NULL);
    taskCreateDraw((const s8 *)"SEARCH3D", 111, 0, 0, scrCommWaitStateAction, FUN_002f4b30, NULL, work->prefix.job);
    taskCreateDraw((const s8 *)"SEARCH2D", 115, 0, 0, FUN_002ca09c, FUN_002f4b2c, NULL, work->prefix.job);
}
}
