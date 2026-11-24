/* NON_MATCHING: 94 lines: the begin decision is written once and inlined in both arms (retail duplicates it,
 * re-testing the kind of path it takes), but retail loads the mask words with two ldr where the build uses ldm,
 * materialises 1 and 2 before the first test and lays the unforced arm out after the forced one. */
#include "battle/btlMain.h"
#include "gamedata/GameFlags.h"
#include "battle/btlGameOver.h"

static inline bool gameOverMaskMatches(u64 flags, const u32 mask[2])
{
    return (flags & ((u64)mask[0] | ((u64)mask[1] << 32))) != 0;
}

extern "C" {
extern BtlGameOverGlobalsA g_gameOverJobRecord;
void btlGameOverCreateJobs();
s32 gameFlagIsSet(u32 flag);
s32 gameDataFlagTestBit(u32 flag);

void btlCreateGameOverJobs(BtlMainStateA *state);

/* The game-over sequence's work: the reset byte extends beyond the shared sequence prefix. */
struct GameOverSequenceView {
    BtlGameOverSequence sequence;
    u8 unk18[0xd];
    u8 reset;
};
typedef char GameOverSequenceResetOffset[offsetof(GameOverSequenceView, reset) == 0x25 ? 1 : -1];

/* Starts the game-over sequence: the continue path when flag 0x1fc or data flag 0x80 is set (clearing the 0x1fe
 * request with it), else the normal game-over jobs. */
static __inline bool gameOverBegin(BtlMainStateA *state, GameOverSequenceView *work)
{
    if (gameFlagIsSet(0x1fc) || gameDataFlagTestBit(0x80)) {
        if (gameFlagIsSet(0x1fe)) {
            gameFlagSetValue(0x1fe, 0, 1);
            gameFlagSetValue(0x1fc, 0, 1);
        }
        work->sequence.mode = 2;
        work->reset = 0;
        work->sequence.state = 2;
        work->sequence.phase = 0;
        state->jobB = work->sequence.unk00;
        return true;
    }
    work->sequence.mode = 1;
    if (state == NULL) {
        return false;
    }
    btlCreateGameOverJobs(state);
    work->sequence.job = state->jobB;
    work->sequence.state = 0;
    work->sequence.phase = 0;
    return true;
}

/* Decides how the battle ends: a forced game over, or one the blocking states allow, begins the game-over sequence;
 * otherwise the sequence goes to state 3. */
void FUN_0031cd00(BtlMainStateA *state)
{
    btlGameOverCreateJobs();
    GameOverSequenceView *work = reinterpret_cast<GameOverSequenceView *>(g_gameOverJobRecord.state);
    if (state->commandFilter.mode == 2) {
        if (gameOverMaskMatches(state->markerMasks.bits, g_gameOverJobRecord.forcedStates)) {
            if (gameOverBegin(state, work)) {
                return;
            }
        } else if (!gameOverMaskMatches(state->stateFlags64.bits, g_gameOverJobRecord.blockedStates) &&
            !gameOverMaskMatches(state->stateFlags64.bits, g_gameOverJobRecord.blockedTransitions)) {
            if (gameOverBegin(state, work)) {
                return;
            }
        }
    }
    work->sequence.state = 3;
    work->sequence.phase = 0;
}
}
