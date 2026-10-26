#include "common.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

struct AocDisplay;

extern "C" {
extern AocDisplay *g_aocDisplay;
void *FUN_001481e4(void *memory);

// Creates the 0x4528-byte add-on display object once.
void FUN_0013ba3c(void)
{
    if (g_aocDisplay == NULL) {
        void *memory = asdOperatorNew(0x4528);
        if (memory != NULL) {
            memory = FUN_001481e4(memory);
        }
        g_aocDisplay = static_cast<AocDisplay *>(memory);
    }
}
}
