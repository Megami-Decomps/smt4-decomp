#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Restores the IMA ADPCM predictor and step-table index. */
void ImaAdpcmSetContext(ImaAdpcmState *state, const ImaAdpcmContext *context)
{
    state->stepIndex = context->stepIndex;
    u16 raw = context->predictor;
    state->predictor = (s16)raw;
}

} /* extern "C" */
