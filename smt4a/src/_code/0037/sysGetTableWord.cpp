#include "shard/Shard0037.h"
#include "util/SysGetTableWord.h"

extern "C" {

extern u32 DAT_00635770[];

u32 sysGetTableWord(s32 index)
{
    return DAT_00635770[index];
}

} /* extern "C" */
