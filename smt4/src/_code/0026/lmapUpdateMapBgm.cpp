#include "common.h"
#include "map/lmapMain.h"
#include "gamedata/Table1bOr1c.h"
#include "mikado/mikadoMain.h"
#include <stddef.h>

/* The fields of g_gameState this music gate uses. */
struct GameStateBgmView {
    u8 unk000[0x28];
    u32 bgmId;          // 0x028
    u8 unk02C[0x11D - 0x2C];
    s8 bgmReleased;     // 0x11D
    u8 unk11E[0x145 - 0x11E];
    s8 scriptPending;   // 0x145
};
typedef char GameStateBgmViewLayoutCheck[
    offsetof(GameStateBgmView, bgmReleased) == 0x11D &&
    offsetof(GameStateBgmView, scriptPending) == 0x145 ? 1 : -1];

/* The music fields beyond the recovered map-main state prefix. */
struct LmapBgmTailView {
    u8 unk000[0x40];
    s32 area;           // 0x040
    u8 unk044[4];
    s32 kind;           // 0x048
    u8 unk04C[0x994 - 0x4C];
    s32 mode;           // 0x994
    u8 unk998;
    s8 suppressed;      // 0x999
};

extern "C" {
extern LmapBgmTailView *g_lmapMainState;
extern GameStateBgmView g_gameState;

s32 bgmGetStateById(u32 id);
s32 FUN_00287328(u32 id);
u16 rosterGetLeaderId(void);

/* Selects the map music from the area, or a story override, and starts it unless it is already
 * playing; releases the music while a script is pending, the music is held or the map suppresses it. */
void lmapUpdateMapBgm(void)
{
    GameStateBgmView *game = &g_gameState;
    LmapBgmTailView *map = g_lmapMainState;

    if (game->scriptPending != 0 || game->bgmReleased == 0 || map->suppressed != 0) {
        bgmReleaseStopped();
        g_gameState.bgmReleased = 1;
        return;
    }

    if (map->area == 0x66) {
        g_gameState.bgmId = 0x01000055;
    } else if (map->area == 0x67) {
        g_gameState.bgmId = 0x01000056;
    } else if (map->kind == 5) {
        g_gameState.bgmId = 0x01000054;
    } else {
        g_gameState.bgmId = 0x01000053;
    }

    u32 id;
    if (map->mode != 1 && map->mode != 2 && (id = rosterGetLeaderId()) != 0) {
        const s32 overrideState = table1bOr1cGetRecordValue(id);
        if (overrideState == 1) {
            g_gameState.bgmId = 0x01000037;
        } else if (overrideState == 0) {
            g_gameState.bgmId = 0x01000038;
        }
    }

    const s32 state = bgmGetStateById(g_gameState.bgmId);
    if (state == 0) {
        bgmReleaseStopped();
    } else if (state == 1 || state == 2) {
        return;
    }
    FUN_00287328(g_gameState.bgmId);
}
}
