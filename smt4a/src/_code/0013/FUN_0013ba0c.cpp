#include "common.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "addon/AocSystemA.h"

extern "C" {
void *FUN_00148030(void *memory);

// Creates the add-on content system once.
void FUN_0013ba0c(void)
{
    if (g_aocSystem != NULL) {
        return;
    }
    void *memory = asdOperatorNew(sizeof(AocSystemA));
    if (memory != NULL) {
        memory = FUN_00148030(memory);
    }
    g_aocSystem = static_cast<AocSystemA *>(memory);
}
}
