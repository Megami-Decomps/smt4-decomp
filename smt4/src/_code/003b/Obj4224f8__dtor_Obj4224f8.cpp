/* NON_MATCHING: retail calls the base destructor with bl and returns (push {r4, lr}; bl; pop {r4, pc}); armcc tail-calls it here (b). */
#include "classes/Obj4224f8.h"

/* Runs the base's destructor. */
Obj4224f8::~Obj4224f8()
{
}
