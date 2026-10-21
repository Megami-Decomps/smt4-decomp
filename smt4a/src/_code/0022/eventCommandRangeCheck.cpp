/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void *eventCommandGetPendingCleanup(void *obj);
void rangeIsValid(void *obj);

void eventCommandRangeCheck(void *obj)
{
    rangeIsValid(eventCommandGetPendingCleanup(obj));
}

}
