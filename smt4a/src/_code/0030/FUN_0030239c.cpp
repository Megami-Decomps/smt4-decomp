/* NON_MATCHING: Thumb flag/reference registers and repeated subobject address formation differ. */
#include "common.h"

struct SharedReference;
struct RefRequestState {
    u8 unk000[0x3c];
    u16 flags; // 0x03c
    u8 unk03e[0xda];
    u32 owner; // 0x118
    u32 argument; // 0x11c
    u16 firstCounter; // 0x120
    u16 secondCounter; // 0x122
    u32 unk124;
    u32 firstPair[2]; // 0x128
    u8 ready; // 0x130
    u8 pending; // 0x131
    u8 unk132[2];
    u32 progress; // 0x134
    u8 status; // 0x138
    u8 unk139[7];
    u32 secondPair[2]; // 0x140
    u32 extra; // 0x148
};

extern "C" {
SharedReference *sharedRefAddRef(SharedReference *);
u32 FUN_002ece58(RefRequestState *, SharedReference *);

void FUN_0030239c(RefRequestState *state, u32 argument, u16 lowFlags, u16 highFlags,
                  SharedReference *reference, u32 extra, u32 owner)
{
    state->flags |= (lowFlags & 0x0f) | (highFlags & 0xfff0);
    state->firstCounter = 0;
    state->secondCounter = 0;
    state->secondPair[0] = 0;
    state->secondPair[1] = 0;
    state->firstPair[0] = 0;
    state->firstPair[1] = 0;
    state->argument = argument;
    state->extra = extra;
    if (reference != NULL)
        FUN_002ece58(state, sharedRefAddRef(reference));
    state->owner = owner;
    state->ready = 0;
    state->progress = 0;
    state->pending = 0;
    state->status = 0;
}
}
