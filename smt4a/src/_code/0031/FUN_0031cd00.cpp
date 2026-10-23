/* NON_MATCHING: common forced/normal game-over decision is merged and retail's post-dereference null guard is omitted. */
#include "battle/btlMain.h"
#include "battle/btlGameOver.h"

static inline bool gameOverMaskMatches(u64 flags, const u32 mask[2])
{
    return (flags & ((u64)mask[0] | ((u64)mask[1] << 32))) != 0;
}

extern "C" {
extern BtlGameOverGlobalsA DAT_0057f678;
void FUN_00231464();
s32 gameFlagIsSet(u32 flag);
s32 gameDataFlagTestBit(u32 flag);
void gameFlagSetValue(u32 flag, u32 value, u32 width);
void btlCreateGameOverJobs(BtlMainStateA *state);

void FUN_0031cd00(BtlMainStateA *state)
{
    // The reset byte extends beyond the shared sequence prefix.
    struct SequenceView {
        BtlGameOverSequence sequence;
        u8 unk18[0xd];
        u8 reset;
    };
    typedef char SequenceResetOffset[offsetof(SequenceView, reset) == 0x25 ? 1 : -1];
    FUN_00231464();
    SequenceView *work = reinterpret_cast<SequenceView *>(DAT_0057f678.state);
    if (state->commandFilter.mode != 2 ||
        (!gameOverMaskMatches(state->markerMasks.bits, DAT_0057f678.forcedStates) &&
         (gameOverMaskMatches(state->stateFlags64.bits, DAT_0057f678.blockedStates) ||
          gameOverMaskMatches(state->stateFlags64.bits, DAT_0057f678.blockedTransitions)))) {
        work->sequence.state = 3;
        work->sequence.phase = 0;
        return;
    }
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
    } else {
        work->sequence.mode = 1;
        btlCreateGameOverJobs(state);
        work->sequence.job = state->jobB;
        work->sequence.state = 0;
        work->sequence.phase = 0;
    }
}
}
