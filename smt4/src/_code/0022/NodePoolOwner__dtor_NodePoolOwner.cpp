/* NON_MATCHING: counted destruction uses different node-loop bounds, halfword-loop conditions and saved-register allocation; alternate optimization remains untested. */
#include "classes/Obj422540.h"

struct OwnerAllocator {
    virtual void *allocate(u32 size) = 0;
    virtual void release(void *item) = 0;
};

struct OwnerNode {
    OwnerAllocator *allocator;
    void *item;
    OwnerNode *next;
    OwnerNode *previous;

    ~OwnerNode()
    {
        if (next == NULL || next == this) {
            if (item != NULL) {
                allocator->release(item);
            }
        } else {
            next->previous = previous;
            previous->next = next;
            next = NULL;
            previous = NULL;
        }
        item = NULL;
    }
};

template <class T>
static inline void destroyOwnerRange(T *first, T *last)
{
    for (s32 count = last - first; count > 0; --count) {
        (first++)->~T();
    }
}

struct OwnerHalfwordStorage {
    OwnerAllocator *allocator;
    u16 *data;
    u32 size;
    u32 bytes;

    void clear()
    {
        destroyOwnerRange(data, (u16 *)((u8 *)data + bytes));
        allocator->release(data);
        data = NULL;
        size = 0;
    }
};

struct OwnerNodeStorage {
    OwnerAllocator *allocator;
    OwnerNode *data;
    u32 size;
    s32 count;

    void clear()
    {
        destroyOwnerRange(data, data + count);
        allocator->release(data);
        data = NULL;
        size = 0;
    }
};

struct OwnerStorage {
    u32 unk00;
    OwnerHalfwordStorage firstWords; // 0x04
    u8 unk14[0xc];
    OwnerNodeStorage firstNodes;     // 0x20
    OwnerNodeStorage secondNodes;    // 0x30
    u8 unk40[0xc];
    OwnerNode node;                  // 0x4c
    OwnerHalfwordStorage secondWords; // 0x5c
};

struct OwnerView {
    u8 unk00[0xc];
    OwnerAllocator *allocator;
    OwnerStorage *storage;
};

struct Node;
extern "C" void poolNodeUnlink(Node *);

Obj422540::~Obj422540()
{
    OwnerView *owner = (OwnerView *)this;
    OwnerStorage *storage = owner->storage;
    if (storage != NULL) {
        storage->secondWords.clear();
        poolNodeUnlink((Node *)&storage->node);
        storage->secondNodes.clear();
        storage->firstNodes.clear();
        storage->firstWords.clear();
        owner->allocator->release(storage);
        owner->storage = NULL;
    }
}
