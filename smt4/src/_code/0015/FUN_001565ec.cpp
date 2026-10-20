/* NON_MATCHING: register allocation: retail keeps the queue tail in r0/next in r1 and loads the constant 1 separately for the node state (built shares r7 and swaps the walk registers). */
#include "common.h"

extern "C" {

typedef struct QueueNode {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 data;
    /* 0x08 */ u8 unk08[9];
    /* 0x11 */ u8 state;        /* 1 queued, 3 rejected */
    /* 0x12 */ u16 ticket;
    /* 0x14 */ struct QueueNode *next;
} QueueNode;

typedef struct QueueManager {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u16 nextTicket;
    /* 0x08 */ u8 unk08[0x28];
    /* 0x30 */ QueueNode *head;
    /* 0x34 */ u8 unk34[0x3C];
    /* 0x70 */ u8 lock[0x1C];
} QueueManager;

extern void nn_os_CriticalSection_Enter(u8 *section);
extern void nn_os_CriticalSection_Leave(u8 *section);

/* Appends `node` to the manager's queue under its lock and gives it the next ticket; nodes without data are rejected. */
void FUN_001565ec(QueueManager *manager, QueueNode *node)
{
    u8 *lock;
    QueueNode *tail;
    QueueNode *next;
    u16 ticket;

    if (node->data == 0) {
        node->state = 3;
        return;
    }
    node->next = NULL;
    node->state = 1;
    lock = manager->lock;
    nn_os_CriticalSection_Enter(lock);
    tail = manager->head;
    if (tail == NULL) {
        manager->head = node;
    } else {
        for (next = tail->next; next != NULL; next = next->next) {
            tail = next;
        }
        tail->next = node;
    }
    ticket = manager->nextTicket;
    if (ticket == 0) {
        ticket = 1;
        manager->nextTicket = 1;
    }
    node->ticket = ticket;
    manager->nextTicket = manager->nextTicket + 1;
    nn_os_CriticalSection_Leave(lock);
}

} /* extern "C" */
