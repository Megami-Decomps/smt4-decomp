/* NON_MATCHING: the thread and scanner member destructors and the svc 0x23 close match; retail recovers the owner from the thread destructor's returned pointer (sub r5, r4, #60), which needs this unit named as the real complete destructor (_ZN19ThreadedTextScannerD1Ev), not an extern "C" wrapper that copies the owner into r5. */
#include "classes/Obj420fa4.h"
#include "nn/os/Thread.h"

/* A text scanner that runs on its own thread. */
struct ThreadedTextScanner {
    u32 unk00[2];          // 0x00
    Obj420fa4 scanner;     // 0x08
    NnOsThread thread;     // 0x3c
    ~ThreadedTextScanner() {}
};

/* The destructor of ThreadedTextScanner: finalizes the thread, then the scanner state. */
extern "C" ThreadedTextScanner *FUN_0033b618(ThreadedTextScanner *scanner)
{
    scanner->~ThreadedTextScanner();
    return scanner;
}
