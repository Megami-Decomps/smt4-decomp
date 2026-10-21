/* NON_MATCHING: retail inlines SVC 0x23 and an ARM hint NOP; uses the real CloseHandle wrapper here because syscall intrinsics/asm/no-ops are forbidden. C++ destructor identity also remains unmigrated. */
#include "shard/W6_W6Match1_TextScannerState.h"

struct ThreadedTextScanner {
    u32 unk00[2];          // 0x00
    TextScannerState state; // 0x08
    u32 threadHandle;      // 0x3c
};

extern "C" {
extern const u32 DAT_0055b378[];
void FUN_001a0d08(u32* thread);
s32 svcCloseHandle(u32 handle);
void ngwordStateReset(TextScannerState* state);
void registerObj8Holder(u32* holder);

// Finalizes the scanner thread and releases its embedded filter/holder state.
ThreadedTextScanner* FUN_003f2c5c(ThreadedTextScanner* scanner)
{
    FUN_001a0d08(&scanner->threadHandle);
    if (scanner->threadHandle != 0) {
        svcCloseHandle(scanner->threadHandle);
        scanner->threadHandle = 0;
    }
    scanner->state.vtable = DAT_0055b378;
    ngwordStateReset(&scanner->state);
    registerObj8Holder(&scanner->state.unk04);
    return scanner;
}
}
