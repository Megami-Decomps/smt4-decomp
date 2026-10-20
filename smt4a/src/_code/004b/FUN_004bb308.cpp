#include "shard/Shard004B.h"

extern "C" {

extern s32 asdCecOutboxGetMessageCount(void);

u8 FUN_004bb308(void)
{
    return asdCecOutboxGetMessageCount() != 0;
}

} /* extern "C" */
