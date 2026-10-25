#include "ui/ButtonHelp.h"
#include "shard/FUN_0026b564.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;

u8 FUN_0026b564(void)
{
    return g_buttonHelp.work->state != 3;
}

} /* extern "C" */
