#include "status/StatusDown.h"
#include "bible/bibleDevil.h"

extern "C" {
extern StatusDownState *g_statusDown;

u8 FUN_00293aac(void)
{
    return g_statusDown->unk3FC;
}

} /* extern "C" */
