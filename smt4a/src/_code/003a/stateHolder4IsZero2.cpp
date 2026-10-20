#include "shard/Shard003A.h"

extern "C" {

extern StateHolder4 *DAT_0057f28c;

u8 stateHolder4IsZero2(void)
{
    return DAT_0057f28c->state == 0;
}

} /* extern "C" */
