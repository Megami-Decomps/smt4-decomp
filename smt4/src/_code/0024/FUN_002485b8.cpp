#include "ui/MessageMain.h"

extern "C" {

u8 FUN_002485b8(void)
{
    return g_messageMain.banner->wideValue != 0;
}

} /* extern "C" */
