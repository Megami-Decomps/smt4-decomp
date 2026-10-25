#include "battle/btlReflect.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>

extern "C" void *asdMemoryAllocTracked(u32 pool, u32 category, u32 flags, u32 size, u32 alignment);

/* Link a new action at the end of the context's list. */
static __inline void reflectContextAppend(ReflectContext *context, ReflectAction *action)
{
    if (!context->head) {
        context->head = action;
    }
    if (!context->tail) {
        context->tail = action;
    } else {
        context->tail->next = action;
        action->previous = context->tail;
        context->tail = action;
    }
    ++context->count;
}

extern "C" ReflectAction *btlQueueReflectAction(ReflectContext *context, s32 actor, s32 secondary, u32 options)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlActionReflect.cpp", 508);
    ReflectAction *action = static_cast<ReflectAction *>(
        asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(ReflectAction), 1));
    action->actorId = actor;
    action->secondaryId = secondary;
    action->kind = 0;
    action->flagView.flags = 0;
    memset(action->unk05 + 1, 0, 2);
    action->next = NULL;
    action->options = options;
    action->previous = NULL;
    action->target = 0;
    action->wordValues.unk18 = 0;
    action->wordValues.second = 0xFFFFFFFFu;
    action->value = 0;
    action->payload = 0;
    action->parameter = 0;
    action->word50 = 0;
    for (u32 index = 0; index < 16; ++index) {
        action->textWords[index] = 0;
    }
    reflectContextAppend(context, action);
    return action;
}
