/* NON_MATCHING: zlib's send_tree (run-length codes of a Huffman tree) rebuilt from the draft; the send_code/send_bits macros expand per call site and armcc here lays out the repeated bit-buffer updates and the loop-carried locals differently from retail. */
#include "common.h"
#include <stddef.h>

/* One Huffman tree node: a code and a length. */
struct ct_data {
    u16 code;
    u16 len;
};

#define Buf_size 16
#define REP_3_6 16
#define REPZ_3_10 17
#define REPZ_11_138 18

typedef struct deflate_state {
    /* 0x0000 */ u8 unk0000[8];
    /* 0x0008 */ u8 *pending_buf;
    /* 0x000C */ u8 unk000C[8];
    /* 0x0014 */ u32 pending;
    /* 0x0018 */ u8 unk0018[0xA64];
    /* 0x0A7C */ ct_data bl_tree[39];
    /* 0x0B18 */ u8 unk0B18[0xBA0];
    /* 0x16B8 */ u16 bi_buf;
    /* 0x16BA */ u8 unk16BA[2];
    /* 0x16BC */ s32 bi_valid;
} deflate_state;

typedef char DeflateStateBlTreeCheck[offsetof(deflate_state, bl_tree) == 0xA7C ? 1 : -1];

#define put_byte(s, c) ((s)->pending_buf[(s)->pending++] = (u8)(c))
#define put_short(s, w) { put_byte(s, (u8)((w) & 0xff)); put_byte(s, (u8)((u16)(w) >> 8)); }

#define send_bits(s, value, length) \
    { int len = (length); \
      if ((s)->bi_valid > (int)Buf_size - len) { \
          int val = (value); \
          (s)->bi_buf |= (u16)val << (s)->bi_valid; \
          put_short((s), (s)->bi_buf); \
          (s)->bi_buf = (u16)val >> (Buf_size - (s)->bi_valid); \
          (s)->bi_valid += len - Buf_size; \
      } else { \
          (s)->bi_buf |= (u16)(value) << (s)->bi_valid; \
          (s)->bi_valid += len; \
      } \
    }

#define send_code(s, c, tree) send_bits(s, (tree)[c].code, (tree)[c].len)

extern "C" {

/* Sends a literal/distance tree in compressed form with the bit-length tree's codes. */
void FUN_0030d4c0(deflate_state *s, ct_data *tree, int max_code)
{
    int n;
    int prevlen = -1;
    int curlen;
    int nextlen = tree[0].len;
    int count = 0;
    int max_count = 7;
    int min_count = 4;
    if (nextlen == 0) {
        max_count = 138;
        min_count = 3;
    }
    for (n = 0; n <= max_code; n++) {
        curlen = nextlen;
        nextlen = tree[n + 1].len;
        if (++count < max_count && curlen == nextlen) {
            continue;
        } else if (count < min_count) {
            do {
                send_code(s, curlen, s->bl_tree);
            } while (--count != 0);
        } else if (curlen != 0) {
            if (curlen != prevlen) {
                send_code(s, curlen, s->bl_tree);
                count--;
            }
            send_code(s, REP_3_6, s->bl_tree);
            send_bits(s, count - 3, 2);
        } else if (count <= 10) {
            send_code(s, REPZ_3_10, s->bl_tree);
            send_bits(s, count - 3, 3);
        } else {
            send_code(s, REPZ_11_138, s->bl_tree);
            send_bits(s, count - 11, 7);
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
