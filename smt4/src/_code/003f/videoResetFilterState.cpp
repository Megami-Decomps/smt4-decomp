#include "common.h"

struct ResetState {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
};

extern "C" {
extern ResetState DAT_0044e918;

void videoResetFilterState(void)
{
    DAT_0044e918.unk00 = 0;
    DAT_0044e918.unk04 = 0;
}
}
