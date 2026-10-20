#include "shard/Sys44e190.h"

extern "C" {

extern int FUN_0029ee54(u8 *block);

int FUN_002efe2c(void)
{
    int count;

    if (DAT_0044e190 == NULL) {
        return 0;
    }
    count = FUN_0029ee54(DAT_0044e190->unk4D4);
    return count - 1;
}

} /* extern "C" */
