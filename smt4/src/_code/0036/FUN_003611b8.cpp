#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {


void FUN_003611b8(u32 block)
{
    reinterpret_cast<int>(memClear(reinterpret_cast<void*>(block), 0xb2c8));
}

} /* extern "C" */
