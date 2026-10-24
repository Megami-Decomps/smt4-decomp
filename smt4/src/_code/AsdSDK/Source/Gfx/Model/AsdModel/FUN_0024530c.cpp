/* NON_MATCHING: one instruction: retail materializes the NULL of the second cast in r8 right after the first type-walk call (`mov r8, #0`, used by `mov r5, r8`), armcc writes `mov r5, #0` at the use; everything else matches. */
#include "common.h"
#include "nw/gfx/AnimNode.h"

using namespace nw::gfx;

extern "C" {

/* Whether the animation node (a blender's members, recursively, or an evaluator) was built
 * for a model offering the same bone and material counts. */
int FUN_0024530c(AnimTargetModel *model, AnimNode *node)
{
    if (node == NULL) {
        return 1;
    }
    if (AnimBlender *blender = nw::ut::DynamicCast<AnimBlender>(node, AnimBlender::getTypeInfoStatic())) {
        s32 count = blender->membersEnd - blender->membersBegin;
        for (s32 i = 0; i < count; i++) {
            if (!FUN_0024530c(model, blender->membersBegin[i])) {
                return 0;
            }
        }
        return 1;
    }
    AnimEvaluator *evaluator = nw::ut::CheckedCast<AnimEvaluator>(node, AnimEvaluator::getTypeInfoStatic());
    AnimBinding *binding = evaluator->binding;
    if (model->boneSource->GetCount() == binding->boneCount &&
        model->materialSource->GetCount() == binding->materialCount) {
        return 1;
    }
    return 0;
}

}
