#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {


void memClearTwo200(u8 *buffer)
{
    reinterpret_cast<int>(memClear(buffer, 200));
    reinterpret_cast<int>(memClear(buffer + 200, 200));
}

} /* extern "C" */
