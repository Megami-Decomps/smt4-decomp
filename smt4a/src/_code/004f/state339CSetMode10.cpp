#include "shard/Shard004F.h"

extern "C" {

void state339CSetMode10(State339C *obj, u32 value)
{
    obj->unk33A0 = value;
    obj->unk33A4 = 0;
    obj->flags = (obj->flags & 0xFFFFFF1F) | 0x10;
}

} /* extern "C" */
