#include "shard/Shard0037.h"
#include "sys/RuntimeObjects.h"

extern "C" {

extern u32 g_sysWordTable[];

u32 sysGetTableWord(s32 index)
{
    return g_sysWordTable[index];
}

} /* extern "C" */
