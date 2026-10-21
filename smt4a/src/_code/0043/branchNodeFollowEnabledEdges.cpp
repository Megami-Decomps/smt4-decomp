/* NON_MATCHING: compiler changes the initial empty-list check, node/edge register lifetimes and loop latch; three structured traversal forms do not reproduce retail. */
#include "common.h"

struct ConditionalBranchNode;

struct ConditionalBranchLink {
    ConditionalBranchLink* previous; // 0x00
    ConditionalBranchLink* next;     // 0x04
    ConditionalBranchNode* target;   // 0x08
    u8 kind;                         // 0x0c
    u8 unk0d;                        // 0x0d
    u8 bit;                          // 0x0e
    u8 unk0f;                        // 0x0f
};

struct ConditionalBranchNode {
    u32 unk00[2];                   // 0x00
    ConditionalBranchLink children; // 0x08
};

// Follow the first enabled conditional edge repeatedly, updating the caller's node.
extern "C" void branchNodeFollowEnabledEdges(ConditionalBranchNode** current, u32 mask)
{
    ConditionalBranchNode* node = *current;
    ConditionalBranchLink* edge = node->children.next;
    while (edge != &node->children) {
        if (edge->kind == 4 && (mask & (1u << edge->bit)) != 0) {
            node = edge->target;
            *current = node;
            edge = node->children.next;
        } else {
            edge = edge->next;
        }
    }
}
