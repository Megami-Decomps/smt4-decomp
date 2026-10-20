/* Calls the object's (weak, removed in retail) base teardown and returns. */
#include "common.h"

extern "C" {

__weak void FUN_0030cbb8_baseDtor(void *obj);

void FUN_0030cbb8(void *obj)
{
    FUN_0030cbb8_baseDtor(obj);
}

}
