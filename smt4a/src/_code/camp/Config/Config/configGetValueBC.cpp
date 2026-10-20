/* Returns the Config screen's value at +0xBC. */
#include "common.h"
#include "camp/Config/Config.h"

extern "C" {

extern ConfigWorkA *g_config;

u32 configGetValueBC(void)
{
    return g_config->unkBC;
}

} /* extern "C" */
