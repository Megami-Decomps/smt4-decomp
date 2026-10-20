#include "shard/Shard0047.h"

extern "C" {

typedef struct CountOwner {
    /* 0x000 */ u8 unk000[0x67C];
    /* 0x67C */ u32 count;
} CountOwner;

u8 countOwnerIsValidIndex(CountOwner *obj, u32 index)
{
    return index < obj->count;
}

} /* extern "C" */
