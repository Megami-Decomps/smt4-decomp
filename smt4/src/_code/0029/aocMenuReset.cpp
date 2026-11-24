/* NON_MATCHING: the step change and the window release match retail; retail clears +0x0C with write-back (`str r5, [r4, #12]!`) and stores the 50 at +0x238 from that base after the flags store, where armcc stores +0x238 first and +0x0C after the next argument move.
 * Both twins are IDENTICAL when the two stores go through an inline taking a pointer to +0x0C (an object there whose
 * first word is cleared and whose word at +0x22C is set to 50), but nothing else shows an object at +0x0C (the
 * constructor builds the requests from the menu's own base). */
#include "classes/AocMenu.h"
#include "shard/GameDataBlocks.h"
#include "gamedata/GameDataAccess_Smt4.h"

extern "C" {
void messageMainSetEnabled(s32 enabled);

/* Resets the add-on content menu after construction: step 0, no window, the flags and counters cleared. */
void aocMenuReset(AocMenu *menu)
{
    aocMenuChangeStep(menu, 0);
    menu->flags = 0;
    menu->callbacks.unk000C = 0;
    menu->unk0238 = 50;
    gameDataBlocksAddFlags(4);
    gameDataFlagsSetBits(4);
    messageMainSetEnabled(0);
}

} /* extern "C" */
