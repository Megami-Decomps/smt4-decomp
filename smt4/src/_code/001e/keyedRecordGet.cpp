#include "common.h"
#include "shard/keyedRecordGet.h"

extern "C" {

extern u8 g_keyedRecords[][0x148];

u8 *keyedRecordGet(s32 index)
{
    return g_keyedRecords[index];
}

} /* extern "C" */
