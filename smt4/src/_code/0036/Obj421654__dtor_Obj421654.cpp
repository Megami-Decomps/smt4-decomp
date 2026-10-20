/* NON_MATCHING: same destruction order and stores as retail; armcc keeps the holder pointer in r4 and rederives this, retail keeps this in r4 and the holder in r0. */
#include "classes/Obj421654.h"

/* The holders release their targets (the members, then the base's). */
Obj421654::~Obj421654()
{
}
