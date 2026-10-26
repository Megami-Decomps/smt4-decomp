#include "script/ScriptVm.h"
#include "script/ScriptArgs.h"

extern "C" {

u32 scrGetCommandFrame(void)
{
    return g_scrContext.active->commandFrame;
}

} /* extern "C" */
