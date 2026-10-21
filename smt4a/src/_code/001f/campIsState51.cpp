#include "common.h"

struct Camp {
    u8 unk00[0x1C]; // 0x00
    u32 state;     // 0x1C
};

extern "C" {
extern Camp* g_camp;

u32 campIsState51(void)
{
    Camp* camp = g_camp;
    if (camp == 0) {
        return 0;
    }
    return camp->state == 0x33;
}
}
