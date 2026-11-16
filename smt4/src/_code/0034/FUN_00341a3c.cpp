/* NON_MATCHING: the new coordinates now stay in VFP registers for the first part update (y/z swap s1/s2); the snap-to-final path still forwards the stored position where retail reloads it with one ldm, and the tail call to FUN_00341bec is not turned into the linker's branch-NOP. */
#include "shard/S1Mover.h"

extern "C" {

void providerEntrySetVector(MovedPart *part, Vec3f *position);
void nodeSetTranslation(u32 node, s32 flags, Vec3f *translation);
void FUN_00341bec(Mover *mover);

/* Step the mover by one frame; when its 10 frames are over, snap to the final positions. Then run
 * the second stage. */
void FUN_00341a3c(Mover *mover)
{
    if (mover->active != 0) {
        f32 x = mover->position.x += mover->velocity.x;
        f32 y = mover->position.y += mover->velocity.y;
        f32 z = mover->position.z += mover->velocity.z;
        mover->positionB.x += mover->velocityB.x;
        mover->positionB.y += mover->velocityB.y;
        mover->positionB.z += mover->velocityB.z;

        MovedPart *part = mover->parts[0];

        part->x = x;
        part->y = y;
        part->z = z;
        part->flags |= MOVED_PART_DIRTY;
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

            part = mover->parts[0];
            part->x = mover->position.x;
            part->y = mover->position.y;
            part->z = mover->position.z;
            part->flags |= MOVED_PART_DIRTY;
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
