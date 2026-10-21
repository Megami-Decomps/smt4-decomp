#include "common.h"

extern "C" {

typedef struct Global005821c4 {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 value;
} Global005821c4;
extern Global005821c4 g_mapTable;

/* Stores `value` in the u32 at 0x28 of the global at 0x5821c4. */
void mapTableValueSet(u32 value)
{
    g_mapTable.value = value;
}

} /* extern "C" */
