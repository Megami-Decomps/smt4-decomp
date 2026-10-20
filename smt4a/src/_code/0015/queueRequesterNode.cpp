/* NON_MATCHING: register allocation only: retail keeps channel in r6 and the queue in r5 (the build swaps them) and schedules mov r1,r0 after the stores */
#include "common.h"

extern "C" {

struct Requester0015e068;

typedef struct RequesterVtbl0015e068 {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void *unk04;
    /* 0x08 */ s32 (*accepts)(struct Requester0015e068 *self);
} RequesterVtbl0015e068;

typedef struct Requester0015e068 {
    /* 0x00 */ RequesterVtbl0015e068 *vtbl;
} Requester0015e068;

typedef struct QueueNode0015e068 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[7];
    /* 0x0c */ u32 stamp;
    /* 0x10 */ u8 channel;
    /* 0x11 */ u8 unk11[3];
    /* 0x14 */ Requester0015e068 *requester;
} QueueNode0015e068;

typedef struct Queue0015e068 {
    /* 0x000 */ u8 unk000[0x184];
    /* 0x184 */ u32 clock;
} Queue0015e068;

Queue0015e068 *FUN_00175678(void);
QueueNode0015e068 *FUN_0019102c(Queue0015e068 *queue, s32 type);
void listAppendNode(Queue0015e068 *queue, QueueNode0015e068 *node);

/* Queues a kind-0x34 node for the requester on a channel when the requester accepts; returns whether it did. */
u8 queueRequesterNode(u8 channel, Requester0015e068 *requester)
{
    s32 accepted = requester->vtbl->accepts(requester);

    if (accepted != 0) {
        Queue0015e068 *queue = FUN_00175678();
        QueueNode0015e068 *node = FUN_0019102c(queue, 7);

        node->stamp = queue->clock;
        node->kind = 0x34;
        node->channel = channel;
        node->requester = requester;
        listAppendNode(queue, node);
    }
    return accepted != 0;
}

} /* extern "C" */
