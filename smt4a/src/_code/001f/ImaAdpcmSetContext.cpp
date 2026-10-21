/* NON_MATCHING: instruction selection/order differs: retail ldrh r1, [r1, #2]; compiler ldrsh r1, [r1, #2]. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Restores the IMA ADPCM predictor and step-table index. */
void ImaAdpcmSetContext(ImaAdpcmState *state, const ImaAdpcmContext *context)
{
    state->stepIndex = context->stepIndex;
    state->predictor = context->predictor;
}

} /* extern "C" */
