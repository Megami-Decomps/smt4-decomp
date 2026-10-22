/* NON_MATCHING: The destination/current-map comparison operands are allocated to opposite registers. */
#include "gamedata/NaviDestinationRecord.h"
#include "shard/NaviMain.h"
#include "map/mapDepart.h"
extern "C" {
const u8* gameFlagsGetWord1590Ptr(u32);
const NaviDestinationRecord* dataTableGetEntry49(u8);
void pair20638Set(NaviTransitionState*, s32, s32, s32);
void menuEnterState11(NaviTransitionState*);
void FUN_0048d248(NaviTransitionState*, s32);
extern NaviMainA* g_naviMain;
extern GameStateA g_gameState;

void FUN_003a35a4(void)
{
    const u8* destinationId = gameFlagsGetWord1590Ptr(0);
    if (destinationId == NULL) {
        return;
    }
    const NaviDestinationRecord* destination = dataTableGetEntry49(*destinationId);
    NaviMainA* main = g_naviMain;
    NaviMapRequest request = {destination->mapId, destination->unk30, destination->unk32};
    main->mapRequest = request;
    pair20638Set(&main->transition, destination->unk32, destination->unk34, destination->unk36);
    if ((u32)destination->mapId != main->currentMap) {
        menuEnterState11(&main->transition);
    } else {
        g_gameState.navigation.naviMapPending = 1;
        FUN_0048d248(&main->transition, destination->unk32);
    }
}
}
