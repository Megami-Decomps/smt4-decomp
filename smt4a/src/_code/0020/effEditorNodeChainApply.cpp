#include "AsdSDK/EffectEditorSelectionTransfer.h"

extern "C" {

void FUN_00241b24(void *object, s32 flag);


/* Calls FUN_00241b24(object, 1), then FUN_00241b24(node, 0) for each node chained after it. */
void effEditorNodeChainApply(EffectEditorOptions *options)
{
    EffectEditorOptionNode *object = static_cast<EffectEditorOptionNode *>(options);
    EffectEditorOptionNode *node;

    FUN_00241b24(object, 1);
    for (node = object->next; node != NULL; node = node->next) {
        FUN_00241b24(node, 0);
    }
}

} /* extern "C" */
