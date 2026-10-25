/* NON_MATCHING: native destructor ABI restores retail's write-back member walk; original-this is still recomputed after thread cleanup instead of retained across it. */
/* The destructor of the Mobiclip stream reader owner: tears the reader down, closes its two handles and finalizes
 * its thread. Returns the owner. */
#include "common.h"
#include "nn/os/Handle.h"
#include "nn/os/Thread.h"
#include <stddef.h>

extern "C" void FUN_00422654(void *reader);

struct MobiclipStreamOwner {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ NnOsThread thread;
    /* 0x38 */ u8 unk38[0x14];
    /* 0x4C */ NnOsHandle firstHandle;
    /* 0x50 */ NnOsHandle secondHandle;

    ~MobiclipStreamOwner();
};
typedef char MobiclipStreamOwnerLayoutCheck[
    sizeof(MobiclipStreamOwner) == 0x54 &&
    offsetof(MobiclipStreamOwner, thread) == 0x30 &&
    offsetof(MobiclipStreamOwner, firstHandle) == 0x4C &&
    offsetof(MobiclipStreamOwner, secondHandle) == 0x50 ? 1 : -1];

MobiclipStreamOwner::~MobiclipStreamOwner()
{
    FUN_00422654(this);
}
