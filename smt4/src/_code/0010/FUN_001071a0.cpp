#include "common.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

struct AocMain;

extern "C" {
extern AocMain *g_aocMain;
void *FUN_00111184(void *memory);

// Creates the 0xd68-byte add-on main object.
void FUN_001071a0(void)
{
    void *memory = asdOperatorNew(0xD68);
    if (memory != NULL) {
        memory = FUN_00111184(memory);
    }
    g_aocMain = static_cast<AocMain *>(memory);
}
}
