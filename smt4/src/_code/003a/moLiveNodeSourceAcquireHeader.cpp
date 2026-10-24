/* NON_MATCHING: register allocation differs (retail keeps the source in r6 and reaches the spare array through r8; the unlink of the header link loads its pair with ldm where the build uses ldrd). */
#include "shard/W7_W7Match2_SharedAllocation.h"

/* Header node of a MoLive tree: the child links and the colour byte are cleared when the node is handed out. */
struct TreeNodeHeader {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 left;
    /* 0x0C */ u32 right;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u8 color;
};

/* Supplier of tree header nodes: a stack of spare nodes (shared references) and the node currently on hand. */
struct NodeSource {
    /* 0x00 */ SharedAllocationAllocator *allocator;
    /* 0x04 */ u8 unk04[0x1C];
    /* 0x20 */ SharedAllocationArray spare;
    /* 0x30 */ u8 unk30[0x1C];
    /* 0x4C */ SharedAllocationLink header;
};

static __inline void destroyLinks(SharedAllocationLink *first, SharedAllocationLink *last)
{
    for (; first < last; ++first)
        first->~SharedAllocationLink();
}

extern "C" void sharedAllocationArrayCopyRange(SharedAllocationArray *array, u32 destination, u32 source, s32 count);

/* Removes the last reference from the array. */
static __inline void popBack(SharedAllocationArray *array)
{
    u32 count = array->count;
    u32 lastIndex = count - 1;
    SharedAllocationLink *first = array->entries + lastIndex;
    sharedAllocationArrayCopyRange(array, first - array->entries, (first + 1) - array->entries, count - ((first + 1) - array->entries));
    destroyLinks(array->entries + lastIndex, array->entries + array->count);
    array->count = lastIndex;
}

extern "C" {
/* Makes sure a header node is on hand, reusing a spare one when there is one; false when none could be allocated. */
bool moLiveNodeSourceAcquireHeader(NodeSource *source)
{
    if (source->header.allocation == NULL) {
        if (source->spare.count != 0) {
            SharedAllocationLink *top = source->spare.entries + (source->spare.count - 1);
            if (&source->header != top) {
                source->header = *top;
            }
            popBack(&source->spare);
            ((TreeNodeHeader *)source->header.allocation)->left = 0;
            ((TreeNodeHeader *)source->header.allocation)->right = 0;
            ((TreeNodeHeader *)source->header.allocation)->color = 0;
        } else {
            SharedAllocationLink *header = &source->header;
            TreeNodeHeader *node = (TreeNodeHeader *)source->allocator->vtable->allocate(source->allocator, sizeof(TreeNodeHeader) + 4);
            if (node != NULL) {
                node->left = 0;
                node->right = 0;
                node->color = 0;
            }
            header->reset(node);
            if (source->header.allocation == NULL) {
                return false;
            }
        }
    }
    return true;
}
}
