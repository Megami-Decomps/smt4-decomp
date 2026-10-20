#include "shard/Shard0047.h"

extern "C" {

extern s32 jyoucyuGetTableEntry(s32 index);

void callJyoucyuGetTableEntry1(void)
{
    jyoucyuGetTableEntry(1);
}

} /* extern "C" */
