#include "shard/Shard0046.h"

extern "C" {

extern u8 DAT_0055c270;
extern VtblHolder *FUN_004625c0(VtblHolder *obj);

void constructTrackBase(VtblHolder *obj)
{
    FUN_004625c0(obj)->vtbl = &DAT_0055c270;
}

} /* extern "C" */
