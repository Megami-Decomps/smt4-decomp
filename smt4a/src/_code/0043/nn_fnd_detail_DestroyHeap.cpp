#include "common.h"

extern "C" {

void nnFndDetailRemoveBlockFromRegion(void *node);

/* Forwards to nnFndDetailRemoveBlockFromRegion, the function that follows it. */
void nn_fnd_detail_DestroyHeap(void *node)
{
    nnFndDetailRemoveBlockFromRegion(node);
}

} /* extern "C" */
