#include "common.h"

extern "C" {

/* Game block with a 5-entry id table at 0x1b34 followed by a list of ids at 0x1b3e (-1 = empty). */
typedef struct {
    u8 unk00[0x1b34];
    s16 head[5];        /* 0x1b34 */
    s16 list[1];        /* 0x1b3e */
} GameBlock;

extern GameBlock *g_camp;

int ifTouchRegionRemove(void);
int uiSearchPrimary(u32 group);

/* Clears the id table and every used list slot for `group`; with `keep` clear it also runs two trailing ifTouchRegionRemove calls. */
void FUN_002adce8(u32 group, int keep)
{
    GameBlock *block = g_camp;
    int i;

    ifTouchRegionRemove();
    ifTouchRegionRemove();
    ifTouchRegionRemove();
    block->head[0] = -1;
    block->head[1] = -1;
    block->head[2] = -1;
    block->head[3] = -1;
    block->head[4] = -1;
    i = 0;
    if (uiSearchPrimary(group) > 0) {
        do {
            if (block->list[i] >= 0) {
                ifTouchRegionRemove();
                block->list[i] = -1;
            }
            i++;
        } while (uiSearchPrimary(group) > i);
    }
    if (keep == 0) {
        ifTouchRegionRemove();
        ifTouchRegionRemove();
    }
}

} /* extern "C" */
