/* NON_MATCHING: Native vector cleanup uses a writeback begin load and different saved registers; the loop zero is conditional instead of hoisted. */
#include "classes/Obj557dcc.h"

extern "C" {
void asdOperatorDelete(void *allocation);
}

/* Releases every owned resource list and entry before the pointer vector is destroyed. */
Obj557dcc::~Obj557dcc()
{
    ResourceListOwnerEntry **last = entries.end;
    for (ResourceListOwnerEntry **item = entries.begin; item != last; ++item) {
        delete *item;
    }
}
