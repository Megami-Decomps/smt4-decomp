#include "common.h"

extern "C" {

/* Game block: per-slot id tables from 0x1b54 (-1 = empty) and a flag byte at 0x1b6d. */
typedef struct {
    u8 unk00[0x1b54];
    s16 first[3];       /* 0x1b54 */
    s16 rest[3][3];     /* 0x1b5a */
    u8 unk1b6c;
    u8 flag;            /* 0x1b6d */
} GameBlock;

extern GameBlock *g_camp;

int ifTouchRegionRemove(void);

/* Empties the three slots' id tables, running ifTouchRegionRemove four times per slot, then clears the flag. */
void FUN_0026f0c4(void)
{
    GameBlock *block = g_camp;
    int i;

    for (i = 0; i < 3; i++) {
        block->first[i] = -1;
        block->rest[i][0] = -1;
        block->rest[i][1] = -1;
        block->rest[i][2] = -1;
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        ifTouchRegionRemove();
    }
    block->flag = 0;
}

} /* extern "C" */
