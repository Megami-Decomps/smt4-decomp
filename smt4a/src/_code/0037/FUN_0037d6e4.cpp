#include "ui/MessageMainA.h"
#include "shard/Shard0037.h"
#include "code/Code0037.h"

extern "C" {

void FUN_0037d6e4(u8 value)
{
    g_messageMain.banner->activeValueEnabled = value;
}

} /* extern "C" */
