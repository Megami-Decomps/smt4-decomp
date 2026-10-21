#include "shard/JobBlock43e278.h"

extern "C" {

void frameTexResetFlags(void)
{
    JobBlock43e278 *block = g_frameTex;

    g_frameTex->unkFD8 = 1;
    block->unkE96 = 0;
    block->unkE95 = 0;
}

} /* extern "C" */
