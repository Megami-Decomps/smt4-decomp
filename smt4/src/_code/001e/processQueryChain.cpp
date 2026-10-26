/* NON_MATCHING: layout now matches retail (preset NULL result, push r4, explicit loop branches); remaining diffs are register choice (retail keeps the zero in ip and hashes the key before the loads) and loop-2 exit shape. */
#include "shard/W5_W5Match2_ProcessQuery.h"
extern "C" {
extern ProcessQueryTable g_asdProcess;
/* Return the bounded state of an existing process ID. */
u8 processQueryChain(u32 id)
{
    u32 key = id & 0xFFFFF;
    ProcessQueryNode *head = g_asdProcess.slots[id >> 20].head;
    ProcessQueryNode *node = head;
    ProcessQueryNode *match = NULL;
    while (node != NULL && node->id != id) {
        node = node->next;
    }
    if (node == NULL) {
        return 0;
    }
    for (node = head; node != NULL; node = node->next) {
        if (node->key == key) {
            match = node;
            break;
        }
    }
    u8 state = match->state;
    return state <= 5 ? state : 0;
}
}
