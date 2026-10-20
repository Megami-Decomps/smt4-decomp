#include "shard/Shard0050.h"

extern "C" {

void table30GetEntryB(u8 **out, Table30 *table, u32 index)
{
    Block30 *block;
    u8 *entry;

    *out = NULL;
    block = table->block;
    if (block != NULL && block->count >= index) {
        entry = block->data + index * 0x30;
    } else {
        entry = NULL;
    }
    *out = entry;
}

} /* extern "C" */
