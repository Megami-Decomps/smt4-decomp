#include "shard/Shard0039.h"

extern "C" {

extern FlagAt4 *DAT_0057f244;

u8 flagAt4IsClear(void)
{
    return DAT_0057f244->flag == 0;
}

} /* extern "C" */
