#ifndef BATTLE_BTLSIDELIMITS_H
#define BATTLE_BTLSIDELIMITS_H

#include "common.h"

/* The limit tests of the battle's side (direction bucket) choice: which of five sides a horizontal position or
 * angle falls on, against fixed limits or limits relative to the camera. Every user compares through these calls,
 * so armcc compares the floats in VFP registers (a test written in place against a constant limit becomes an
 * integer compare of the bit patterns under --fpmode=fast). Users: smt4 btlEffectSetStartByName, smt4a btlEffectSetStartByName and
 * btlApplyDirectionBucket. */
static bool btlIsBelow(f32 value, f32 limit)
{
    return value < limit;
}

static bool btlIsAbove(f32 value, f32 limit)
{
    return value > limit;
}

#endif
