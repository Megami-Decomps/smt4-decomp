#include "classes/Obj4208c4.h"

struct ModelAnimationOwner {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ Obj4208c4 *animations;
};

extern "C" void modelAnimationInitializeFromOwner(Obj4208c4 *data, ModelAnimationOwner *owner);

/* Lazily constructs the animation data and populates it from the owning model. */
extern "C" void modelAnimationEnsureData(ModelAnimationOwner *owner)
{
    if (owner->animations != NULL) {
        return;
    }
    owner->animations = new Obj4208c4;
    modelAnimationInitializeFromOwner(owner->animations, owner);
}
