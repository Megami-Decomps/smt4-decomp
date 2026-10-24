#include "common.h"
#include "nn/os/Thread.h"

/* An object that owns a thread. */
struct ThreadOwner {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ NnOsThread thread;
    ~ThreadOwner() {}
};

/* The destructor of ThreadOwner: returns the owner. */
extern "C" ThreadOwner *FUN_0033b5d8(ThreadOwner *owner)
{
    owner->~ThreadOwner();
    return owner;
}
