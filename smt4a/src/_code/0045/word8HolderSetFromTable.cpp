#include "shard/Shard0045.h"

extern "C" {

extern u32 g_word8HolderTable[];

void word8HolderSetFromTable(Word8Holder *obj, s32 index)
{
    obj->unk10 = g_word8HolderTable[index];
}

} /* extern "C" */
