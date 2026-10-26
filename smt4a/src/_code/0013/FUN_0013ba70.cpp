#include "common.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

struct AocMain;

extern "C" {
extern AocMain *g_aocMain;
void *FUN_001482c0(void *memory);

// Creates the 0xd68-byte add-on main object.
void FUN_0013ba70(void)
{
    void *memory = asdOperatorNew(0xD68);
    if (memory != NULL) {
        memory = FUN_001482c0(memory);
    }
    g_aocMain = static_cast<AocMain *>(memory);
}
}
