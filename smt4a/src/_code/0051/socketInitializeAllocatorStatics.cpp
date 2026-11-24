/* NON_MATCHING: the native static initializer's instructions match. Two destructor relocations and the socket allocator's vtable relocation differ. */
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
