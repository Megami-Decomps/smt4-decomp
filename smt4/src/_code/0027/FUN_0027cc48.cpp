#include "map/MapStateSlots.h"

extern "C" {



extern MapStateSlots *g_mapStateSlots;

void FUN_0027cc48(u16 a, u16 b)
{
    MapStateSlots *work = g_mapStateSlots;

    g_mapStateSlots->unk08 = 0;
    work->unk0A = 0;
    work->unk04 = a;
    work->unk06 = b;
}

} /* extern "C" */
