#include "shard/Shard0040.h"

extern "C" {

typedef struct Table108Owner {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ Entry8 *table;
} Table108Owner;

Entry8 *table108Owner(Table108Owner *owner, s32 index)
{
    return owner->table + index;
}

} /* extern "C" */
