/* NON_MATCHING: std::remove inlines std::remove_copy here; retail calls the out-of-line remove_copy instantiation (_ZSt11remove_copyIPiS0_iET0_T_S2_S1_RKT1_) */
#include <algorithm>
#include <vector>
#include "common.h"

struct TreeNode {
    u8 unk00[0xC];   // 0x00
    u32 link;        // 0x0C
};

struct NodeList {
    u8 unk00[8];                    // 0x00
    std::vector<TreeNode *> nodes;  // 0x08
};

/* Removes the node from the list; a removed node is unlinked. Returns whether anything was removed. */
extern "C" bool FUN_00197eb0(NodeList *list, TreeNode *node)
{
    std::vector<TreeNode *>::iterator newEnd = std::remove(list->nodes.begin(), list->nodes.end(), node);
    std::vector<TreeNode *>::iterator oldEnd = list->nodes.end();

    list->nodes.erase(newEnd, oldEnd);
    bool removed = oldEnd != newEnd;
    if (removed) {
        node->link = 0;
    }
    return removed;
}
