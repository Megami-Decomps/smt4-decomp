/* NON_MATCHING: matches except the node store scheduling and the VFP numbering of the fade interpolation (retail converts the elapsed count into s2, the duration into s1). */
#include "classes/ObjectCommandRequests.h"

/* A type-0x2d command (7 words): the owner's parameter holder, a parameter bit and the fade's value. */
struct ObjectFadeNode {
    /* 0x00 */ u32 next;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[7];
    /* 0x0C */ u32 token;
    /* 0x10 */ u32 owner;
    /* 0x14 */ u32 bit;
    /* 0x18 */ f32 value;
};

extern "C" void FUN_0045f478(ObjectCommandOwner *owner);

// Sends the changed parameters: after updating them, queues a type-0x2d command for each of the four
// fades whose bit is set in the changed mask, carrying the fade's current value.
extern "C" void FUN_0045fc4c(ObjectCommandOwner *owner)
{
    FUN_0045f478(owner);
    ObjectCommandQueue *queue = objectCommandQueueGet();
    u32 mask = owner->changedMask;
    for (u32 i = 0; i < 4; i++) {
        if ((mask & 1) != 0) {
            ObjectFadeNode *command = (ObjectFadeNode *)objectCommandBegin(queue, 7);
            command->kind = 0x2d;
            command->owner = (u32)&owner->params;
            command->bit = 1 << i;
            ObjectFade *fade = &owner->fades[i];
            s32 elapsed = fade->elapsed;
            s32 duration = fade->duration;
            f32 value;
            if (elapsed >= duration) {
                value = fade->target;
            } else {
                value = (fade->target - fade->start) * (f32)elapsed / (f32)duration + fade->start;
            }
            command->value = value;
            listAppendNode(queue, (ObjectCommand *)command);
        }
        mask >>= 1;
    }
}
