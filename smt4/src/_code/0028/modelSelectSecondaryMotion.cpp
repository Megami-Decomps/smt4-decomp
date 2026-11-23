/* NON_MATCHING: virtual-call operands, track accessor setup and blend-store scheduling differ. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlMotionInline.h"

/* Selects a secondary motion and updates its interpolation without exceeding the track's limit (the body is
 * shared with the callers retail inlined it into). */
extern "C" void modelSelectSecondaryMotion(AsdMdlNode *model, s32 index, f32 blend)
{
    asdMdlSelectSecondaryMotion(model, index, blend);
}
