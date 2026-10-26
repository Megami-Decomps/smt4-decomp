/* Run window: sets its text, marks it active and moves it to its opening state (1). */
#include "common.h"
#include "font/SearchWin/RunWin.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"

extern "C" {

int FUN_002bf810(int id);

extern RunWinWork *g_runWin;

u32 runWinOpenState(void)
{
    RunWinWork *run = g_runWin;

    /* the full-width Shift-JIS text "Activating...", then a newline */
    textFormatBuffer((char *)run->text,
                     "\x82\x60\x82\x83\x82\x94\x82\x89\x82\x96\x82\x81\x82\x94\x82\x89\x82\x8e\x82\x87\x81\x44\x81\x44\x81\x44\n");
    u32 result = 1;
    run->active = result;
    run->state = result;
    FUN_002bf810(0x10001fd);
    return result;
}

} /* extern "C" */
