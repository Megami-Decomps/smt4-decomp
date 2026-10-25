/* NON_MATCHING: battle-mask word addressing uses literal offsets instead of retail paired loads, and dispatch blocks are merged. */
#include "battle/btlGameOver.h"
#include "shard/JobWork.h"

// Apocalypse's owning battle work extends past the shared game-over work prefix.
struct GameOverBattleWorkA {
    u8 unk0000[0x4c];
    u32 job; // 0x004c
    u8 unk0050[0x58];
    s32 mode; // 0x00a8
    u8 unk00ac[0x44f4];
    u32 states[2]; // 0x45a0
    u32 transitions[2]; // 0x45a8
};
extern "C" {
extern BtlGameOverGlobalsA g_btlGameOver;
s32 asdProcessGetFrames(u32 job);
s32 FUN_003e6f50(BtlGameOverA *state);

// Advance the saturated game-over timer and dispatch once battle flags permit it.
s32 FUN_002dedf0(u32 job)
{
    GameOverBattleWorkA *work = (GameOverBattleWorkA *)jobGetWork(job);
    BtlGameOverA *state = g_btlGameOver.state;
    if (state == NULL)
        return 0;
    if (++state->timing.frameCounter >= 0x10000)
        state->timing.frameCounter = 0xffff;
    if (work->mode == 2) {
        if ((work->transitions[1] & g_btlGameOver.forcedStates[1]) |
            (work->transitions[0] & g_btlGameOver.forcedStates[0]))
            return FUN_003e6f50(state);
        if (((work->states[1] & g_btlGameOver.blockedStates[1]) |
             (work->states[0] & g_btlGameOver.blockedStates[0])) == 0 &&
            ((work->states[1] & g_btlGameOver.blockedTransitions[1]) |
             (work->states[0] & g_btlGameOver.blockedTransitions[0])) == 0)
            return FUN_003e6f50(state);
    }
    return asdProcessGetFrames(work->job) ? -1 : 0;
}
}
