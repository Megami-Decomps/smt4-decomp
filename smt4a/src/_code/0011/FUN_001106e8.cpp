#include "common.h"

extern "C" {

void *FUN_001106f4(void *self);
void operatorDelete(void *self);

void FUN_001106e8(void *self)
{
    operatorDelete(FUN_001106f4(self));
}

} /* extern "C" */
