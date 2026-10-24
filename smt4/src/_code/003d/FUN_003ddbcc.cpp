/* NON_MATCHING: only the order of two adjacent stores differs (retail: strb kind, then strh second; ours emits the strh first). */
#include "battle/btlReflect.h"

extern "C" {
ReflectAction *btlQueueReflectAction(ReflectContext *context, s32 actor, s32 secondary, u32 options);

/* Two floats passed by value (on the stack). */
union FloatPair {
    struct {
        f32 x;
        f32 y;
    } values;
    u32 bits[2];
};

/* Queues a kind-12 action carrying two ids, a value and two floats. */
void FUN_003ddbcc(u32 actor, u32 options, u32 value, u16 first, FloatPair pair, u16 second)
{
    ReflectAction *node;

    node = g_btlActionReflect->head;
    while (node != NULL) {
        node = node->next;
    }
    ReflectAction *action = btlQueueReflectAction(g_btlActionReflect, (s16)actor, 0, options);
    action->kind = 12;
    action->second = second;
    action->first = first;
    action->value = value;
    action->parameterScalar = pair.values.y;
    action->payloadScalar = pair.values.x;
}
}
