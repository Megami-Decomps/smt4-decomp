/* NON_MATCHING: the position updates are scheduled differently (retail keeps the three new coordinates in registers for the part stores) */
#include "shard/S1Mover.h"

extern "C" {

void FUN_0023d3c0(MovedPart *part, Vec3f *position);
void nodeSetTranslation(u32 node, s32 flags, Vec3f *translation);
void FUN_00341bec(Mover *mover);

/* Step the mover by one frame; when its 10 frames are over, snap to the final positions. Then run
 * the second stage. */
void FUN_00341a3c(Mover *mover)
{
    if (mover->active != 0) {
        mover->position.x += mover->velocity.x;
        mover->position.y += mover->velocity.y;
        mover->position.z += mover->velocity.z;
        mover->positionB.x += mover->velocityB.x;
        mover->positionB.y += mover->velocityB.y;
        mover->positionB.z += mover->velocityB.z;

        MovedPart *part = mover->parts[0];

        part->x = mover->position.x;
        part->y = mover->position.y;
        part->z = mover->position.z;
        part->flags |= MOVED_PART_DIRTY;
        FUN_0023d3c0(mover->parts[0], &mover->positionB);

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
            FUN_0023d3c0(mover->parts[0], &mover->positionB);

            if (mover->moveNode != 0) {
                mover->nodePosition = mover->nodeFinalPosition;
                nodeSetTranslation(mover->node->handle, 0, &mover->nodePosition);
            }
        }
    }
    FUN_00341bec(mover);
}

} /* extern "C" */
