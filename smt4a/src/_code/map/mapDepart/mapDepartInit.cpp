#include "gamedata/MapSaveBlockA.h"
#include "map/MapDepartJobWorkA.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "game/GameStateA.h"
#include "code/Code0015_Smt4a.h"

extern "C" {
extern MapDepart *g_mapDepart;
void mapDepartInitState(MapDepartJobWorkA *work, s32 savePoint);
s32 mapDepartUpdate(u32 process);
void mapDepartReleaseOnTaskEnd(u32 process);
s32 mapDepartSearch2dUpdate(u32 process);
s32 mapDepartSearch3dUpdate(u32 process);
void mapDepartSearch2dTaskEnd(u32 process);
void mapDepartSearch3dTaskEnd(u32 process);
s32 FUN_003581bc(u32 process);
s32 FUN_00480738(s32 category);
s32 gameFlagSumWeightedTiers(void);
u8 itemGetTable8Sub3Value(u32 id);


/* Past story stage 100 the request also carries the destination's state. */
static __inline void mapDepartCopyDestination(MapDepartJobWorkA *work, const MapDepartureRequestA *request)
{
    if (g_gameState.mapId >= 100) {
        work->destinationState[0] = request->destinationState[0];
        work->destinationState[1] = request->destinationState[1];
        work->destinationState[2] = request->destinationState[2];
        work->destinationState[3] = request->destinationState[3];
    }
}

/* The totals the caller worked out for the result screen. */
static __inline void mapDepartCopyTotals(MapDepartJobWorkA *work, const MapDepartureRequestA *request)
{
    work->totalValue = request->totalValue;
    work->categoryCounts[0] = request->categoryCounts[0];
    work->categoryCounts[1] = request->categoryCounts[1];
    work->categoryCounts[2] = request->categoryCounts[2];
    work->categoryCounts[3] = request->categoryCounts[3];
    work->categoryCounts[4] = request->categoryCounts[4];
}

/* Start a departure: allocate the job's block, fill it from the request (none: only save the map point)
 * and create the job with its three draw tasks. IV's MapDepart_Init. */
void mapDepartInit(const MapDepartureRequestA *request, u32 requestSize)
{
    s32 i;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapDepart.cpp", 331);
    g_mapDepart = (MapDepart *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(MapDepartJobWorkA), 1);
    MapDepartJobWorkA *work = (MapDepartJobWorkA *)g_mapDepart;
    MapSaveBlockA *location = gameFlagsGetBlock();
    if (request != NULL) {
        if (request->mode == MAP_DEPART_MODE_EXIT) {
            mapDepartInitState(work, 1);
            work->mode = MAP_DEPART_MODE_EXIT;
            work->map = request->map;
            location->departureMapId = request->map;
            work->unk0b0 = 0;
            work->completionFlag = 0;
            work->totalValue = gameFlagSumWeightedTiers();
            for (i = 0; i < MAP_DEPART_CATEGORY_COUNT; i++) {
                work->categoryCounts[i] = FUN_00480738((u8)(i + 1));
            }
            mapDepartCopyDestination(work, request);
            work->hasTotals = 0;
        } else if (request->mode == MAP_DEPART_MODE_ITEMS) {
            mapDepartInitState(work, 0);
            work->mode = MAP_DEPART_MODE_ITEMS;
            for (i = 0; i < MAP_DEPART_ITEM_COUNT; i++) {
                work->itemIds[i] = request->itemIds[i];
                work->itemCounts[i] = request->itemCounts[i];
                work->itemParams[i] = request->itemParams[i];
                if (itemGetTable8Sub3Value(work->itemIds[i]) != 0) {
                    work->flaggedItemCount++;
                }
            }
            work->unk0b0 = request->unk4C;
            work->completionFlag = 0;
            mapDepartCopyTotals(work, request);
            mapDepartCopyDestination(work, request);
            work->hasTotals = 0;
        } else if (request->mode == MAP_DEPART_MODE_ITEMS_PLAIN) {
            mapDepartInitState(work, 0);
            work->mode = MAP_DEPART_MODE_ITEMS_PLAIN;
            work->itemIds[0] = request->itemIds[0];
            work->itemCounts[0] = request->itemCounts[0];
            work->itemParams[0] = request->itemParams[0];
            work->itemIds[1] = request->itemIds[1];
            work->itemCounts[1] = request->itemCounts[1];
            work->itemParams[1] = request->itemParams[1];
            work->itemIds[2] = request->itemIds[2];
            work->itemCounts[2] = request->itemCounts[2];
            work->itemParams[2] = request->itemParams[2];
            work->itemIds[3] = request->itemIds[3];
            work->itemCounts[3] = request->itemCounts[3];
            work->itemParams[3] = request->itemParams[3];
            work->unk0b0 = 0;
            work->completionFlag = 0;
            work->flaggedItemCount = 0;
            mapDepartCopyDestination(work, request);
            work->hasTotals = 0;
            if (work->itemIds[0] == MAP_DEPART_TOTALS_ITEM) {
                mapDepartCopyTotals(work, request);
                work->hasTotals = 1;
            }
        } else if (request->mode == MAP_DEPART_MODE_ITEM_PAIR) {
            mapDepartInitState(work, 0);
            work->mode = MAP_DEPART_MODE_ITEM_PAIR;
            work->itemIds[0] = request->itemIds[0];
            work->itemCounts[0] = request->itemCounts[0];
            work->itemParams[0] = request->itemParams[0];
            work->itemIds[1] = request->itemIds[1];
            work->itemCounts[1] = request->itemCounts[1];
            work->itemParams[1] = request->itemParams[1];
            work->unk0b0 = 0;
            work->completionFlag = 0;
            work->flaggedItemCount = 0;
            work->hasTotals = 0;
        } else if (request->mode == MAP_DEPART_MODE_FLAG) {
            mapDepartInitState(work, 0);
            work->mode = MAP_DEPART_MODE_FLAG;
            work->unk0b0 = 0;
            work->completionFlag = request->completionFlag;
            work->flaggedItemCount = 0;
            work->hasTotals = 0;
        } else if (request->mode == MAP_DEPART_MODE_MONEY) {
            mapDepartInitState(work, 0);
            work->mode = MAP_DEPART_MODE_MONEY;
            work->unk0b0 = 0;
            work->money = request->money;
            work->hasTotals = 0;
        }
    } else {
        mapDepartInitState(work, 1);
    }
    work->prefix.freeOnEnd = 0;
    work->prefix.job = asdProcessCreateSimple((const s8 *)"DEPART C", 4, 0, 0, mapDepartUpdate, mapDepartReleaseOnTaskEnd, NULL);
    taskCreateDraw((const s8 *)"SEARCH3D", 113, 0, 0, mapDepartSearch3dUpdate, mapDepartSearch3dTaskEnd, 0, (void *)work->prefix.job);
    taskCreateDraw((const s8 *)"SEARCH2D", 117, 0, 0, mapDepartSearch2dUpdate, mapDepartSearch2dTaskEnd, 0, (void *)work->prefix.job);
    taskCreateDraw((const s8 *)"SEARCH2D_D", 234, 0, 0, FUN_003581bc, NULL, 0, (void *)work->prefix.job);
}
}
