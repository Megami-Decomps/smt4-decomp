#include "shard/Shard0037.h"

extern "C" {

extern PanelRef g_messageMain;

u8 obj04StateIs4(void)
{
    return g_messageMain.unk04->state == 4;
}

} /* extern "C" */
