#include "shard/Shard0038.h"

extern "C" {

extern StateHolder4 *DAT_0057f28c;

u8 stateHolder4IsZero(void)
{
    return DAT_0057f28c->state == 0;
}

} /* extern "C" */
