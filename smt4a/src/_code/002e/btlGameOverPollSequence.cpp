#include "battle/btlGameOver.h"

extern "C" {
extern BtlGameOverSequence *DAT_0057f678;
s32 jobIsValid(u32 job);
s32 FUN_004cef24(BtlGameOverSequence *sequence);
u32 btlGameOverRunEyeSequence(BtlGameOverSequence *sequence);

/* Dispatches the game-over sequence and reports completion after its owner job stops. */
s32 btlGameOverPollSequence(void)
{
    BtlGameOverSequence *sequence = DAT_0057f678;
    if (sequence == NULL) {
        return 0;
    }
    switch (sequence->state) {
    case 0:
        if (jobIsValid(sequence->job)) {
            return 0;
        }
        sequence->phase = 0;
        sequence->state = 3;
        return 0;
    case 1:
        return FUN_004cef24(sequence);
    case 2:
        return btlGameOverRunEyeSequence(sequence);
    case 3:
        return -1;
    }
    return 0;
}
}
