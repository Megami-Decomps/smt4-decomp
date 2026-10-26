#include "shard/Shard0050.h"
#include "gamedata/GameDataAccess_Shard0050.h"

extern "C" {

void table30GetEntry(u8 **out, Table30 *table, u32 index)
{
    Block30 *block = table->block;
    u8 *entry;

    if (block != NULL && block->count >= index) {
        entry = block->data + index * 0x30;
    } else {
        entry = NULL;
    }
    *out = entry;
}

} /* extern "C" */
