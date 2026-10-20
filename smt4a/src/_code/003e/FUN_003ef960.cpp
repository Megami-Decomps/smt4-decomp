#include "shard/Shard003E.h"

extern "C" {

extern void FUN_001a6f60(void *p);

void FUN_003ef960(BtlStateB *state)
{
    if (state->unk2270 != NULL) {
        FUN_001a6f60(state->unk2270);
    }
}

} /* extern "C" */
