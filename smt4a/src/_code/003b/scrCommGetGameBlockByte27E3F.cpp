#include "shard/Shard003B.h"

extern "C" {

typedef struct GameBlock27E3F {
    /* 0x00000 */ u8 unk00000[0x27E3F];
    /* 0x27E3F */ u8 unk27E3F;
} GameBlock27E3F;

extern GameBlock27E3F *gameDataBlocksGetSaveData(void);
extern void scrSetResult(u32 value);

/* Script command: result is the byte at +0x27E3F of the game data block. */
u32 scrCommGetGameBlockByte27E3F(void)
{
    scrSetResult(gameDataBlocksGetSaveData()->unk27E3F);
    return 1;
}

} /* extern "C" */
