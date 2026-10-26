/* NON_MATCHING: retail keeps the second-search result in a register preset to 0 (ip) with explicit loop jumps and saves r4; armcc here lays the two searches out with conditional execution. */
#include "shard/W5_W5Match2_ProcessQuery.h"
extern "C" {
extern ProcessQueryTable g_asdProcess;
/* Return the bounded state of an existing process ID. */
u8 processQueryChain(u32 id)
{
    u32 key = id & 0xFFFFF;
    ProcessQueryNode *head = g_asdProcess.slots[id >> 20].head;
    ProcessQueryNode *node = head;
    while (node != NULL && node->id != id) {
        node = node->next;
    }
    if (node == NULL) {
        return 0;
    }
    node = head;
    while (node != NULL && node->key != key) {
        node = node->next;
    }
    u8 state = node->state;
    return state <= 5 ? state : 0;
}
}
