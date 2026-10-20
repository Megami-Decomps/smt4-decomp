#include "common.h"

extern "C" {

int cecMessageIdClear(void *obj);

void *asdCecMessageIdInit(void *obj)
{
    cecMessageIdClear(obj);
    return obj;
}

} /* extern "C" */
