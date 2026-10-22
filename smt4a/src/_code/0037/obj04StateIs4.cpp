#include "shard/Shard0037.h"

extern "C" {

extern MessageGlobalsA g_messageMain;

u8 obj04StateIs4(void)
{
    return g_messageMain.state->state == 4;
}

} /* extern "C" */
