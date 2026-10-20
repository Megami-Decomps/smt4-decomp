#include "shard/S1Skeleton.h"

extern "C" {

Mtx44Data *FUN_005057bc(SkeletonObj *skeleton, Mtx44Data *out, s32 bone, s32 flags);

/* Bone matrix without extra flags. */
Mtx44Data *FUN_005057b4(SkeletonObj *skeleton, Mtx44Data *out, s32 bone)
{
    return FUN_005057bc(skeleton, out, bone, 0);
}

} /* extern "C" */
