#include "common.h"

struct ResetState {
    u32 first;  // 0x00
    u32 second; // 0x04
};

extern "C" {
extern ResetState DAT_0044e930;
extern u32 DAT_0044e934;

void videoResetSecondaryFilterState(void)
{
    DAT_0044e930.first = 0;
    DAT_0044e930.second = 0;
}
}
