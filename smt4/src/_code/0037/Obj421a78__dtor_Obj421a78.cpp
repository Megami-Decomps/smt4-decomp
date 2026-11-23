/* NON_MATCHING: register allocation only: in the inlined slot clear retail addresses the word tables through ip and the pairs through r4; the build swaps them. */
#include "classes/Obj421a78.h"

/* Clears the active slots and releases the resource word. */
Obj421a78::~Obj421a78()
{
    clearSlots();
    if (resource != 0) {
        resource = 0;
    }
}
