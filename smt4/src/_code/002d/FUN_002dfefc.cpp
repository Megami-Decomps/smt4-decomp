/* NON_MATCHING: byte-index division is retained in a shifted register instead of retail's deferred ASR; zero/bitmask registers differ. */
#include "map/MapIfTimer.h"
#include <stddef.h>
#include "gamedata/GameDataAccess.h"
#include "gamedata/GameDataAccess_VariantE.h"
#include "shard/SaveWork.h"

struct MapAppDiscoveryState {
    u8 unk000[0xD9C];
    u8 discovered[18]; // app IDs 1..140
};
typedef char MapAppDiscoveryStateOffsetCheck[
    offsetof(MapAppDiscoveryState, discovered) == 0xD9C ? 1 : -1];

extern "C" {
extern s32 g_gameState;
extern char DAT_004b7608[];
extern const char DAT_00404464[];
u32 FUN_002bfdd4(void);
s32 appCheckPurchaseRequirements(u32 app);
s32 textFormatBuffer(char *buffer, const char *format, ...);
u32 FUN_002bfdc4(void);
void FUN_002bfc24(s32 layer, u32 entry, u32 first, u32 second, f32 scaleX, f32 scaleY);

// Remember newly available applications and display the map notification when permitted.
void FUN_002dfefc(s32 suppressNotification)
{
    u32 displayFlags = FUN_002bfdd4() | 4;
    bool discovered = false;
    for (u32 app = 1; app < 141; ++app) {
        MapAppDiscoveryState *map = reinterpret_cast<MapAppDiscoveryState *>(gameGetMapBlock());
        s32 byteIndex = (s32)app / 8;
        u32 mask = 1 << ((s32)app % 8);
        if ((map->discovered[byteIndex] & mask) == 0) {
            if (flagBitIsSet(app) != 0) {
                reinterpret_cast<MapAppDiscoveryState *>(gameGetMapBlock())->discovered[byteIndex] |= (u8)mask;
            } else if (appCheckPurchaseRequirements(app) != 2) {
                reinterpret_cast<MapAppDiscoveryState *>(gameGetMapBlock())->discovered[byteIndex] |= (u8)mask;
                discovered = true;
            }
        }
    }
    if (suppressNotification == 0 && discovered && g_gameState != 0x24 && gameFlagIsSet(0x408) != 0) {
        DAT_004b7608[0] = '\0';
        textFormatBuffer(DAT_004b7608, DAT_00404464);
        MapIfTimer *timer = g_mapIfTimer;
        timer->unk14 = reinterpret_cast<u32>(DAT_004b7608);
        timer->state = 3;
        timer->frames = 0;
        FUN_002bfc24(1, 0x61A84, FUN_002bfdc4(), displayFlags, 0.707f, 0.707f);
    }
}
}
