#include "common.h"

extern "C" {

void asdOperatorDelete(void);

/* Forwards to asdOperatorDelete. */
void asdDeallocateArrayStorage(void)
{
    asdOperatorDelete();
}

} /* extern "C" */
