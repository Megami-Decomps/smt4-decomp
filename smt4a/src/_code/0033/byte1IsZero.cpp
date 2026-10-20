#include "shard/Shard0033.h"

extern "C" {

typedef struct Byte1Holder {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 unk01;
} Byte1Holder;

extern Byte1Holder g_saveLoadThread;

u8 byte1IsZero(void)
{
    return g_saveLoadThread.unk01 == 0;
}

} /* extern "C" */
