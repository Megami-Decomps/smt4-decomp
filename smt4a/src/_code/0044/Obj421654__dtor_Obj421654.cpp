/* NON_MATCHING: retail keeps `this` in r4 and addresses each holder through r0; armcc here walks r4 across the holders, so registers and the vtable store order differ. */
#include "classes/Obj421654.h"

/* Destroys the two own holders, then the base's. */
Obj421654::~Obj421654()
{
}
