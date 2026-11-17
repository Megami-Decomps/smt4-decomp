#include "camp/CampStateA.h"


extern "C" {

/* Whether the camp is open and in state 0x33. */
u32 campIsState51(void)
{
    CampStateA* camp = g_camp;
    if (camp == 0) {
        return 0;
    }
    return camp->state == 0x33;
}
}
