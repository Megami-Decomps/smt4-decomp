#include "map/MapEffectReservation.h"
#include "common.h"

extern "C" {

char *libc_strcpy(char *dst, const char *src);

/* Sets the value and name of the entry with the given id. */
void namedEntryTableSetById(s32 id, u32 value, const char *name)
{
    s32 i;

    for (i = 0; i < g_entryTableInfo.count; i++) {
        if (g_namedEntryTable[i].resource == (u32)id) {
            g_namedEntryTable[i].target = value;
            libc_strcpy(g_namedEntryTable[i].name, name);
            return;
        }
    }
}

} /* extern "C" */
