#include "common.h"

struct ModelAnimation;
struct ModelOwner;

extern "C" void FUN_00349a18(ModelAnimation* animation, ModelOwner* owner);

// Forward initialization to the animation object's implementation.
extern "C" void modelAnimationInitializeFromOwner(ModelAnimation* animation, ModelOwner* owner)
{
    FUN_00349a18(animation, owner);
}
