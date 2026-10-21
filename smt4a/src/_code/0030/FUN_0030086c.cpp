/* NON_MATCHING: Thumb register allocation retains the comparator address and spills the key, enlarging the frame; retail spills the comparator instead. Candidate O2/Ospace. */
#include "common.h"

struct OrderedRecordKey {
    u8 unk00[6]; // 0x00
    u16 lower;    // 0x06
    s32 upper;    // 0x08
};

struct OrderedRecordNode {
    u32 color;                  // 0x00
    OrderedRecordNode* parent;  // 0x04
    OrderedRecordNode* left;    // 0x08
    OrderedRecordNode* right;   // 0x0c
    OrderedRecordKey key;       // 0x10
};

struct OrderedRecordTree {
    u8 unk00[0x10];       // 0x00
    OrderedRecordNode* end; // 0x10
    u8 unk14[5];          // 0x14
    u8 comparator;        // 0x19
};

extern "C" {
u32 FUN_0030f06c(const u8* comparator, const OrderedRecordKey* first, const OrderedRecordKey* second);
u32 wordRefsEqual_0030c536(OrderedRecordNode* const* first, OrderedRecordNode* const* second);

// Find the equal key in the ordered tree, returning its end node if it is absent.
OrderedRecordNode* FUN_0030086c(OrderedRecordTree* tree, const OrderedRecordKey* key)
{
    OrderedRecordNode* candidate = tree->end;
    OrderedRecordNode* node = candidate->parent;
    while (node != NULL) {
        if (FUN_0030f06c(&tree->comparator, &node->key, key)) {
            node = node->right;
        } else {
            candidate = node;
            node = node->left;
        }
    }
    OrderedRecordNode* found = candidate;
    OrderedRecordNode* end = tree->end;
    if (!wordRefsEqual_0030c536(&found, &end) &&
        !FUN_0030f06c(&tree->comparator, key, &found->key)) {
        return found;
    }
    return tree->end;
}
}
