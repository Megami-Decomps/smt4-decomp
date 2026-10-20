#include "shard/Shard0036.h"

extern "C" {

extern Ref208 g_commonBg;

u8 ref208StateIs7(void)
{
    return g_commonBg.work->state == 7;
}

} /* extern "C" */
