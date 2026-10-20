#include "classes/Obj42094c.h"

/* Frees the second block, then the base filter's resources. */
Obj42094c::~Obj42094c()
{
    if (dataB != NULL) {
        asdMemFree(dataB);
        dataB = NULL;
    }
}
