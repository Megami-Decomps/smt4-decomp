/* NON_MATCHING: the first part update and the tail call match (the position goes to movedPartSetPosition by value); retail reads parts[0] for the first providerEntrySetVector through a pointer kept in r6 (built: [r5, #1388]), and on the snap-to-final path copies both vectors with ldm/stm and reloads the position with one ldm, where the build forwards the copied words (part in ldm/stm, z through s0). */
#include "shard/S1Mover.h"

extern "C" {

void providerEntrySetVector(MovedPart *part, Vec3f *position);
void nodeSetTranslation(u32 node, s32 flags, Vec3f *translation);
void FUN_00341bec(Mover *mover);

// Set the part's translation (its matrix's last column) and mark the transform dirty.
static __inline void movedPartSetPosition(MovedPart *part, Vec3f position)
{
    part->x = position.x;
    part->y = position.y;
    part->z = position.z;
    part->flags |= MOVED_PART_DIRTY;
}

/* Step the mover by one frame; when its 10 frames are over, snap to the final positions. Then run
 * the second stage. */
void moverStepOneFrame(Mover *mover)
{
    if (mover->active != 0) {
        f32 x = mover->position.x += mover->velocity.x;
        f32 y = mover->position.y += mover->velocity.y;
        f32 z = mover->position.z += mover->velocity.z;
        mover->positionB.x += mover->velocityB.x;
        mover->positionB.y += mover->velocityB.y;
        mover->positionB.z += mover->velocityB.z;

        Vec3f position;
        position.x = x;
        position.y = y;
        position.z = z;
        movedPartSetPosition(mover->parts[0], position);
        providerEntrySetVector(mover->parts[0], &mover->positionB);

        if (mover->moveNode != 0) {
            mover->nodePosition.x += mover->nodeVelocity.x;
            mover->nodePosition.y += mover->nodeVelocity.y;
            mover->nodePosition.z += mover->nodeVelocity.z;
            nodeSetTranslation(mover->node->handle, 0, &mover->nodePosition);
        }

        mover->frame++;
        if (mover->frame >= 10) {
            mover->active = 0;
            mover->position = mover->finalPosition;
            mover->positionB = mover->finalPositionB;

            movedPartSetPosition(mover->parts[0], mover->position);
            providerEntrySetVector(mover->parts[0], &mover->positionB);

            if (mover->moveNode != 0) {
                mover->nodePosition = mover->nodeFinalPosition;
                nodeSetTranslation(mover->node->handle, 0, &mover->nodePosition);
            }
        }
    }
    FUN_00341bec(mover);
}

} /* extern "C" */
