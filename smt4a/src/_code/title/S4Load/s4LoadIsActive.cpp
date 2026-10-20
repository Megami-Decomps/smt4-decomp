#include "title/S4Load.h"

extern "C" {

extern S4Load *g_s4Load;

/* True while the loading screen exists. */
bool s4LoadIsActive(void)
{
    return g_s4Load != NULL;
}

} /* extern "C" */
