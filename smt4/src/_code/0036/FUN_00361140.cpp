#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {


void FUN_00361140(u16 *block)
{
    reinterpret_cast<int>(memClear(reinterpret_cast<void*>(block), 0xe30));
    *block = 2;
}

} /* extern "C" */
