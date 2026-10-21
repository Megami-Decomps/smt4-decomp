/* NON_MATCHING: retail recovers the owner from the member destructor result; this wrapper preserves the owner in r4. */
#include "classes/Obj422214.h"

struct BufferOwner {
    /* 0x000 */ u8 unk00[0x9bc];
    /* 0x9bc */ Obj422214 buffers;
};

/* Releases the owner's embedded buffer pair. */
extern "C" BufferOwner *FUN_00394214(BufferOwner *owner)
{
    owner->buffers.~Obj422214();
    return owner;
}
