#include "common.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

struct LargeWorkState;

extern "C" {
extern LargeWorkState *g_aocSystem;
void *largeWorkStateInitialize(void *memory);

// Creates the shared 0x450-byte work state once.
void FUN_0010707c(void)
{
    if (g_aocSystem != NULL) {
        return;
    }
    void *memory = asdOperatorNew(0x450);
    if (memory != NULL) {
        memory = largeWorkStateInitialize(memory);
    }
    g_aocSystem = static_cast<LargeWorkState *>(memory);
}
}
