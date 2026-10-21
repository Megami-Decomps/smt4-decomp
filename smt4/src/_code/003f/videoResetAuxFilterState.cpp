#include "common.h"

struct ResetState {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
};

extern "C" {
extern ResetState DAT_0044e990;
extern u32 DAT_0044e994;

void videoResetAuxFilterState(void)
{
    DAT_0044e990.unk00 = 0;
    DAT_0044e990.unk04 = 0;
}
}
