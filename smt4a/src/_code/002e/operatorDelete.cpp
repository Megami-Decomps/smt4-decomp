#include "common.h"

extern "C" {

void asdOperatorDeleteArray(void);

/* Forwards to asdOperatorDeleteArray. */
void operatorDelete(void)
{
    asdOperatorDeleteArray();
}

} /* extern "C" */
