#include "ui/MessageMainA.h"
#include "shard/Shard0037.h"

extern "C" {

u8 obj04StateIs4(void)
{
    return g_messageMain.window->state == 4;
}

} /* extern "C" */
