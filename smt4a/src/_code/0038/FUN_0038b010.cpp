#include "shard/Shard0038.h"

extern "C" {

extern PanelRef g_messageMain;

void FUN_0038b010(u8 value)
{
    g_messageMain.panel->unk32 = value;
}

} /* extern "C" */
