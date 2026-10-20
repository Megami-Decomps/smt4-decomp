/* Calls the object's (weak, removed in retail) base teardown and returns. */
#include "common.h"

extern "C" {

__weak void FUN_0010b69c_baseDtor(void *obj);

void FUN_0010b69c(void *obj)
{
    FUN_0010b69c_baseDtor(obj);
}

}
