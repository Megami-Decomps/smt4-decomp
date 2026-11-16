#include "shard/Shard0034.h"

extern "C" {

extern void memcpySrcFirst(const u16 *src, u16 *dst, u32 size);

/* Copies a 0x12-byte name into the owner at +0xE. */
void ownerSetName(Owner0E *owner, const u16 *name)
{
    memcpySrcFirst(name, owner->name, 0x12);
}

} /* extern "C" */
