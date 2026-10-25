#include "common.h"
#include "shard/W4_Match6_BibleScreen.h"

extern "C" {

extern BibleScript *FUN_00297060(BibleFiles files);
extern int messageTargetSetValue(int, int);
extern int messageBannerInitSelection(int, int);
extern int buttonHelpSetPreset(int);
extern int FUN_003aacd0(void);
extern int flaggedValueHolderGetTotal(u8 *cursor);
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
        scroll = screen->page[flaggedValueHolderGetTotal(screen->cursor)].scroll;
        messageBannerInitSelection(1, 0);
        messageTargetSetValue(-scroll, 0);
        screen->state = 2;
        screen->stateArg = 0;
    }
}

}
