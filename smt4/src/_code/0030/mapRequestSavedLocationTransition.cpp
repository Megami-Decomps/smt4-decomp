#include "map/mapDepart.h"

struct TransitionLocation {
    s16 mapId;
    s16 entryId;
};

extern "C" {
extern GameState g_gameState;
void *jyoucyuGetTableEntry(s32);
s32 gameStateIsFlagSetAndLarge(void);
void asdSequenceRequest(s32, const void *, u32);

// Request the map transition associated with the current game-state location.
u32 mapRequestSavedLocationTransition(void)
{
    jyoucyuGetTableEntry(0);
    if (gameStateIsFlagSetAndLarge()) {
        TransitionLocation location;
        location.mapId = g_gameState.savedMapId - 200;
        location.entryId = g_gameState.savedAreaId;
        asdSequenceRequest(0xe, &location, sizeof(location));
    }
    return 1;
}
}
