#include "common.h"

extern "C" {

struct QueueRequester;

typedef struct QueueRequesterVtable {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void *unk04;
    /* 0x08 */ s32 (*accepts)(struct QueueRequester *self);
} QueueRequesterVtable;

typedef struct QueueRequester {
    /* 0x00 */ QueueRequesterVtable *vtbl;
} QueueRequester;

typedef struct RequesterQueueNode {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[7];
    /* 0x0c */ u32 stamp;
    /* 0x10 */ u8 channel;
    /* 0x11 */ u8 unk11[3];
    /* 0x14 */ QueueRequester *requester;
} RequesterQueueNode;

typedef struct RequesterQueue {
    /* 0x000 */ u8 unk000[0x184];
    /* 0x184 */ u32 clock;
} RequesterQueue;

RequesterQueue *objectCommandQueueGet(void);
RequesterQueueNode *objectCommandReserveWords(RequesterQueue *queue, s32 type);
void listAppendNode(RequesterQueue *queue, RequesterQueueNode *node);

/* Allocates a node of `words` words, stamped with the queue's current clock. */
static __inline RequesterQueueNode *queueNodeBegin(RequesterQueue *queue, s32 words)
{
    RequesterQueueNode *node = objectCommandReserveWords(queue, words);
    node->stamp = queue->clock;
    return node;
}

/* Queues a kind-0x34 node for the requester on a channel when the requester accepts; returns whether it did. */
u8 queueRequesterNode(u8 channel, QueueRequester *requester)
{
    s32 accepted = requester->vtbl->accepts(requester);

    if (accepted != 0) {
        RequesterQueue *queue = objectCommandQueueGet();
        RequesterQueueNode *node = queueNodeBegin(queue, 7);

        node->kind = 0x34;
        node->channel = channel;
        node->requester = requester;
        listAppendNode(queue, node);
    }
    return accepted != 0;
}

} /* extern "C" */
