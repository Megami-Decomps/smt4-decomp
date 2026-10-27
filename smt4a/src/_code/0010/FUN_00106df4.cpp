#include "common.h"

extern "C" {

void *FUN_00106e00(void *self);
void operatorDelete(void *self);

void FUN_00106df4(void *self)
{
    operatorDelete(FUN_00106e00(self));
}

} /* extern "C" */
