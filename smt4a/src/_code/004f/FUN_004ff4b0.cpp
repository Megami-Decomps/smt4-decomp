#include "shard/W5_W5Match5_TwinRecords.h"

using namespace ResourceTableLookup;





extern "C" void* FUN_004ff4b0(ResourceTable* table, s32 index)
{
    if (table->header == NULL || (s32)table->header->count <= index) {
        return NULL;
    }

    u32 recordIndex = table->indices[index].recordIndex;
    return table->records[recordIndex].value;
}
