#include "common.h"
#include "camp/CampCec/CampCecView.h"

extern "C" {

extern u8 g_rtLocale[];

/* Returns the address of the object at 0x64BE6C. */
u8 *rt_locale(void)
{
    return g_rtLocale;
}

} /* extern "C" */
