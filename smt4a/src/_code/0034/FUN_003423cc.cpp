#include "shard/Shard0034.h"

extern "C" {

extern ScreenRef DAT_0057f0c4;

void FUN_003423cc(u16 value)
{
    if (DAT_0057f0c4.instance != NULL) {
        DAT_0057f0c4.instance->unk5E6 = value;
    }
}

} /* extern "C" */
