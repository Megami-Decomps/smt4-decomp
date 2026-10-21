#include "shard/Shard003A.h"

extern "C" {

extern u8 g_messageMain;

void messageMainSetFlag(u8 value)
{
    g_messageMain = value;
}

} /* extern "C" */
