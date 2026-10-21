/* NON_MATCHING: retail uses ble 2c where the compiled block uses ble 30. */
#include "shard/W5_W5Match5_TwinRecords.h"

using namespace ResourceTableLookup;





extern "C" void* FUN_003deab0(ResourceTable* table, s32 index)
{
    if (table->header == NULL || (s32)table->header->count <= index) {
        return NULL;
    }

    return table->records[table->indices[index].recordIndex].value;
}
