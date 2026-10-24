/* NON_MATCHING: retail walks the members with a write-back pointer ([r4, #80]!, [r4, #-4]!, then sub r4, #28) and keeps it in r4/r5; armcc addresses each member from the owner */
/* The destructor of the Mobiclip stream reader owner: tears the reader down, closes its two handles and finalizes
 * its thread. Returns the owner. */
#include "common.h"
#include "nn/os/Handle.h"
#include "nn/os/Thread.h"

extern "C" void mobiclipS4FsReaderDestroy(void *reader);

struct MobiclipStreamOwner {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ NnOsThread thread;
    /* 0x38 */ u8 unk38[0x14];
    /* 0x4C */ NnOsHandle firstHandle;
    /* 0x50 */ NnOsHandle secondHandle;

    ~MobiclipStreamOwner() { mobiclipS4FsReaderDestroy(this); }
};

extern "C" MobiclipStreamOwner *FUN_0034e2ac(MobiclipStreamOwner *owner)
{
    owner->~MobiclipStreamOwner();
    return owner;
}
