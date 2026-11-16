/* NON_MATCHING: same row count as retail (87); retail hoists the zero into r7 before the first compare so each state/progress pair is one STM with the release inline, while the build materializes the zero late (separate STRs) and shares the release tail. */
#include "shard/W6_W6Match5_SelectionTransition.h"
#include "shard/W4_Match3_AocMainA.h"
#include "nn/Result.h"

static __inline s32 resultLevel(u32 result)
{
    u32 level = result >> 27;
    if (result & 0x80000000)
        level -= 32;
    return static_cast<s32>(level);
}

/* Moves the transition to `state` and releases the resource it was holding. */
static __inline void leaveTransition(SelectionTransition *transition, s32 state)
{
    transition->state = state;
    transition->progress = 0;
    TransitionResource *resource = transition->resource;
    if (resource) {
        resource->vtable->release(resource);
        transition->resource = 0;
    }
}

extern "C" {
void FUN_001b3428(void *operation);
u32 legacyResourceIdRemap(const u32 *result);
s32 resourceResultMatchesKnownRanges(const u32 *result);
s32 resourceResultMatchesRemappedCodes(const u32 *result);
s32 queryResultFailureOnly(const u32 *result);
void FUN_00473d74(AocMainA *main, u32 result, u32 detail);
void FUN_0047bc90(SelectionTransition *transition, const RequestParameters *parameters);

// Complete a queued add-on operation, routing retriable/permanent errors to the error transition.
void FUN_00476e58(SelectionTransition *transition, u32 unused, s32 nextState)
{
    AocMainA *main = g_aocMain;
    FUN_001b3428(main->query.operation);
    if (legacyResourceIdRemap(&transition->query.result.result.code) == 0xc9413891u)
        return;
    FUN_00473d74(g_aocMain, transition->query.result.result.code, transition->query.result.result.description);
    if (resourceResultMatchesKnownRanges(&transition->query.result.result.code)) {
        leaveTransition(transition, 3);
        return;
    }
    if (resourceResultMatchesRemappedCodes(&transition->query.result.result.code) ||
        nnResultIsFailure(queryResultFailureOnly(&main->query.result))) {
        leaveTransition(transition, 3);
        return;
    }
    if (resultLevel(legacyResourceIdRemap(&transition->query.result.result.code)) == -4 ||
        resultLevel(legacyResourceIdRemap(&transition->query.result.result.code)) == -5 ||
        legacyResourceIdRemap(&transition->query.result.result.code) == 0xc8813890u) {
        RequestParameters parameters = transition->query.result;
        FUN_0047bc90(transition, &parameters);
        return;
    }
    leaveTransition(transition, nextState);
}
}
