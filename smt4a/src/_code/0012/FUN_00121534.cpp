#include "common.h"

extern "C" {

void *FUN_00121540(void *self);
void operatorDelete(void *self);

void FUN_00121534(void *self)
{
    operatorDelete(FUN_00121540(self));
}

} /* extern "C" */
