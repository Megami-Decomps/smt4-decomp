#include "shard/W5_W5Match2_KeyedCopy.h"
extern "C" {
extern KeyedCopyRecord g_keyedRecords[];
/* Read an entry value from the selected keyed record. */
u32 keyedGetEntryValue(u32 record,u32 entry) { return g_keyedRecords[record].entries[entry].value; }
}
