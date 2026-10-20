#include "classes/Obj42083c.h"

/* Frees the extra block, then the base filter's resources. */
Obj42083c::~Obj42083c()
{
    if (block != NULL) {
        asdOperatorDelete(block);
        block = NULL;
    }
}
