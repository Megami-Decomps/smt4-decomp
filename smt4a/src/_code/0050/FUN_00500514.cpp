#include "shard/Shard0050.h"

extern "C" {

typedef struct RefTo28 {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 unk28;
} RefTo28;

u32 FUN_00500514(RefTo28 **ref)
{
    return (*ref)->unk28;
}

} /* extern "C" */
