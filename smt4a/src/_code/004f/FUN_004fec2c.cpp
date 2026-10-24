#include "battle/btlReflect.h"

extern "C" ReflectAction *FUN_004102d8(ReflectContext *context, s32 id, s32 target, u32 flags);
extern "C" char *libc_strcpy(char *dest, const char *src);

/* Queues a kind-20 text action; when `unique`, an already queued kind-20 action with no value
 * clears the new action's secondary id. */
extern "C" ReflectAction *FUN_004fec2c(s32 id, u32 flags, u32 value, u32 word18, const char *text,
                                       s32 unique)
{
    ReflectAction *action = FUN_004102d8(g_btlActionReflect, (s16)id, 0, flags);
    ReflectAction *queued;

    if (unique) {
        for (queued = g_btlActionReflect->head; queued != NULL; ) {
            ReflectAction *next = queued->next;

            if (queued->kind == 20 && queued->value == 0 && (s16)action->secondaryId >= 0) {
                action->secondaryId = 0xFFFF;
                break;
            }
            queued = next;
        }
    }
    action->value = value;
    action->kind = 20;
    action->wordValues.unk18 = word18;
    libc_strcpy(action->text, text);
    return action;
}
