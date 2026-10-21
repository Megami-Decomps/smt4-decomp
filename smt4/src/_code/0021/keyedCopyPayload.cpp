#include "shard/W5_W5Match2_KeyedCopy.h"
extern "C" {
extern KeyedCopyRecord g_keyedRecords[];
void rt_memcpy_w(void *destination,const void *source,u32 size);
/* Replace the selected keyed record payload. */
void keyedCopyPayload(u32 index,const void *data) { rt_memcpy_w(g_keyedRecords[index].data,data,0x90); }
}
