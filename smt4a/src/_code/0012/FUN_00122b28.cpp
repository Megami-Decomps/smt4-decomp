#include "common.h"

extern "C" {

void *FUN_00122b34(void *self);
void operatorDelete(void *self);

void FUN_00122b28(void *self)
{
    operatorDelete(FUN_00122b34(self));
}

} /* extern "C" */
