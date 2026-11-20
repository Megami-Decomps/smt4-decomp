/* NON_MATCHING: retail copies the mover's position into the part through ldm (all three loads first), and in the non-snap arm stores the target's z through a core register; the rest matches. */
#include "shard/S1Mover.h"

// A mover with the per-slot node target positions that follow it.
struct MoverTargets : Mover {
    /* 0x1670 */ Vec3f nodeTargets[2];
};

extern "C" {
void providerEntrySetVector(MovedPart *part, Vec3f *vector);
void nodeSetTranslation(u32 handle, s32 index, Vec3f *translation);
const Vec3f *cameraGetProviderEntryPayload(MovedPart *part);

/* A vector from its three components (built in VFP registers, as nodeVec3 builds a NodeVec3). */
static __inline Vec3f vec3f(f32 x, f32 y, f32 z)
{
    Vec3f vector;
    vector.x = x;
    vector.y = y;
    vector.z = z;
    return vector;
}

/* Retargets the mover to slot `slot`'s part: with `snap` the part (and node) jump to the target at once, otherwise the
 * target is stored and the per-frame velocities are set to cover a tenth of the way each frame. */
void moverRetargetToSlot(MoverTargets *mover, s32 slot, s32 snap)
{
    if (snap != 0) {
        MovedPart *source = mover->parts[slot];
        mover->finalPosition = vec3f(source->x, source->y, source->z);
        mover->finalPositionB = *cameraGetProviderEntryPayload(mover->parts[slot]);
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
    if (slot == 0) {
        mover->finalPosition = mover->homePosition;
        mover->finalPositionB = mover->homePositionB;
    } else {
        mover->finalPosition = vec3f(mover->parts[slot]->x, mover->parts[slot]->y, mover->parts[slot]->z);
        mover->finalPositionB = *cameraGetProviderEntryPayload(mover->parts[slot]);
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
