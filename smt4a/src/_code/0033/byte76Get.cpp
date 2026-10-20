#include "shard/Shard0033.h"

extern "C" {

typedef struct Byte76Holder {
    /* 0x00 */ u8 unk00[0x76];
    /* 0x76 */ s8 value;
} Byte76Holder;

extern Byte76Holder DAT_005f0c7c;

s32 byte76Get(void)
{
    return DAT_005f0c7c.value;
}

} /* extern "C" */
