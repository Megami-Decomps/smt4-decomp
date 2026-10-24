/* NON_MATCHING: one bl_tree[curlen].freq++ address computation uses a different register */
/* zlib scan_tree: counts the run lengths of a tree's code lengths into the bit-length tree frequencies. */
#include "common.h"

#define REP_3_6 16
#define REPZ_3_10 17
#define REPZ_11_138 18

typedef struct ct_data {
    u16 freq;
    u16 len;
} ct_data;

typedef struct deflate_state {
    /* 0x000 */ u8 unk000[0xA7C];
    /* 0xA7C */ ct_data bl_tree[2 * 19 + 1];
} deflate_state;

extern "C" {

void FUN_0030e588(deflate_state *s, ct_data *tree, s32 max_code)
{
    s32 n;
    s32 prevlen = -1;
    s32 curlen;
    s32 nextlen = tree[0].len;
    s32 count = 0;
    s32 max_count = 7;
    s32 min_count = 4;

    if (nextlen == 0) {
        max_count = 138;
        min_count = 3;
    }
    tree[max_code + 1].len = (u16)0xffff;

    for (n = 0; n <= max_code; n++) {
        curlen = nextlen;
        nextlen = tree[n + 1].len;
        if (++count < max_count && curlen == nextlen) {
            continue;
        } else if (count < min_count) {
            s->bl_tree[curlen].freq += count;
        } else if (curlen != 0) {
            if (curlen != prevlen) {
                s->bl_tree[curlen].freq++;
            }
            s->bl_tree[REP_3_6].freq++;
        } else if (count <= 10) {
            s->bl_tree[REPZ_3_10].freq++;
        } else {
            s->bl_tree[REPZ_11_138].freq++;
        }
        count = 0;
        prevlen = curlen;
        if (nextlen == 0) {
            max_count = 138;
            min_count = 3;
        } else if (curlen == nextlen) {
            max_count = 6;
            min_count = 3;
        } else {
            max_count = 7;
            min_count = 4;
        }
    }
}

} /* extern "C" */
