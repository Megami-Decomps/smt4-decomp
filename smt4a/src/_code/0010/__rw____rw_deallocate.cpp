#include "common.h"

extern "C" {

void asdOperatorDelete(void);

/* Forwards to asdOperatorDelete. */
void _ZN4__rw15__rw_deallocateEPvji(void)
{
    asdOperatorDelete();
}

} /* extern "C" */
