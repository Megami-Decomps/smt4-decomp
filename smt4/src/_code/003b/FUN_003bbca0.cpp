#include "common.h"

extern "C" {

extern int asdCecOutboxGetMessageCount(void);

u8 FUN_003bbca0(void)
{
    return asdCecOutboxGetMessageCount() != 0;
}

} /* extern "C" */
