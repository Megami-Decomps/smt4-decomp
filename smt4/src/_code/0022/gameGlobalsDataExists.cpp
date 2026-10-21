#include "common.h"

extern "C" {

extern struct {
    u8 unk00[4];
    void *data;
} g_gameGlobals;

u8 gameGlobalsDataExists(void)
{
    return g_gameGlobals.data != NULL;
}

} /* extern "C" */
