#include "map/mapMain.h"

extern "C" {

extern MapTable *g_mapTable;

u32 mapTableGetValue(s32 index)
{
    return g_mapTable->entries[index].value;
}

} /* extern "C" */
