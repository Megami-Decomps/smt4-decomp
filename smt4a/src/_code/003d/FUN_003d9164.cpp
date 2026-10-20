/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void *eventCommandGetPendingCleanup(void *obj);
void words5Clear(void *obj);

void FUN_003d9164(void *obj)
{
    words5Clear(eventCommandGetPendingCleanup(obj));
}

}
