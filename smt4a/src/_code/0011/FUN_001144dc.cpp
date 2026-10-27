#include "common.h"

extern "C" {

void *destroyObj00559684(void *self);
void operatorDelete(void *self);

void FUN_001144dc(void *self)
{
    operatorDelete(destroyObj00559684(self));
}

} /* extern "C" */
