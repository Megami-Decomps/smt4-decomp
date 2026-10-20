#include "common.h"
#include "shard/W4_Match6_BibleScreen.h"

extern "C" {

extern BibleScript *FUN_00297060(BibleFiles files);
extern int FUN_0029e620(int, int);
extern int FUN_0029e648(int, int);
extern int buttonHelpSetPreset(int);
extern int FUN_003aacd0(void);
extern int FUN_0023360c(u8 *cursor);
extern int spriteTable22AllLoaded(void);

/* Once the sprite table is loaded: builds the script from the two files, starts it and enters state 2 with the selected page's scroll. */
void bibleScreenStartScript(BibleScreen *screen)
{
    if (spriteTable22AllLoaded() != 0) {
        BibleScript *script = FUN_00297060(screen->files);
        s32 scroll;

        screen->script = script;
        script->started = 1;
        FUN_003aacd0();
        buttonHelpSetPreset(0x3E);
        scroll = screen->page[FUN_0023360c(screen->cursor)].scroll;
        FUN_0029e648(1, 0);
        FUN_0029e620(-scroll, 0);
        screen->state = 2;
        screen->stateArg = 0;
    }
}

}
