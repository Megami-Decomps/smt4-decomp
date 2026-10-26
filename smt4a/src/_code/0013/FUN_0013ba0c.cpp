#include "common.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

struct LargeWorkState;

extern "C" {
extern LargeWorkState *g_aocSystem;
void *FUN_00148030(void *memory);

// Creates the shared 0x470-byte work state once.
void FUN_0013ba0c(void)
{
    if (g_aocSystem != NULL) {
        return;
    }
    void *memory = asdOperatorNew(0x470);
    if (memory != NULL) {
        memory = FUN_00148030(memory);
    }
    g_aocSystem = static_cast<LargeWorkState *>(memory);
}
}
