#include "shard/GameGlobals.h"

extern "C" {

int FUN_0026d654(u32 value);


void FUN_00298d0c(u32 value)
{
    g_gameGlobals.data->unk12F1 = (s8)value;
    FUN_0026d654(value ^ 1);
}

} /* extern "C" */
