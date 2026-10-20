#include "shard/Shard0042.h"

extern "C" {

typedef struct WordPair {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
} WordPair;

extern WordPair DAT_005c1484;

void FUN_0042fbc4(u32 value)
{
    DAT_005c1484.unk04 = value;
}

} /* extern "C" */
