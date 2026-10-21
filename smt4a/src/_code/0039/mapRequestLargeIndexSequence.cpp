#include "map/mapDepart.h"

struct SequenceFourteenArgument {
    s16 index; // 0x00
    s16 parameter; // 0x02
};

extern "C" {
extern GameStateA g_gameState;
void *jyoucyuGetTableEntry(u32 index);
bool gameStateIsFlagSetAndLarge(void);
void asdSequenceRequest(s32 state, const void *argument, u32 argumentSize);

// Request sequence fourteen using the active large-index game state.
u32 mapRequestLargeIndexSequence(void)
{
    jyoucyuGetTableEntry(0);
    if (gameStateIsFlagSetAndLarge()) {
        SequenceFourteenArgument argument;
        argument.index = g_gameState.unk578 - 200;
        argument.parameter = g_gameState.unk57c;
        asdSequenceRequest(14, &argument, sizeof(argument));
    }
    return 1;
}
}
