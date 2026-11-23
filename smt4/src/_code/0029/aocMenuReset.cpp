/* NON_MATCHING: the step change and the window release match retail; retail clears +0x0C with write-back (`str r5, [r4, #12]!`) and stores the 50 at +0x238 from that base after the flags store, where armcc stores +0x238 first and +0x0C after the next argument move. */
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
