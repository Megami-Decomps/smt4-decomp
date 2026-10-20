#include "shard/Shard003C.h"

extern "C" {

extern PanelRef g_messageMain;

void FUN_003c5fc4(u8 value)
{
    if (g_messageMain.panel != NULL) {
        g_messageMain.panel->unk2F = value;
    }
}

} /* extern "C" */
