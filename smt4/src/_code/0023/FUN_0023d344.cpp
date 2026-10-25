/* NON_MATCHING: retail uses VFP vector copies and falls through a trailing NOP into providerEntrySetVector; this build copies via GPRs and emits a tail branch. */
#include "shard/S1Mover.h"

extern "C" void providerEntrySetVector(MovedPart *part, Vec3f *translation);

// Commit the final pair of positions to the moved part and its node translation.
extern "C" void FUN_0023d344(Mover *mover)
{
    mover->position = mover->finalPosition;
    mover->positionB = mover->finalPositionB;
    MovedPart *part = mover->parts[0];
    part->x = mover->position.x;
    part->y = mover->position.y;
    part->z = mover->position.z;
    part->flags |= MOVED_PART_DIRTY;
    providerEntrySetVector(mover->parts[0], &mover->positionB);
}
