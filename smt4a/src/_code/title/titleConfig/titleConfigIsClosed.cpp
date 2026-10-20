#include "title/titleConfig.h"

extern "C" {

s32 jobIsValid(u32 job);

extern TitleConfigA *g_titleConfig;

/* True when the config menu is gone or its job is no longer running. */
bool titleConfigIsClosed(void)
{
    return g_titleConfig == NULL || jobIsValid(g_titleConfig->job) == 0;
}

} /* extern "C" */
