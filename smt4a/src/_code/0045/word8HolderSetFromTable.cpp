#include "shard/Shard0045.h"

extern "C" {

extern u32 DAT_0054bcdc[];

void word8HolderSetFromTable(Word8Holder *obj, s32 index)
{
    obj->unk10 = DAT_0054bcdc[index];
}

} /* extern "C" */
