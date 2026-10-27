#include "common.h"

extern "C" {

void *FUN_00114efc(void *self);
void operatorDelete(void *self);

void FUN_00114ef0(void *self)
{
    operatorDelete(FUN_00114efc(self));
}

} /* extern "C" */
