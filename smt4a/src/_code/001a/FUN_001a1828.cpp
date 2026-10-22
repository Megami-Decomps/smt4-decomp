#include "shard/GlobalBlocks.h"

/* A locked state retains its current byte value. */
extern "C" void FUN_001a1828(ConditionalByteState *state, u8 value)
{
    if (state->locked == 0) {
        state->value = value;
    }
}
