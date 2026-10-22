#include "classes/Obj421c90.h"

/* Retail consumes the destructor's returned owner; a native call adds save/restores. */
extern "C" int _ZN9Obj421c90D1Ev(int block);
#include "common.h"

extern "C" {


int FUN_00377414(int object)
{
    int block = _ZN9Obj421c90D1Ev(object + 0xc);

    return block - 0xc;
}

} /* extern "C" */
