#include "common.h"

struct ResourceHolder {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ void *resource;
};

/* Return the allocator-owned resource. */
extern "C" void *allocatorResourceGet(const ResourceHolder *holder)
{
    return holder->resource;
}
