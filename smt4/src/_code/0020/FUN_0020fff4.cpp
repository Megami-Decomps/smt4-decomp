/* NON_MATCHING: Animation replacement/binding is complete; only the evaluation callback pointer/context and float-argument loads are scheduled differently. */
#include "classes/AsdAllocatorObject.h"

class SelectedAnimationInstance {
public:
    virtual ~SelectedAnimationInstance();
    /* 0x04 */ AsdAllocatorObject *allocator;
    /* 0x08 */ u8 unk08[0x30];
    /* 0x38 */ f32 value;
    /* 0x3C */ f32 previousValue;
    /* 0x40 */ u32 unk40;
    /* 0x44 */ f32 first;
    /* 0x48 */ f32 second;
    /* 0x4C */ f32 (*evaluate)(void *context, f32 first, f32 second, f32 time);
    /* 0x50 */ void *context;
    /* 0x54 */ u32 unk54;
    /* 0x58 */ u8 dirty;
};
struct SelectedAnimationBinding {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ SelectedAnimationInstance *animation;
};
struct SelectedAnimationBindings {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ SelectedAnimationBinding *object;
    /* 0x18 */ u8 unk18[0xc];
    /* 0x24 */ f32 *firstScale;
    /* 0x28 */ u8 unk28[0xc];
    /* 0x34 */ f32 *secondScale;
    /* 0x38 */ u8 unk38[9];
    /* 0x41 */ u8 dirty;
};
struct SelectedAnimationOwner {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0x28];
    /* 0x2C */ void *factory;
    /* 0x30 */ void **entries;
    /* 0x34 */ s32 count;
    /* 0x38 */ s32 selection;
    /* 0x3C */ u32 argument;
    /* 0x40 */ f32 time;
    /* 0x44 */ f32 weight;
    /* 0x48 */ SelectedAnimationBindings *bindings;
    /* 0x4C */ u32 unk4c;
    /* 0x50 */ SelectedAnimationInstance *animation;
};
extern "C" SelectedAnimationInstance *FUN_0014f07c(void *factory, void *entry, u32 argument);

/* Replace the selected animation, bind it, and optionally evaluate its initial time. */
extern "C" void FUN_0020fff4(SelectedAnimationOwner *owner, s32 index, f32 time, f32 weight)
{
    if (index < 0) {
        return;
    }
    if (owner->count <= 0 || index >= owner->count) {
        return;
    }
    if ((owner->flags & 1) && owner->animation != NULL) {
        SelectedAnimationInstance *animation = owner->animation;
        animation->~SelectedAnimationInstance();
        animation->allocator->release(animation);
        owner->animation = NULL;
    }
    owner->flags |= 1;
    owner->selection = index;
    owner->time = 0.0f;
    owner->weight = weight;
    SelectedAnimationInstance *animation = FUN_0014f07c(owner->factory, owner->entries[index], owner->argument);
    owner->animation = animation;
    SelectedAnimationBindings *bindings = owner->bindings;
    bindings->object->animation = animation;
    *bindings->firstScale = 1.0f;
    *bindings->secondScale = 1.0f;
    bindings->dirty = 1;
    if (time != 0.0f) {
        animation = owner->animation;
        f32 value = animation->evaluate(animation->context, animation->first, animation->second, time);
        animation->previousValue = animation->value;
        animation->value = value;
        animation->dirty = 1;
    }
}
