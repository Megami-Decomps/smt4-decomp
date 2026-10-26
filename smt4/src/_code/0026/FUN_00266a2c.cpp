/* NON_MATCHING: the three globals are now g_gameState fields; retail addresses them from one literal g_gameState+0x100 (r1) and r1-256 (r4), build loads g_gameState itself. */
#include "common.h"
#include "map/lmapMain.h"
#include "gamedata/Table1bOr1c.h"
#include "mikado/mikadoMain.h"
#include "map/mapDepart.h"
#include <stddef.h>

extern "C" {
extern LmapMainState *g_lmapMainState;
extern GameState g_gameState;

s32 bgmGetStateById(u32 id);
s32 FUN_00287328(u32 id);
u16 FUN_002903f0(void);

void FUN_00266a2c(void)
{
    /* These accesses are beyond the recovered canonical type's end.
     * This local view starts at byte 0x994, not at a new object boundary.
     * Its rounded sizeof is a C++ layout property, not an allocation size. */
    struct BgmTailViewIV {
        s32 mode;
        u8 unk998;
        u8 suppressed;
    };
    typedef char BgmTailViewIVLayoutCheck[
        offsetof(BgmTailViewIV, mode) == 0 &&
        offsetof(BgmTailViewIV, suppressed) == 5 &&
        sizeof(BgmTailViewIV) == 8 ? 1 : -1];

    const BgmTailViewIV *tail = reinterpret_cast<const BgmTailViewIV *>(
        reinterpret_cast<const u8 *>(g_lmapMainState) + 0x994);

    if (g_gameState.scriptPending != 0 || g_gameState.bgmReleased == 0 ||
        tail->suppressed != 0) {
        bgmReleaseStopped();
        g_gameState.bgmReleased = 1;
        return;
    }

    if (g_lmapMainState->unk40 == 0x66) {
        g_gameState.bgmId = 0x01000055;
    } else if (g_lmapMainState->unk40 == 0x67) {
        g_gameState.bgmId = 0x01000056;
    } else if (g_lmapMainState->unk48 == 5) {
        g_gameState.bgmId = 0x01000054;
    } else {
        g_gameState.bgmId = 0x01000053;
    }

    u32 id;
    if (tail->mode != 1 && tail->mode != 2 && (id = FUN_002903f0()) != 0) {
        const s32 overrideState = table1bOr1cGetRecordValue(id);
        if (overrideState == 1) {
            g_gameState.bgmId = 0x01000037;
        } else if (overrideState == 0) {
            g_gameState.bgmId = 0x01000038;
        }
    }

    const s32 state = bgmGetStateById(g_gameState.bgmId);
    if (state == 1 || state == 2) {
        return;
    }
    if (state == 0) {
        bgmReleaseStopped();
    }
    FUN_00287328(g_gameState.bgmId);
}
}
