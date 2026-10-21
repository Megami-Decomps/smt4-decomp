#include "common.h"

struct TransitionGameState {
    u8 unk000[0x2fc];
    s32 mapId; // 0x2fc
    s32 entryId; // 0x300
};
struct TransitionLocation {
    s16 mapId;
    s16 entryId;
};

extern "C" {
extern TransitionGameState g_gameState;
void *jyoucyuGetTableEntry(s32);
s32 gameStateIsFlagSetAndLarge(void);
void asdSequenceRequest(s32, const void *, u32);

// Request the map transition associated with the current game-state location.
u32 FUN_0030a948(void)
{
    jyoucyuGetTableEntry(0);
    if (gameStateIsFlagSetAndLarge()) {
        TransitionLocation location;
        location.mapId = g_gameState.mapId - 200;
        location.entryId = g_gameState.entryId;
        asdSequenceRequest(0xe, &location, sizeof(location));
    }
    return 1;
}
}
