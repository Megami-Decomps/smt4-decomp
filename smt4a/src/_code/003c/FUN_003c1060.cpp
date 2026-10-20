#include "shard/Shard003C.h"

extern "C" {

extern PanelRef DAT_0057f588;

void FUN_003c1060(void)
{
    if (DAT_0057f588.panel != NULL) {
        DAT_0057f588.panel->unk30 = 1;
    }
}

} /* extern "C" */
