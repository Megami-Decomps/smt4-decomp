/* Returns the entry count of the data table keyed 0x100000023 plus the offset stored in the global state. */
#include "common.h"
#include "addon/AocSystem.h"

extern "C" {

extern void *dataTableGet(u64 key);
extern s32 dataTableGetCount(void *table);

s32 dataTable23Type1CountWithAoc(void)
{
    return dataTableGetCount(dataTableGet(0x100000023ULL)) + g_aocSystem->table23[1].count;
}

}
