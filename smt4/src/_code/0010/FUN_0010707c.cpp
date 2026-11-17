#include "common.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "addon/AocSystem.h"

extern "C" {
void *largeWorkStateInitialize(void *memory);

// Creates the add-on content system once.
void FUN_0010707c(void)
{
    if (g_aocSystem != NULL) {
        return;
    }
    void *memory = asdOperatorNew(sizeof(AocSystem));
    if (memory != NULL) {
        memory = largeWorkStateInitialize(memory);
    }
    g_aocSystem = static_cast<AocSystem *>(memory);
}
}
