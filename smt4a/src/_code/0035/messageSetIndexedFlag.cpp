#include "ui/MessageMainA.h"

extern "C" {

void messageSetIndexedFlag(u32 index, u8 value)
{
    MessageWindowA *banner = g_messageMain.banner;
    if (index < 4) {
        banner->indexedFlags[index] = value;
    }
}

} /* extern "C" */
