#include "AsdSDK/EffectEditorSelectionTransfer.h"

extern "C" {

int FUN_001b1b8c(void *node, int flag);


void effEditorNodeChainApply(EffectEditorOptions *options)
{
    EffectEditorOptionNode *node = static_cast<EffectEditorOptionNode *>(options);
    EffectEditorOptionNode *child;

    FUN_001b1b8c(node, 1);
    for (child = node->next; child != NULL; child = child->next) {
        FUN_001b1b8c(child, 0);
    }
}

} /* extern "C" */
