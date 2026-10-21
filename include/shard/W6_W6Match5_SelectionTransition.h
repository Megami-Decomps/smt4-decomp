#ifndef SHARD_W6_W6MATCH5_SELECTIONTRANSITION_H
#define SHARD_W6_W6MATCH5_SELECTIONTRANSITION_H

#include "shard/W6_W6Match5_QueuedRequest.h"

struct TransitionResource;
struct TransitionResourceVtable {
    void (*unk00)(TransitionResource *);
    void (*release)(TransitionResource *); // 0x04
};
struct TransitionResource {
    TransitionResourceVtable *vtable;
};
struct SelectionTransition {
    u32 unk000;
    s32 state; // 0x004
    s32 progress; // 0x008
    u8 unk00c[0x1fc];
    TransitionResource *resource; // 0x208
    u8 unk20c[0x18];
    RequestParameters parameters; // 0x224
};

#endif
