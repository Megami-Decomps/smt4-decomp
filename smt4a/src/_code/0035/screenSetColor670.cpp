#include "ui/ButtonHelp.h"
#include "shard/Shard0035.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;

void screenSetColor670(u32 a, u8 b, u8 c, u8 d)
{
    ButtonHelpWorkA *screen = g_buttonHelp.work;

    screen->unk670 = a;
    screen->unk674 = b;
    screen->unk675 = c;
    screen->unk676 = d;
}

} /* extern "C" */
