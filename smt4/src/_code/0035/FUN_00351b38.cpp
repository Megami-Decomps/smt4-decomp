#include "common.h"

extern "C" {

extern u32 g_y2rTransferEvent;

u32 *FUN_00351b38(void)
{
    return &g_y2rTransferEvent;
}

} /* extern "C" */
