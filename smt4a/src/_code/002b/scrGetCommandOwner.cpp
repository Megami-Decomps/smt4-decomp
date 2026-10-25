#include "script/ScriptVm.h"
#include "script/ScriptArgs.h"

extern "C" {

u32 scrGetCommandOwner(void)
{
    return g_scrContext.active->commandOwner;
}

} /* extern "C" */
