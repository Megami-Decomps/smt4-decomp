#include "shard/Shard004D.h"

extern "C" {

extern void FUN_00169ddc(s32 event);

void sendEvent1000210(void)
{
    FUN_00169ddc(0x1000210);
}

} /* extern "C" */
