#include "shard/Shard0042.h"

extern "C" {

typedef struct WordPair {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
} WordPair;

extern WordPair g_handlerRefForward;

void FUN_0042fbc4(u32 value)
{
    g_handlerRefForward.unk04 = value;
}

} /* extern "C" */
