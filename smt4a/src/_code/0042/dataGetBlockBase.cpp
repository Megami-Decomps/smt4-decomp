#include "shard/Shard0042.h"

extern "C" {

extern u8 DAT_0062d000;

u8 *dataGetBlockBase(void)
{
    return &DAT_0062d000;
}

} /* extern "C" */
