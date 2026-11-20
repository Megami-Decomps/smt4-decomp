/* NON_MATCHING: the bit test now matches (index and mask written at each use, as smt4 FUN_002dfefc); retail picks r2 for the
 * remainder and fills the popup with post-increment stores. */
#include "runtime/Stdio.h"
#include "gamedata/MapSaveBlockA.h"
#include "game/GameStateA.h"
#include "code/Code0015.h"
#include "shard/W6_W6Match8_StatGrowth.h"
#include "map/PopupStateA.h"

extern "C" {

extern const char DAT_00531ac8[]; /* 0x531ac8 */
extern char DAT_0060a198[]; /* 0x60a198 */

extern int gameFlagIsSet(u32 flag);
extern int shopGetEntryAvailability(u32 id);

/* Marks every id 1-0x8C whose data flag is set (or whose check does not return 2) as seen; when something new was marked outside a popup, opens popup type 0x18. */
void popupMarkNewlySeenEntries(int popupOpen)
{
    u32 id;
    u8 marked;

    messageVoiceFlagsGet();
    marked = 0;
    for (id = 1; id < 0x8D; id++) {
        MapSaveBlockA *block = gameFlagsGetBlock();
        if ((block->discoveredApps[(s32)id / 8] & (1 << ((s32)id % 8))) == 0) {
            if ((int)gameDataFlagTestBit(id) != 0) {
                gameFlagsGetBlock()->discoveredApps[(s32)id / 8] |= 1 << ((s32)id % 8);
            } else if (shopGetEntryAvailability(id) != 2) {
                gameFlagsGetBlock()->discoveredApps[(s32)id / 8] |= 1 << ((s32)id % 8);
                marked = 1;
            }
        }
    }
    if (popupOpen == 0 && marked && g_gameState.mapId != 0x24 && gameFlagIsSet(0x408) != 0) {
        __2sprintf(DAT_0060a198, DAT_00531ac8);
        g_popupState->state = 0x18;
        g_popupState->timer = 0;
        g_popupState->message = DAT_0060a198;
    }
}

} /* extern "C" */
