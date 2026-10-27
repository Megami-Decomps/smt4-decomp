#include "common.h"

extern "C" {

void *destroyObj005585c0(void *self);
void operatorDelete(void *self);

void FUN_00104004(void *self)
{
    operatorDelete(destroyObj005585c0(self));
}

} /* extern "C" */
