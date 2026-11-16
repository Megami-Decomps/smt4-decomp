/* NON_MATCHING: retail issues a data memory barrier (mcr p15, 0, r3, c7, c10, 5) before marking the retired nodes, which needs inline asm; register allocation and the final loop differ as a consequence */
#include "shard/S1NnSnd.h"

extern "C" {

void nn_os_CriticalSection_Enter(CriticalSection *cs);
void nn_os_CriticalSection_Leave(CriticalSection *cs);

/* Apply a status message to a voice: when its serial matches, take the new position and, if flagged,
 * retire the playback nodes up to the one the message names. */
void FUN_0015eea0(VoiceState *state, const VoiceStatusMsg *msg)
{
    if (msg->serial == state->serial) {
        state->position = (msg->position >> 16) | (msg->position << 16);
        if ((msg->header & 0xFF00) != 0) {
            CriticalSection *cs = &state->lock;
            u16 firstId = msg->firstId;
            u16 lastId = msg->lastId;

            nn_os_CriticalSection_Enter(cs);
            VoiceNode *node = state->head;
            if (node == NULL) {
                nn_os_CriticalSection_Leave(cs);
            } else {
                s16 *pending = &state->pending;
                VoiceNode *retired[5];
                int count = 0;

                while (*pending != 0) {
                    if (node->id == firstId) {
                        node->state = 2;
                        break;
                    }
                    (*pending)--;
                    retired[count++] = node;
                    bool last = firstId == 0 && (node->id == lastId || lastId == 0);
                    node = node->next;
                    if (last) {
                        break;
                    }
                }
                if (firstId == 0) {
                    *pending = 0;
                }
                for (int i = 0; i < count; i++) {
                    retired[i]->state = 3;
                }
                state->head = node;
                nn_os_CriticalSection_Leave(cs);
            }
        }
    }
    state->active = (msg->header & 0xFF) == 1;
}

} /* extern "C" */
