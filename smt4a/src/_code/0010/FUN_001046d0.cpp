#include "common.h"

extern "C" {

void *FUN_001046dc(void *self);
void operatorDelete(void *self);

void FUN_001046d0(void *self)
{
    operatorDelete(FUN_001046dc(self));
}

} /* extern "C" */
