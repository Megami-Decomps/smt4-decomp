/* NON_MATCHING: registers and saved r4 now match; retail leaves the second search with `mov r1, ip` (a NULL assigned after the loop) and lays the loop blocks out differently. */
#include "shard/W5_W5Match2_ProcessQuery.h"
extern "C" {
extern ProcessQueryTable g_asdProcess;
/* Return the bounded state of an existing process ID. */
u8 processQueryChain(u32 id)
{
    u32 key = id & 0xFFFFF;
    ProcessQueryNode *head = g_asdProcess.slots[id >> 20].head;
    ProcessQueryNode *node = head;
    ProcessQueryNode *found = NULL;
    for (; node != NULL; node = node->next) {
        if (node->id == id) {
            for (ProcessQueryNode *candidate = head; candidate != NULL; candidate = candidate->next) {
                if (candidate->key == key) {
                    found = candidate;
                    break;
                }
            }
            u8 state = found->state;
            return state <= 5 ? state : 0;
        }
    }
    return 0;
}
}
