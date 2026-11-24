#include "map/MapEffectReservation.h"
#include "common.h"

extern "C" {

char *libc_strcpy(char *dst, const char *src);

/* Sets slot `index`'s value and name. */
void FUN_00308c94(s32 index, u32 value, const char *name)
{
    g_namedEntryTable[index].target = value;
    libc_strcpy(g_namedEntryTable[index].name, name);
}

} /* extern "C" */
