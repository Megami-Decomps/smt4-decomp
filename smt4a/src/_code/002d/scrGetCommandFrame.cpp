#include "script/ScriptVm.h"
#include "util/ScrGetCommandFrame.h"

extern "C" {

u32 scrGetCommandFrame(void)
{
    return g_scrContext.active->commandFrame;
}

} /* extern "C" */
