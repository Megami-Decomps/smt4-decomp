#include "shard/Sys44e190.h"

extern "C" {

extern int FUN_0029ee54(u8 *block);

int FUN_002efe2c(void)
{
    int count;

    if (g_statusDown == NULL) {
        return 0;
    }
    count = FUN_0029ee54(g_statusDown->unk4D4);
    return count - 1;
}

} /* extern "C" */
