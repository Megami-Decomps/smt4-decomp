/* NON_MATCHING: virtual string-element destruction loads the vptr through r0 rather than r1; all other cleanup matches. */
#include "classes/Obj55ac68.h"

/* Base and member destructors release all three owned containers and the name. */
Obj55ac68::~Obj55ac68()
{
}
