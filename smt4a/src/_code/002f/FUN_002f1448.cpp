/* NON_MATCHING: retail emits 'mov r2, r1'; compiler emits 'ldr r2, [r0, #4]' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Queue { u32 reserved; u32 *current; u32 *end; };
void FUN_00134c68(Queue *queue, const u32 *value);
void FUN_002f1448(Queue *queue, const u32 *value) {
    if (queue->current != queue->end) {
        u32 *entry = queue->current++;
        if (entry) *entry = *value;
    } else {
        FUN_00134c68(queue, value);
    }
}
}
