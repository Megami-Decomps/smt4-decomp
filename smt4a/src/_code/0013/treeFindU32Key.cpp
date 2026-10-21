/* NON_MATCHING: compiler uses a 28-byte local area instead of retail's 20 bytes, different saved registers, and a peeled loop entry. */
#include "common.h"

struct U32LookupNode {
    /* 0x00 */ u32 color;
    /* 0x04 */ U32LookupNode* parent;
    /* 0x08 */ U32LookupNode* left;
    /* 0x0c */ U32LookupNode* right;
    /* 0x10 */ u32 key;
};

struct U32LookupTree {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ U32LookupNode* sentinel;
    /* 0x14 */ u8 unk14[5];
    /* 0x19 */ u8 compareState;
};


extern "C" u32 lessU32(u32 unused, u32* left, u32* right);
extern "C" u32 wordRefsEqual_0030963c(s32* left, s32* right);

extern "C" void treeFindU32Key(U32LookupNode** result, U32LookupTree* tree, u32* key)
{
    u32 comparison = (u32)&tree->compareState;
    U32LookupNode* current = tree->sentinel->parent;
    U32LookupNode* candidate = tree->sentinel;
    while (current != NULL) {
        if (lessU32(comparison, &current->key, key)) {
            current = current->right;
        } else {
            candidate = current;
            current = current->left;
        }
    }
    U32LookupNode* found = candidate;
    U32LookupNode* end = tree->sentinel;
    *result = (wordRefsEqual_0030963c((s32*)&found, (s32*)&end) ||
        lessU32(comparison, key, &found->key)) ? tree->sentinel : found;
}
