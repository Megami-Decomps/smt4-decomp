#include "shard/W4_W4Match5_StatusDown.h"

extern "C" {

/* The status-down object's value word, or 0 while there is none. */
u32 FUN_003a7b54(void)
{
    return g_statusDown != NULL ? g_statusDown->value249c : 0;
}

} /* extern "C" */
