/* NON_MATCHING: compiler merges the two process-chain searches and omits retail's saved r4. */
#include "shard/W5_W5Match2_ProcessQuery.h"
extern "C" {
extern ProcessQueryTable g_asdProcess;
/* Return the bounded state of an existing process ID. */
u8 processQueryChain(u32 id)
{
    ProcessQueryNode *head = g_asdProcess.slots[id >> 20].head;
    ProcessQueryNode *node = head;
    for (; node != NULL; node = node->next) {
        if (node->id == id) {
            for (node = head; node != NULL; node = node->next) {
                if (node->key == (id & 0xFFFFF)) break;
            }
            u8 state = node->state;
            return state <= 5 ? state : 0;
        }
    }
    return 0;
}
}
