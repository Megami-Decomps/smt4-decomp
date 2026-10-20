#include "shard/Shard004D.h"

extern "C" {

extern void FUN_00169ddc(s32 event);

void sendEvent100020D(void)
{
    FUN_00169ddc(0x100020d);
}

} /* extern "C" */
