/* NON_MATCHING: byte-index division is retained in a shifted register instead of retail's deferred ASR; zero/bitmask registers differ. */
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
void FUN_002dfefc(s32 suppressNotification)
{
    u32 displayFlags = messageVoiceFlagsGet() | 4;
    bool discovered = false;
    for (u32 app = 1; app < 141; ++app) {
        MapSaveBlock *map = gameGetMapBlock();
        s32 byteIndex = (s32)app / 8;
        u32 mask = 1 << ((s32)app % 8);
        if ((map->discoveredApps[byteIndex] & mask) == 0) {
            if (flagBitIsSet(app) != 0) {
                gameGetMapBlock()->discoveredApps[byteIndex] |= (u8)mask;
            } else if (appCheckPurchaseRequirements(app) != 2) {
                gameGetMapBlock()->discoveredApps[byteIndex] |= (u8)mask;
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
