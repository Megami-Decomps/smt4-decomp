/* NON_MATCHING: retail calls the base destructor with bl and returns (push {r4, lr}; bl; pop {r4, pc}); armcc tail-calls it here (b). */
#include "classes/Obj42251c.h"

/* Runs the base's destructor. */
Obj42251c::~Obj42251c()
{
}
