#include "common.h"

extern "C" {

void *asdTMTexTableGetNode(s32 table, s32 index);
void* asdMTeXLoadNodeTexturePath(void *node, u32 mode);

void* asdTMTexNodeSetMode(s32 table, s32 index)
{
    return asdMTeXLoadNodeTexturePath(asdTMTexTableGetNode(table, index), 0x30000);
}

} /* extern "C" */
