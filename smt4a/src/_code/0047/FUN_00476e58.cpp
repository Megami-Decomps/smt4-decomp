/* NON_MATCHING: 66 lines (same row count as retail, 87): retail hoists the zero into r7 before the first compare so each
 * step/substep pair is one STM with the window deletion inline, while the build materializes the zero late (separate STRs)
 * and shares the deletion tail. */
#include "classes/AocMenu.h"
#include "shard/W4_Match3_AocMainA.h"
#include "nn/Result.h"

static __inline s32 resultLevel(u32 result)
{
    u32 level = result >> 27;
    if (result & 0x80000000)
        level -= 32;
    return static_cast<s32>(level);
}

extern "C" {
void nnOsThreadImplDestroy(void *operation);
u32 legacyResourceIdRemap(const u32 *result);
s32 resourceResultMatchesKnownRanges(const u32 *result);
s32 resourceResultMatchesRemappedCodes(const u32 *result);
s32 queryResultFailureOnly(const u32 *result);
void FUN_00473d74(AocMain *main, u32 result, u32 detail);

/* Completes a queued add-on operation, routing retriable and permanent errors to the error steps. */
void FUN_00476e58(AocMenu *menu, u32 unused, u32 nextStep)
{
    AocMain *main = g_aocMain;
    nnOsThreadImplDestroy(&main->thread);
    if (legacyResourceIdRemap(&menu->request.result.code) == 0xc9413891u)
        return;
    FUN_00473d74(g_aocMain, menu->request.result.code, menu->request.result.description);
    if (resourceResultMatchesKnownRanges(&menu->request.result.code)) {
        aocMenuChangeStep(menu, 3);
        return;
    }
    if (resourceResultMatchesRemappedCodes(&menu->request.result.code) ||
        nnResultIsFailure(queryResultFailureOnly(&main->queryResult))) {
        aocMenuChangeStep(menu, 3);
        return;
    }
    if (resultLevel(legacyResourceIdRemap(&menu->request.result.code)) == -4 ||
        resultLevel(legacyResourceIdRemap(&menu->request.result.code)) == -5 ||
        legacyResourceIdRemap(&menu->request.result.code) == 0xc8813890u) {
        RequestParameters parameters = menu->request;
        FUN_0047bc90(menu, &parameters);
        return;
    }
    aocMenuChangeStep(menu, nextStep);
}
}
