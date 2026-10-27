#include "common.h"

extern "C" {

void *destroyObj005592e4(void *self);
void operatorDelete(void *self);

void FUN_00110238(void *self)
{
    operatorDelete(destroyObj005592e4(self));
}

} /* extern "C" */
