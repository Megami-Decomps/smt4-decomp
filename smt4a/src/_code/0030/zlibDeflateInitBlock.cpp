/* zlib deflate init_block: clears the literal, distance and bit-length frequency tables and the block counters. */
#include "common.h"

#define L_CODES 286
#define D_CODES 30
#define BL_CODES 19
#define END_BLOCK 256

typedef struct ct_data {
    u16 freq;
    u16 len;
} ct_data;

typedef struct deflate_state {
    /* 0x0000 */ u8 unk0000[0x94];
    /* 0x0094 */ ct_data dyn_ltree[2 * L_CODES + 1];
    /* 0x0988 */ ct_data dyn_dtree[2 * D_CODES + 1];
    /* 0x0A7C */ ct_data bl_tree[2 * BL_CODES + 1];
    /* 0x0B18 */ u8 unk0B18[0xB88];
    /* 0x16A0 */ u32 last_lit;
    /* 0x16A4 */ u8 unk16A4[4];
    /* 0x16A8 */ u32 opt_len;
    /* 0x16AC */ u32 static_len;
    /* 0x16B0 */ u32 matches;
} deflate_state;

extern "C" {

void zlibDeflateInitBlock(deflate_state *s)
{
    s32 n;

    for (n = 0; n < L_CODES; n++) {
        s->dyn_ltree[n].freq = 0;
    }
    for (n = 0; n < D_CODES; n++) {
        s->dyn_dtree[n].freq = 0;
    }
    for (n = 0; n < BL_CODES; n++) {
        s->bl_tree[n].freq = 0;
    }
    s->dyn_ltree[END_BLOCK].freq = 1;
    s->opt_len = s->static_len = 0;
    s->last_lit = s->matches = 0;
}

} /* extern "C" */
