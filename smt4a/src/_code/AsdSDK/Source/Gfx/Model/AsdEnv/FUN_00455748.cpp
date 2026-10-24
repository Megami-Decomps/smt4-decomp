/* NON_MATCHING: retail keeps one zero in r8 (`mov r5, r8` when the leaf cast fails, hoisted above the group cast) and loads the first vtable slot through the copy of `node` (r4); the build uses `mov r5, #0` and the argument register, and lays out the shared false return after the true return. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"

extern "C" nw::ut::RuntimeTypeInfo g_animBlenderTypeInfo;
extern "C" nw::ut::RuntimeTypeInfo g_animEvaluatorTypeInfo;

/* Whether every leaf under the environment node was built for the display sizes of the context. */
extern "C" bool FUN_00455748(AsdEnvContext *context, AsdEnvNode *node)
{
    if (node != NULL) {
        AsdEnvGroup *group = nw::ut::DynamicCast<AsdEnvGroup>(node, &g_animBlenderTypeInfo);
        if (group != NULL) {
            s32 count = group->children.size();
            for (s32 i = 0; i < count; i++) {
                if (!FUN_00455748(context, group->children[i])) {
                    return false;
                }
            }
            return true;
        }
        AsdEnvLeaf *leaf = nw::ut::CheckedCast<AsdEnvLeaf>(node, &g_animEvaluatorTypeInfo);
        AsdEnvLeafData *data = leaf->data;
        return context->widthSource->getValue() == data->width && context->heightSource->getValue() == data->height;
    }
    return true;
}
