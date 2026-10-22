/* NON_MATCHING: relative-pointer null tests and allocator cleanup use different saved registers. */
#include "gfx/RelativeResourceClone.h"

struct RelativeCloneLinkNode {
    u32 flags;
    u32 unk04;
    RelativePointer child;
};
typedef char RelativeCloneLinkLayoutCheck[sizeof(RelativeCloneLinkNode) == 0xc &&
    offsetof(RelativeCloneLinkNode, child) == 8 ? 1 : -1];

extern "C" {
void *FUN_0036ebc0(AsdAllocatorObject *allocator, void *source);

RelativeCloneLinkNode *FUN_00370160(const RelativeCloneLinkNode *source, AsdAllocatorObject *allocator)
{
    RelativeCloneLinkNode *copy = (RelativeCloneLinkNode *)allocator->allocate(sizeof(RelativeCloneLinkNode), 4);
    if (copy != 0) {
        *copy = *source;
        void *child = source->child.get();
        if (child != 0) {
            void *childCopy = FUN_0036ebc0(allocator, child);
            if (childCopy == 0) {
                if (copy->child.get() != 0) {
                    allocator->release(copy->child.get());
                }
                allocator->release(copy);
                return 0;
            }
            copy->child.set(childCopy);
        }
    }
    return copy;
}
}
