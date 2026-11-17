#include "ui/ButtonHelpGlobal.h"
#include "shard/Shard0035.h"

extern "C" {

void screenSetColor670(u32 a, u8 b, u8 c, u8 d)
{
    ButtonHelpWorkA *screen = g_buttonHelp.work;

    screen->text.highlightStyle = a;
    screen->text.highlightLine = b;
    screen->text.highlightStart = c;
    screen->text.highlightLength = d;
}

} /* extern "C" */
