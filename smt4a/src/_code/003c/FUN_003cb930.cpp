/* Returns the entry count of the data table keyed 0x100000049. */
#include "common.h"

extern "C" {

extern void *dataTableGet(u64 key);
extern u32 dataTableGetCount(void *table);

u32 FUN_003cb930(void)
{
    return dataTableGetCount(dataTableGet(0x100000049ULL));
}

}
