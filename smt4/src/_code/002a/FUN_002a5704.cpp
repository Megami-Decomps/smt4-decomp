#include "common.h"

extern "C" {

typedef struct ChainNode {
    u8 unk00[8];
    struct ChainNode *link;        /* 0x08 */
} ChainNode;

__declspec(noreturn) __weak void FUN_002a5704_hook(ChainNode *node);

void FUN_002a5704(ChainNode *node)
{
    FUN_002a5704_hook(node->link->link);
}

} /* extern "C" */
