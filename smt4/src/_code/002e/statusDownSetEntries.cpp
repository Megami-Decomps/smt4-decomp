#include "common.h"

extern "C" {

void statusDownCopyValues(const u16 *values, int count);

/* Forwards to statusDownCopyValues, the function that follows it. */
void statusDownSetEntries(const u16 *values, int count)
{
    statusDownCopyValues(values, count);
}

} /* extern "C" */
