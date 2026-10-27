#include "common.h"

extern "C" {

void *destroyObj005587fc(void *self);
void operatorDelete(void *self);

void FUN_00105ca8(void *self)
{
    operatorDelete(destroyObj005587fc(self));
}

} /* extern "C" */
