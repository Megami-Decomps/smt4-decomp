/* NON_MATCHING: shared destination-copy block is placed after the first mode rather than the third, and the allocated-work global store uses different registers. */
#include "map/mapDepart.h"
#include "shard/SaveWork.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdDebug.h"

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
struct MapDepartureRequest {
    s32 mode;
    s32 map;
    s32 entry;
    u32 unk0C;
    u32 destinationState[4];
};
struct MapDepartureLocationView {
    u8 prefix[0x24];
    s32 map;
};
typedef char MapDepartureInitLayout[sizeof(MapDepartureInitView) == 0x80 &&
    offsetof(MapDepartureInitView, mode) == 0xC && offsetof(MapDepartureInitView, destinationState) == 0x48 ? 1 : -1];

extern "C" {
extern MapDepart *g_mapDepart;
extern GameState g_gameState;
SaveWork *gameGetMapBlock(void);
void *asdMemAlloc(s32 heap, s32 category, s32 flags, u32 bytes, s32 count);
void MapDepart_InitState(MapDepart *work, s32 enabled);
s32 FUN_001e553c(u32 process);
void mapDepartEnable(u32 process);
s32 scrCommWaitStateAction(u32 process);
void FUN_002f4b30(u32 process);
s32 FUN_002ca09c(u32 process);
void FUN_002f4b2c(u32 process);
u32 asdProcessCreateSimple(const s8 *name, s32 group, u16 firstDelay, u16 lastDelay,
    AsdProcUpdateFunc update, AsdProcFunc end, void *work);
u32 taskCreateDraw(const s8 *name, s32 priority, u16 firstDelay, u16 lastDelay,
    AsdProcUpdateFunc update, AsdProcFunc end, void *work, u32 parent);

void MapDepart_Init(const MapDepartureRequest *request)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\map\\mapDepart.cpp", 173);
    MapDepartureInitView *work = (MapDepartureInitView *)asdMemAlloc(0x100, 0x100, 0, sizeof(MapDepartureInitView), 1);
    g_mapDepart = &work->prefix;
    MapDepartureLocationView *location = (MapDepartureLocationView *)gameGetMapBlock();
    if (request != NULL) {
        switch (request->mode) {
        case 0:
            MapDepart_InitState(&work->prefix, 1);
            work->mode = 0;
            work->map = request->map;
            location->map = request->map;
            if (g_gameState.unk000 >= 100) {
                work->destinationState[0] = request->destinationState[0];
                work->destinationState[1] = request->destinationState[1];
                work->destinationState[2] = request->destinationState[2];
                work->destinationState[3] = request->destinationState[3];
            }
            break;
        case 1:
            MapDepart_InitState(&work->prefix, 0);
            work->mode = 1;
            work->entry = request->entry;
            if (g_gameState.unk000 >= 100) {
                work->destinationState[0] = request->destinationState[0];
                work->destinationState[1] = request->destinationState[1];
                work->destinationState[2] = request->destinationState[2];
                work->destinationState[3] = request->destinationState[3];
            }
            break;
        case 2:
            MapDepart_InitState(&work->prefix, 0);
            work->mode = 2;
            work->entry = request->entry;
            if (g_gameState.unk000 >= 100) {
                work->destinationState[0] = request->destinationState[0];
                work->destinationState[1] = request->destinationState[1];
                work->destinationState[2] = request->destinationState[2];
                work->destinationState[3] = request->destinationState[3];
            }
            break;
        }
    } else {
        MapDepart_InitState(&work->prefix, 1);
    }
    work->prefix.freeOnEnd = 0;
    work->prefix.job = asdProcessCreateSimple((const s8 *)"DEPART C", 2, 0, 0,
        FUN_001e553c, mapDepartEnable, NULL);
    taskCreateDraw((const s8 *)"SEARCH3D", 111, 0, 0, scrCommWaitStateAction, FUN_002f4b30, NULL, work->prefix.job);
    taskCreateDraw((const s8 *)"SEARCH2D", 115, 0, 0, FUN_002ca09c, FUN_002f4b2c, NULL, work->prefix.job);
}
}
