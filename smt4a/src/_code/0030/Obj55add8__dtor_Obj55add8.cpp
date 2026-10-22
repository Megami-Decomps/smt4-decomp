/* Calls the object's (weak, removed in retail) base teardown and returns. */
#include "common.h"

extern "C" {

__weak void FUN_0030cb98_baseDtor(void *obj);

void _ZN9Obj55add8D1Ev(void *obj)
{
    FUN_0030cb98_baseDtor(obj);
}

}
