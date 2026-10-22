#include "battle/btlReflect.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void* asdMemAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 mode);

// Allocate and append a cleared reflection action for the requested actor pair.
ReflectAction* btlQueueReflectAction(ReflectContext* context, u16 actor, u16 secondary, u32 options)
{
    // A halfword at +6 cannot be added to the shared byte-aligned +5 union.
    struct ActionView {
        /* 0x00 */ u16 actorId, secondaryId;
        /* 0x04 */ u8 kind, flags;
        /* 0x06 */ u16 state;
        /* 0x08 */ u32 options;
        /* 0x0C */ ReflectAction* next;
        /* 0x10 */ ReflectAction* previous;
        /* 0x14 */ u32 target;
        /* 0x18 */ u32 value;
        /* 0x1C */ s32 index;
        /* 0x20 */ u8 unk20[8];
        /* 0x28 */ u32 parameter;
        /* 0x2C */ u32 payload;
        /* 0x30 */ u8 unk30[0x1C];
        /* 0x4C */ u32 parameterA;
        /* 0x50 */ u32 parameterB;
        /* 0x54 */ u8 unk54[0x14];
    };
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlActionReflect.cpp", 444);
    ActionView* action = static_cast<ActionView*>(asdMemAlloc(0x100, 0x100, 0, 0x68, 1));
    action->actorId = actor;
    action->secondaryId = secondary;
    action->kind = 0;
    action->flags = 0;
    action->state = 0;
    action->next = NULL;
    action->options = options;
    action->previous = NULL;
    action->target = 0;
    action->value = 0;
    action->index = -1;
    action->parameter = 0;
    action->payload = 0;
    action->parameterA = 0;
    action->parameterB = 0;
    ReflectAction* result = reinterpret_cast<ReflectAction*>(action);
    if (context->head == NULL) {
        context->head = result;
    }
    if (context->tail == NULL) {
        context->tail = result;
    } else {
        context->tail->next = result;
        action->previous = context->tail;
        context->tail = result;
    }
    ++context->count;
    return result;
}
}
