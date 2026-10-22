/* NON_MATCHING: Retail cmp r4, r0 differs from recovered cmp r0, r4. */
#include "common.h"

namespace {

struct EntryLocalView {
    u8 unk00[0x10]; // 0x00
    void* unk10;    // 0x10
};

struct TreeNodeLocalView {
    u32 unk00;                  // 0x00
    TreeNodeLocalView* parent;   // 0x04
    TreeNodeLocalView* left;     // 0x08
    TreeNodeLocalView* right;    // 0x0C
    u8 unk10[0x08];              // 0x10
    EntryLocalView* entry;       // 0x18
};

struct TreeLocalView {
    u8 unk00[0x14];              // 0x00
    TreeNodeLocalView* sentinel; // 0x14
};

struct ObjectLocalView {
    u8 unk00[0x141C]; // 0x0000
    TreeLocalView tree; // 0x141C
};

} // namespace

extern "C" s32 FUN_004ac9d0(void* object);

// Visit all tree entries and return whether every helper call succeeded.
extern "C" u32 FUN_004af1c0(ObjectLocalView* object)
{
    u32 allSucceeded = 1;
    TreeLocalView* tree = &object->tree;
    TreeNodeLocalView* node = tree->sentinel->left;

    while (tree->sentinel != node) {
        if (FUN_004ac9d0(node->entry->unk10) == 0) {
            allSucceeded = 0;
        }

        TreeNodeLocalView* next = node->right;
        if (next != 0) {
            do {
                node = next;
                next = node->left;
            } while (next != 0);
        } else {
            next = node->parent;
            while (next->right == node) {
                node = next;
                next = node->parent;
            }
            if (node->right != next) {
                node = next;
            }
        }
    }

    return allSucceeded;
}
