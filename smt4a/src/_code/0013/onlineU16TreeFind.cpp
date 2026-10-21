/* NON_MATCHING: Otime duplicates the initial loop test; Ospace fixes control flow but still swaps the tree/result registers r6/r7. */
#include "shard/W6_W6Match3_U16TreeFind.h"

struct U16LookupNode {
    /* 0x00 */ u32 color;
    /* 0x04 */ U16LookupNode* parent;
    /* 0x08 */ U16LookupNode* left;
    /* 0x0c */ U16LookupNode* right;
    /* 0x10 */ u16 key;
};

struct U16LookupTree {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ U16LookupNode* sentinel;
    /* 0x14 */ u8 unk14[5];
    /* 0x19 */ u8 compareState;
};

extern "C" u32 lessU16(u32 unused, u16* left, u16* right);
extern "C" u32 wordRefsEqual_00308556(s32* left, s32* right);

extern "C" U16LookupIterator onlineU16TreeFind(U16LookupTree* tree, u16* key)
{
    u32 comparison = (u32)&tree->compareState;
    U16LookupNode* current = tree->sentinel->parent;
    U16LookupNode* candidate = tree->sentinel;
    while (current != NULL) {
        if (!lessU16(comparison, &current->key, key)) {
            candidate = current;
            current = current->left;
        } else {
            current = current->right;
        }
    }
    U16LookupIterator found(candidate);
    U16LookupIterator end(tree->sentinel);
    return (wordRefsEqual_00308556((s32*)&found.node, (s32*)&end.node) ||
        lessU16(comparison, key, &found.node->key)) ?
        U16LookupIterator(tree->sentinel) : found;
}
