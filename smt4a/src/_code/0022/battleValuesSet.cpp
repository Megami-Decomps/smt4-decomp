#include "common.h"

extern "C" {

struct BattleValues {
    /* 0x00 */ u8 unk00[0xF46];
    struct { s16 first; s16 second; } values; /* 0xF46 */
};
extern BattleValues *g_mapNpcWork;
void mapNpcLoadStep(s16 first, s16 second, u32 mode);
void battleValuesSet(s32 first, s32 second)
{
    g_mapNpcWork->values.first = first;
    g_mapNpcWork->values.second = second;
    mapNpcLoadStep(first, second, 0);
}

} /* extern "C" */
