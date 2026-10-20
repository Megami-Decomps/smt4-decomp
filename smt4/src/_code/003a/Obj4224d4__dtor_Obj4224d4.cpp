/* NON_MATCHING: retail calls the base destructor with bl and returns (push {r4, lr}; bl; pop {r4, pc}); armcc tail-calls it here (b). */
#include "classes/Obj4224d4.h"

/* Runs the base's destructor. */
Obj4224d4::~Obj4224d4()
{
}
