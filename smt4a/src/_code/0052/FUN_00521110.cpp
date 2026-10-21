#include "common.h"

class ResourceChild {
public:
    virtual void vfunc00();
    virtual void release(u32 mode);
};

struct ResourceOwner {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ ResourceChild *child;
};

/* Forwards release to the owned child's second virtual method. */
extern "C" void FUN_00521110(ResourceOwner *owner, u32 mode)
{
    owner->child->release(mode);
}
