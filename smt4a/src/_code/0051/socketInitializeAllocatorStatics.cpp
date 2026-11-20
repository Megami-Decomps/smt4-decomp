/* NON_MATCHING: native static initializer; heap vtable and lock-count instructions are scheduled
 * earlier, and the two destructor symbols and socket allocator vtable still need to be reconciled. */
#include "classes/Obj55840c.h"

/* The socket allocator starts detached from its work-buffer heap. */
class SocketAllocator {
public:
    SocketAllocator() : heap(NULL) {}
    virtual void *allocate(u32 size, s32 alignment);
    virtual void free(void *memory);
    virtual ~SocketAllocator();

private:
    /* 0x04 */ Obj55840c *heap;
};

typedef char SocketAllocatorSizeCheck[sizeof(SocketAllocator) == 8 ? 1 : -1];

static Obj55840c sSocketHeap;
static SocketAllocator sSocketAllocator;
