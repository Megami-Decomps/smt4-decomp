#include "shard/Shard003C.h"

extern "C" {

extern PanelRef DAT_0057f588;

void FUN_003c5fc4(u8 value)
{
    if (DAT_0057f588.panel != NULL) {
        DAT_0057f588.panel->unk2F = value;
    }
}

} /* extern "C" */
