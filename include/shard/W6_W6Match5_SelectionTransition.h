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
    union {
        u8 unk00c[0x1fc];
        /* 0x00C */ s32 timer;
    };
    TransitionResource *resource; // 0x208
    union {
        u8 unk20c[0x18];
        struct {
            u8 unk20C[4];
            RequestParameters result; // 0x210
        } query;
    };
    RequestParameters parameters; // 0x224
};
typedef char SelectionTransitionResultOffsetCheck[
    __INTADDR__(&((SelectionTransition *)0)->query.result) == 0x210 &&
    __INTADDR__(&((SelectionTransition *)0)->parameters) == 0x224 &&
    sizeof(SelectionTransition) == 0x238 ? 1 : -1];
typedef char SelectionTransitionTimerOffsetCheck[
    __INTADDR__(&((SelectionTransition *)0)->timer) == 0xC &&
    sizeof(SelectionTransition) == 0x238 ? 1 : -1];

#endif
