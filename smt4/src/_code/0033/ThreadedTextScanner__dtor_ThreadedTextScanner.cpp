/* NON_MATCHING: native complete destructor recovers the owner correctly; initial thread-address formation and save scheduling still differ. */
#include "classes/Obj420fa4.h"
#include "nn/os/Thread.h"

/* A text scanner that runs on its own thread. */
struct ThreadedTextScanner {
    u32 unk00[2];          // 0x00
    Obj420fa4 scanner;     // 0x08
    NnOsThread thread;     // 0x3c
    ~ThreadedTextScanner();
};

/* The destructor of ThreadedTextScanner: finalizes the thread, then the scanner state. */
ThreadedTextScanner::~ThreadedTextScanner()
{
}
