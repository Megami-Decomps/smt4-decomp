#include "camp/Config/Config.h"

extern "C" {

extern ConfigWork *g_config;

/* Reports whether the configuration screen is closed. */
bool configIsClosed(void)
{
    return g_config == NULL || g_config->state == 3;
}

} /* extern "C" */
