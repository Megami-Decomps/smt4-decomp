#include "shard/Shard0042.h"

extern "C" {

typedef struct Table46COwner {
    /* 0x000 */ u8 unk000[0x46C];
    /* 0x46C */ u32 table[1];
} Table46COwner;

u32 table46COwnerGet(Table46COwner *obj, s32 index)
{
    return obj->table[index];
}

} /* extern "C" */
