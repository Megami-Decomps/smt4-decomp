#include "common.h"

extern "C" {

extern int asdCecOutboxGetMessageCount(void);

u8 asdCecOutboxHasMessage(void)
{
    return asdCecOutboxGetMessageCount() != 0;
}

} /* extern "C" */
