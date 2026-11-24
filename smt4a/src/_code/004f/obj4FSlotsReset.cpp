#include "battle/BtlEffectReset.h"

/* Releases the battle-effect placement objects and clears the placement table. */
extern "C" void obj4FSlotsReset(BtlEffectFiles *work)
{
    resetEffectPlacements(work);
}
