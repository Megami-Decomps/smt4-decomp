#include "common.h"

extern "C" {

typedef struct ChainNode {
    u8 unk00[8];
    struct ChainNode *link;        /* 0x08 */
} ChainNode;

__declspec(noreturn) __weak void FUN_0025a030_hook(ChainNode *node);

void FUN_0025a030(ChainNode *node)
{
    FUN_0025a030_hook(node->link->link);
}

} /* extern "C" */
