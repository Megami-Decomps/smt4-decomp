#include "shard/Shard003C.h"

extern "C" {

extern StateHolder1C *DAT_0057f268;

void FUN_003c1094(s32 flag)
{
    u32 value;

    if (DAT_0057f268 != NULL) {
        value = (flag != 0) ? 8 : 0x18;
        DAT_0057f268->unk20 = value;
    }
}

} /* extern "C" */
