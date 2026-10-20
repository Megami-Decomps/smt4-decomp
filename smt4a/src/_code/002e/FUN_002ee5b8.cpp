#include "common.h"

extern "C" {

void onlineUrlCopy(void);

/* Runs onlineUrlCopy and returns `object`. */
void *FUN_002ee5b8(void *object)
{
    onlineUrlCopy();
    return object;
}

} /* extern "C" */
