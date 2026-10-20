#include "common.h"

extern "C" {

extern struct {
    u8 unk00[4];
    void *data;
} g_gameGlobals;

u8 FUN_0022e520(void)
{
    return g_gameGlobals.data != NULL;
}

} /* extern "C" */
