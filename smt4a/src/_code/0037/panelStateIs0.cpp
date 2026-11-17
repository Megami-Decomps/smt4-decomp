#include "ui/MessageMainA.h"
#include "shard/Shard0037.h"

extern "C" {

u8 panelStateIs0(void)
{
    return g_messageMain.banner->counterState == 0;
}

} /* extern "C" */
