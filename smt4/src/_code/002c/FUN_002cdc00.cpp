#include "ui/MessageMain.h"

extern "C" {

u8 FUN_002cdc00(void)
{
    return g_messageMain.banner->smallValue != 0;
}

} /* extern "C" */
