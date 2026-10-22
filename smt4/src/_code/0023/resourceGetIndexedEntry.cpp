#include "shard/W5_W5Match2_PlainData.h"
extern "C" {
/* Return the selected table resource, or null beyond the signed entry count. */
void *resourceGetIndexedEntry(const ResourceTableView *table,s32 index) { return table->header->count>index ? table->entries[index].resource : NULL; }
}
