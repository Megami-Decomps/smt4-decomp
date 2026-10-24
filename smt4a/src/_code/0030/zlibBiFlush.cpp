/* zlib deflate bi_flush: writes out the pending bits of the bit buffer. */
#include "common.h"

typedef struct deflate_state {
    /* 0x0000 */ u8 unk0000[8];
    /* 0x0008 */ u8 *pending_buf;
    /* 0x000C */ u8 unk000C[8];
    /* 0x0014 */ u32 pending;
    /* 0x0018 */ u8 unk0018[0x16A0];
    /* 0x16B8 */ u16 bi_buf;
    /* 0x16BA */ u8 unk16BA[2];
    /* 0x16BC */ s32 bi_valid;
} deflate_state;

#define put_byte(s, c) ((s)->pending_buf[(s)->pending++] = (u8)(c))
#define put_short(s, w) { put_byte(s, (u8)((w) & 0xff)); put_byte(s, (u8)((u16)(w) >> 8)); }

extern "C" {

void zlibBiFlush(deflate_state *s)
{
    if (s->bi_valid == 16) {
        put_short(s, s->bi_buf);
        s->bi_buf = 0;
        s->bi_valid = 0;
    } else if (s->bi_valid >= 8) {
        put_byte(s, s->bi_buf);
        s->bi_buf >>= 8;
        s->bi_valid -= 8;
    }
}

} /* extern "C" */
