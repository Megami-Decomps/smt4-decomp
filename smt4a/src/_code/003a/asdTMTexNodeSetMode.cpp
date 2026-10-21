#include "common.h"

extern "C" {

void *asdTMTexTableGetNode(s32 table, s32 index);
void FUN_001acfac(void *node, u32 mode);

void asdTMTexNodeSetMode(s32 table, s32 index)
{
    FUN_001acfac(asdTMTexTableGetNode(table, index), 0x30000);
}

} /* extern "C" */
