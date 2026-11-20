/* NON_MATCHING: the bit test now matches (index and mask written at each use); retail clears `discovered` after the first call
 * (the build before it), picks r2 for the remainder and swaps r4/r5 for the message buffer and its zero. */
#include "runtime/Stdio.h"
#include "gamedata/MapSaveBlock.h"
#include "map/MapIfTimer.h"
#include <stddef.h>
#include "gamedata/GameDataAccess.h"
#include "gamedata/GameDataAccess_VariantE.h"
#include "game/GameState.h"

extern "C" {
extern char DAT_004b7608[];
extern const char DAT_00404464[];
u32 messageVoiceFlagsGet(void);
s32 appCheckPurchaseRequirements(u32 app);
u32 messageVoiceBankGet(void);
void voiceRequestPlayFile(s32 layer, u32 entry, u32 first, u32 second, f32 scaleX, f32 scaleY);

// Remember newly available applications and display the map notification when permitted.
void popupMarkNewlySeenEntries(s32 suppressNotification)
{
    u32 displayFlags = messageVoiceFlagsGet() | 4;
    bool discovered = false;
    for (u32 app = 1; app < 141; ++app) {
        MapSaveBlock *map = gameGetMapBlock();
        if ((map->discoveredApps[(s32)app / 8] & (1 << ((s32)app % 8))) == 0) {
            if (flagBitIsSet(app) != 0) {
                gameGetMapBlock()->discoveredApps[(s32)app / 8] |= 1 << ((s32)app % 8);
            } else if (appCheckPurchaseRequirements(app) != 2) {
                gameGetMapBlock()->discoveredApps[(s32)app / 8] |= 1 << ((s32)app % 8);
                discovered = true;
            }
        }
    }
    if (suppressNotification == 0 && discovered && g_gameState.mapId != 0x24 && gameFlagIsSet(0x408) != 0) {
        DAT_004b7608[0] = '\0';
        __2sprintf(DAT_004b7608, DAT_00404464);
        MapIfTimer *timer = g_mapIfTimer;
        timer->unk14 = reinterpret_cast<u32>(DAT_004b7608);
        timer->state = 3;
        timer->frames = 0;
        voiceRequestPlayFile(1, 0x61A84, messageVoiceBankGet(), displayFlags, 0.707f, 0.707f);
    }
}
}
