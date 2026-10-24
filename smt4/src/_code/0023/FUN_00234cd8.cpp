/* NON_MATCHING: readable rewrite of the mover's retarget; retail copies the vectors as 3-word groups through different registers and keeps the 0.1f scale in a VFP register, which the build schedules differently. */
#include "shard/S1Mover.h"

// A mover with the per-slot node target positions that follow it.
struct MoverTargets : Mover {
    /* 0x1670 */ Vec3f nodeTargets[2];
};

extern "C" {
void providerEntrySetVector(MovedPart *part, Vec3f *vector);
void nodeSetTranslation(u32 handle, s32 index, Vec3f *translation);
const Vec3f *FUN_002a86a4(MovedPart *part);

// Retargets the mover to slot `slot`'s part: with `snap` the part (and node) jump to the target at once, otherwise the
// target is stored and the per-frame velocities are set to cover a tenth of the way each frame.
void FUN_00234cd8(MoverTargets *mover, s32 slot, s32 snap)
{
    if (snap != 0) {
        MovedPart *source = mover->parts[slot];
        mover->finalPosition.x = source->x;
        mover->finalPosition.y = source->y;
        mover->finalPosition.z = source->z;
        mover->finalPositionB = *FUN_002a86a4(mover->parts[slot]);
        mover->position = mover->finalPosition;
        mover->positionB = mover->finalPositionB;
        MovedPart *part = mover->parts[0];
        part->x = mover->position.x;
        part->y = mover->position.y;
        part->z = mover->position.z;
        part->flags |= MOVED_PART_DIRTY;
        providerEntrySetVector(mover->parts[0], &mover->positionB);
        if (mover->moveNode != 0) {
            mover->nodeFinalPosition = mover->nodeTargets[slot];
            mover->nodePosition = mover->nodeFinalPosition;
            nodeSetTranslation(mover->node->handle, 0, &mover->nodePosition);
        }
        return;
    }
    mover->frame = 0;
    mover->active = 1;
    if (slot != 0) {
        MovedPart *source = mover->parts[slot];
        mover->finalPosition.x = source->x;
        mover->finalPosition.y = source->y;
        mover->finalPosition.z = source->z;
        mover->finalPositionB = *FUN_002a86a4(mover->parts[slot]);
    } else {
        mover->finalPosition = mover->homePosition;
        mover->finalPositionB = mover->homePositionB;
    }
    mover->velocity.x = (mover->finalPosition.x - mover->position.x) * 0.1f;
    mover->velocity.y = (mover->finalPosition.y - mover->position.y) * 0.1f;
    mover->velocity.z = (mover->finalPosition.z - mover->position.z) * 0.1f;
    mover->velocityB.x = (mover->finalPositionB.x - mover->positionB.x) * 0.1f;
    mover->velocityB.y = (mover->finalPositionB.y - mover->positionB.y) * 0.1f;
    mover->velocityB.z = (mover->finalPositionB.z - mover->positionB.z) * 0.1f;
    if (mover->moveNode != 0) {
        mover->nodeFinalPosition = mover->nodeTargets[slot];
        mover->nodeVelocity.x = (mover->nodeFinalPosition.x - mover->nodePosition.x) * 0.1f;
        mover->nodeVelocity.y = (mover->nodeFinalPosition.y - mover->nodePosition.y) * 0.1f;
        mover->nodeVelocity.z = (mover->nodeFinalPosition.z - mover->nodePosition.z) * 0.1f;
    }
}
}
