#include "shard/Shard0035.h"

extern "C" {

typedef struct Byte76Holder {
    /* 0x00 */ u8 unk00[0x76];
    /* 0x76 */ s8 value;
} Byte76Holder;

extern Byte76Holder DAT_005f0c7c;

void byte76Set(s8 value)
{
    DAT_005f0c7c.value = value;
}

} /* extern "C" */
