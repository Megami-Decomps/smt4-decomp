/* NON_MATCHING: register numbering only: retail keeps the queue pointer in r5 and the kind byte in r6; the build swaps the two. Instruction sequence is identical. */
/* NON_MATCHING: register allocation/scheduling in the list walk only: retail loads the next pointer (ip) before the kind compare and keeps the queue in r5; the build loads it after and uses ip for the queue. */
#include "common.h"

/* A queued reflect action: kind at +4, its target at +8 and the next action at +0xC. */
struct ReflectAction {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ s32 target;
    /* 0x0C */ ReflectAction *next;
    /* 0x10 */ u8 unk10[0x18];
    /* 0x28 */ u32 value;
    /* 0x2C */ u8 unk2C[4];
    /* 0x30 */ f32 scale;
};

/* The reflect action queue; its first action is at +8. */
struct ReflectQueue {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ReflectAction *first;
};

extern "C" {

extern ReflectQueue *g_btlActionReflect; /* 0x434290 */
ReflectAction *btlQueueReflectAction(ReflectQueue *queue, s16 id, u32 mode, s32 target);

/* Queues a kind-13 reflect action on `target` for `id` unless one for that target is already queued; returns the new action or NULL. */
ReflectAction *FUN_003ddc70(s32 id, s32 target, u32 value, f32 scale)
{
    ReflectQueue *queue = g_btlActionReflect;
    u8 queued = 0;

    ReflectAction *action = queue->first;
    while (action != NULL) {
        u8 kind = action->kind;
        ReflectAction *next = action->next;
        if (kind == 13 && action->target == target) {
            queued = 1;
        }
        action = next;
    }
    if (queued) {
        return NULL;
    }
    action = btlQueueReflectAction(g_btlActionReflect, id, 0, target);
    action->value = value;
    action->kind = 13;
    action->scale = scale;
    return action;
}

} /* extern "C" */
