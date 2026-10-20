#include "shard/Shard0035.h"

extern "C" {

extern StateHolder4 *DAT_0057f28c;

u8 stateHolder4IsD(void)
{
    return DAT_0057f28c->state == 0xD;
}

} /* extern "C" */
