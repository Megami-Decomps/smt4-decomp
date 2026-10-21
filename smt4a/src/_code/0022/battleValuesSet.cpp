#include "common.h"

extern "C" {

struct BattleValues {
    /* 0x00 */ u8 unk00[0xF46];
    struct { s16 first; s16 second; } values; /* 0xF46 */
};
extern BattleValues *DAT_00581280;
void FUN_00295e54(s16 first, s16 second, u32 mode);
void battleValuesSet(s32 first, s32 second)
{
    DAT_00581280->values.first = first;
    DAT_00581280->values.second = second;
    FUN_00295e54(first, second, 0);
}

} /* extern "C" */
