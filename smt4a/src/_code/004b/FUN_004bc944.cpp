#include "shard/Shard004B.h"

extern "C" {

typedef struct ByteAt3 {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ u8 unk03;
} ByteAt3;

extern ByteAt3 *gameDataGetTableEntry(void);

u32 FUN_004bc944(void)
{
    return (gameDataGetTableEntry()->unk03 & 0x40) >> 6;
}

} /* extern "C" */
