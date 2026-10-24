/* zlib _tr_stored_block: sends the 3-bit stored block header and copies the block. */
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
#define Buf_size 16

extern "C" {

void FUN_00125a34(deflate_state *s, u8 *buf, u32 len, s32 header);

void zlibTrStoredBlock(deflate_state *s, u8 *buf, u32 stored_len, s32 last)
{
    /* send_bits(s, (STORED_BLOCK << 1) + last, 3) */
    s32 length = 3;

    if (s->bi_valid > Buf_size - length) {
        s32 val = last;

        s->bi_buf |= (val << s->bi_valid);
        put_short(s, s->bi_buf);
        s->bi_buf = (u16)val >> (Buf_size - s->bi_valid);
        s->bi_valid += length - Buf_size;
    } else {
        s->bi_buf |= (last << s->bi_valid);
        s->bi_valid += length;
    }
    FUN_00125a34(s, buf, stored_len, 1);
}

} /* extern "C" */
