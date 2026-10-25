#include "common.h"
#include "shard/SaveWork.h"

extern "C" {

typedef struct FlagArea {
    /* 0x00 */ u8 unk00[0xC98];
    /* 0xC98 */ u32 bits[1];
} FlagArea;


/* Whether bit `bit` of the map block's flag array is set. */
u8 mapFlagTest(int bit)
{
    FlagArea *area = reinterpret_cast<FlagArea *>(gameGetMapBlock());
    s32 index = bit / 32;
    s32 shift = bit % 32;

    return (area->bits[index] & (1 << shift)) != 0;
}

} /* extern "C" */
