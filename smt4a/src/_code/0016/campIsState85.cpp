#include "camp/CampStateA.h"
#include "camp/CampStateQueries.h"


extern "C" {

/* Whether the camp is open and not in state 0x55. */
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
