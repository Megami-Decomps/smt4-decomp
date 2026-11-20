/* The destructor of the Mobiclip stream reader owner: tears the reader down, closes its two handles and finalizes
 * its thread (the base's member). Returns the owner. */
#include "common.h"
#include "nn/os/Handle.h"
#include "nn/os/Thread.h"
#include <stddef.h>

extern "C" void mobiclipS4FsReaderDestroy(void *reader);

/* The base that owns the reader thread; its implicit destructor runs after the owner's handles close. */
struct MobiclipStreamThreadOwner {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ NnOsThread thread;
};

struct MobiclipStreamOwner : MobiclipStreamThreadOwner {
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
    mobiclipS4FsReaderDestroy(this);
}
