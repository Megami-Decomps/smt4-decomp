#include "common.h"

extern "C" {

typedef struct MapBlock {
    /* 0x000 */ u8 unk000[0xE14];
    /* 0xE14 */ s8 values[1];
} MapBlock;

extern MapBlock *gameGetMapBlock(void);

s32 gameMapBlockGetValue(s32 index)
{
    return gameGetMapBlock()->values[index];
}

} /* extern "C" */
