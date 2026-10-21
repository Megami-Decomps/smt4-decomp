#include "shard/Shard0035.h"

extern "C" {

typedef struct Byte76Holder {
    /* 0x00 */ u8 unk00[0x76];
    /* 0x76 */ s8 value;
} Byte76Holder;

extern Byte76Holder g_battleViewState;

void byte76Set(s8 value)
{
    g_battleViewState.value = value;
}

} /* extern "C" */
