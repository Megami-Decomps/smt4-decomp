#include "camp/Unite/UniteEffectState.h"

extern "C" {

/* Test whether the active work has reached state eight. */
u8 screenIsStateEight(void)
{
    return g_screenStateWork->state == 8;
}

}
