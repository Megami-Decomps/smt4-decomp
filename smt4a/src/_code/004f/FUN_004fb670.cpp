/* NON_MATCHING: register numbering in the id compare only: retail loads other->id into r3 (reusing the dead kind register) and action->id into r1; the build uses r1/r3 the other way round. Same instructions otherwise. */
#include "common.h"

/* A queued reflect action: id and index halfwords, kind at +4, the next action at +0xC. */
struct ReflectAction {
    /* 0x00 */ s16 id;
    /* 0x02 */ s16 index;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[7];
    /* 0x0C */ ReflectAction *next;
    /* 0x10 */ u8 unk10[0x18];
    /* 0x28 */ u32 value;
};

/* The reflect action queue; its first action is at +8. */
struct ReflectQueue {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ReflectAction *first;
};

extern "C" {

extern ReflectQueue *g_btlActionReflect; /* 0x5712f0 */
ReflectAction *FUN_004102d8(ReflectQueue *queue, s16 id, u32 mode, s32 target);

/* Queues a kind-63 reflect action; when an earlier kind-63 action has the same id, the new one's index is set to -1. */
void FUN_004fb670(s32 id, s32 target, u32 value)
{
    ReflectAction *action = FUN_004102d8(g_btlActionReflect, id, 0, target);

    ReflectAction *other = g_btlActionReflect->first;
    while (other != NULL) {
        u8 kind = other->kind;
        ReflectAction *next = other->next;
        if (kind == 63 && other->id == action->id && action->index >= 0) {
            action->index = -1;
            break;
        }
        other = next;
    }
    action->value = value;
    action->kind = 63;
}

} /* extern "C" */
