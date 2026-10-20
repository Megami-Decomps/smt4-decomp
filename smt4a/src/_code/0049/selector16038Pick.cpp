#include "shard/Shard0049.h"

extern "C" {

typedef struct Selector16038 {
    /* 0x00000 */ u8 unk00000[0x16038];
    /* 0x16038 */ u32 unk16038;
    /* 0x1603C */ u32 unk1603C;
    /* 0x16040 */ u32 unk16040;
    /* 0x16044 */ u8 unk16044;
    /* 0x16045 */ u8 unk16045;
} Selector16038;

u32 selector16038Pick(Selector16038 *obj)
{
    u32 value = obj->unk16040;

    if (obj->unk16044 != 0) {
        value = obj->unk16038;
    } else if (obj->unk16045 != 0) {
        value = obj->unk1603C;
    }
    return value;
}

} /* extern "C" */
