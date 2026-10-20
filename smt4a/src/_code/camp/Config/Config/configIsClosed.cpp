/* Returns nonzero when the Config screen is not open or has reached its closed state (6). */
#include "common.h"
#include "camp/Config/Config.h"

extern "C" {

extern ConfigWorkA *g_config;

u8 configIsClosed(void)
{
    int state = 0;

    if (g_config != NULL) {
        state = g_config->state;
    }
    return g_config == NULL || state == 6;
}

} /* extern "C" */
