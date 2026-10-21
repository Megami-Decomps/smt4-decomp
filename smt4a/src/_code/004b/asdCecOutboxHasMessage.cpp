#include "shard/Shard004B.h"

extern "C" {

extern s32 asdCecOutboxGetMessageCount(void);

u8 asdCecOutboxHasMessage(void)
{
    return asdCecOutboxGetMessageCount() != 0;
}

} /* extern "C" */
