#include "common.h"
#include "util/CalleeContracts.h"

struct Camp {
    u8 unk00[0x1C]; // 0x00
    s32 state;      // 0x1C
};

extern "C" {
extern Camp* g_camp;

u32 campIsState85(void)
{
    if (g_camp == NULL) {
        return 0;
    }
    if (g_camp->state == 0x55) {
        return 0;
    }
    return 1;
}
}
