#include "common.h"
#include "classes/Obj422448.h"
#include "shard/W4_Match6_BibleScreen.h"
#include "script/scrScriptProcess.h"

extern "C" {

extern int messageTargetSetValue(int, int);
extern int messageBannerInitSelection(int, int);
extern int buttonHelpSetPreset(int);
extern int FUN_003aacd0(void);
extern int flaggedValueHolderGetTotal(u8 *cursor);
extern int spriteTable22AllLoaded(void);

/* Once the sprite table is loaded: builds the script from the two files, starts it and enters state 2 with the selected page's scroll. */
}

void Obj422448::bibleScreenStartScript()
{
    BibleScreen * screen = reinterpret_cast<BibleScreen *>(this);
    if (spriteTable22AllLoaded() != 0) {
        ScriptProcess *script = scrScriptProcessCreate(screen->files.bibleBf, screen->files.bibleMbm);
        s32 scroll;

        screen->script = script;
        script->mode = 1;
        FUN_003aacd0();
        buttonHelpSetPreset(0x3E);
        scroll = screen->page[flaggedValueHolderGetTotal(screen->cursor)].scroll;
        messageBannerInitSelection(1, 0);
        messageTargetSetValue(-scroll, 0);
        screen->state = 2;
        screen->stateArg = 0;
    }
}
