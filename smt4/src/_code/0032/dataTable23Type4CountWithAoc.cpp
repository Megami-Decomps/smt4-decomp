/* Returns the entry count of the data table keyed 0x400000023 plus the offset stored in the global state. */
#include "common.h"
#include "addon/AocSystem.h"

extern "C" {

extern void *dataTableGet(u64 key);
extern s32 dataTableGetCount(void *table);

s32 dataTable23Type4CountWithAoc(void)
{
    return dataTableGetCount(dataTableGet(0x400000023ULL)) + g_aocSystem->table23[4].count;
}

}
