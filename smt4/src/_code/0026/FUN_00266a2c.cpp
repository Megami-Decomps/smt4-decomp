/* NON_MATCHING: BGM-state dispatch order and local-tail/global-anchor addressing differ. */
#include "common.h"
#include "map/lmapMain.h"
#include "gamedata/Table1bOr1c.h"
#include "mikado/mikadoMain.h"
#include <stddef.h>

extern "C" {
extern LmapMainState *g_lmapMainState;
extern u32 DAT_0049f944;
extern s8 DAT_0049fa39;
extern s8 DAT_0049fa61;

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

    if (DAT_0049fa61 != 0 || DAT_0049fa39 == 0 ||
        tail->suppressed != 0) {
        bgmReleaseStopped();
        DAT_0049fa39 = 1;
        return;
    }

    if (g_lmapMainState->unk40 == 0x66) {
        DAT_0049f944 = 0x01000055;
    } else if (g_lmapMainState->unk40 == 0x67) {
        DAT_0049f944 = 0x01000056;
    } else if (g_lmapMainState->unk48 == 5) {
        DAT_0049f944 = 0x01000054;
    } else {
        DAT_0049f944 = 0x01000053;
    }

    u32 id;
    if (tail->mode != 1 && tail->mode != 2 && (id = FUN_002903f0()) != 0) {
        const s32 overrideState = table1bOr1cGetRecordValue(id);
        if (overrideState == 1) {
            DAT_0049f944 = 0x01000037;
        } else if (overrideState == 0) {
            DAT_0049f944 = 0x01000038;
        }
    }

    const s32 state = bgmGetStateById(DAT_0049f944);
    if (state == 1 || state == 2) {
        return;
    }
    if (state == 0) {
        bgmReleaseStopped();
    }
    FUN_00287328(DAT_0049f944);
}
}
