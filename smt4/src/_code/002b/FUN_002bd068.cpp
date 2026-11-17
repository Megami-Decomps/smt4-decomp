#include "common.h"
#include "shard/W6_W6Match5_EntryCollection.h"

extern "C" {

/* A debug hook armlink removed (the jump to it became a nop). */
__declspec(noreturn) __weak void FUN_002bd068_hook(void);

const char *FUN_002bd068(u16 id)
{
    FUN_002bd068_hook();
}

} /* extern "C" */
