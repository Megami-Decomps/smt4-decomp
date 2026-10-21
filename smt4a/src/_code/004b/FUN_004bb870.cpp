#include "shard/Shard004B.h"

extern "C" {

typedef struct HalfAt10 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u16 unk10;
} HalfAt10;

extern HalfAt10 *FUN_004bb80c(s32 index);

u16 FUN_004bb870(s32 index)
{
    return FUN_004bb80c(index)->unk10;
}

} /* extern "C" */
