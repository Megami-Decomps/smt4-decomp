/* NON_MATCHING: zlib inflate_table (Thumb code), written from the zlib 1.2.x source with the retail tables/limits (852/592, base-257 offsets, match 19/256/-1); built 490 rows against 407, so retail was compiled from a tighter variant (likely a different zlib revision or hand-tuned loops: count/offs loops merged, the final code-fill loop shaped differently) which is not reproduced */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

extern "C" {

#define MAXBITS 15
#define ENOUGH_LENS  852
#define ENOUGH_DISTS 592

enum CodeType { CODES = 0, LENS = 1, DISTS = 2 };

/* One entry of an inflate decoding table (zlib's `code`). */
struct HuffCode {
    u8 op;      /* operation, extra bits, table bits */
    u8 bits;    /* bits in this part of the code */
    u16 val;    /* offset in table or code value */
};

extern const u16 DAT_00546d1a[31];  /* 0x546d1a: length base values */
extern const u16 DAT_00546d58[31];  /* 0x546d58: length extra bits */
extern const u16 DAT_00546f98[32];  /* 0x546f98: distance base values */
extern const u16 DAT_00546fd8[32];  /* 0x546fd8: distance extra bits */

/* Builds a decoding table for `codes` code lengths `lens` (zlib's inflate_table). Returns 0 on
 * success, -1 for an over-subscribed or incomplete set, 1 when the table would be too large. */
s32 FUN_0030d824(s32 type, u16 *lens, u32 codes, HuffCode **table, u32 *bits, u16 *work)
{
    u32 len;
    u32 sym;
    u32 min;
    u32 max;
    u32 root;
    u32 curr;
    u32 drop;
    s32 left;
    u32 used;
    u32 huff;
    u32 incr;
    u32 fill;
    u32 low;
    u32 mask;
    HuffCode here;
    HuffCode *next;
    const u16 *base;
    const u16 *extra;
    s32 match;
    u16 count[MAXBITS + 1];
    u16 offs[MAXBITS + 1];

    for (len = 0; len <= MAXBITS; len++) {
        count[len] = 0;
    }
    for (sym = 0; sym < codes; sym++) {
        count[lens[sym]]++;
    }

    root = *bits;
    for (max = MAXBITS; max >= 1; max--) {
        if (count[max] != 0) {
            break;
        }
    }
    if (root > max) {
        root = max;
    }
    if (max == 0) {
        here.op = 64;
        here.bits = 1;
        here.val = 0;
        *(*table)++ = here;
        *(*table)++ = here;
        *bits = 1;
        return 0;
    }
    for (min = 1; min < max; min++) {
        if (count[min] != 0) {
            break;
        }
    }
    if (root < min) {
        root = min;
    }

    left = 1;
    for (len = 1; len <= MAXBITS; len++) {
        left <<= 1;
        left -= count[len];
        if (left < 0) {
            return -1;
        }
    }
    if (left > 0 && (type == CODES || max != 1)) {
        return -1;
    }

    offs[1] = 0;
    for (len = 1; len < MAXBITS; len++) {
        offs[len + 1] = offs[len] + count[len];
    }
    for (sym = 0; sym < codes; sym++) {
        if (lens[sym] != 0) {
            work[offs[lens[sym]]++] = (u16)sym;
        }
    }

    switch (type) {
    case CODES:
        base = extra = work;
        match = 19;
        break;
    case LENS:
        base = DAT_00546d1a;
        base -= 257;
        extra = DAT_00546d58;
        extra -= 257;
        match = 256;
        break;
    default:
        base = DAT_00546f98;
        extra = DAT_00546fd8;
        match = -1;
        break;
    }

    huff = 0;
    sym = 0;
    len = min;
    next = *table;
    curr = root;
    drop = 0;
    low = (u32)-1;
    used = 1U << root;
    mask = used - 1;

    if ((type == LENS && used >= ENOUGH_LENS) || (type == DISTS && used >= ENOUGH_DISTS)) {
        return 1;
    }

    for (;;) {
        here.bits = (u8)(len - drop);
        if ((s32)work[sym] < match) {
            here.op = 0;
            here.val = work[sym];
        } else if ((s32)work[sym] > match) {
            here.op = (u8)extra[work[sym]];
            here.val = base[work[sym]];
        } else {
            here.op = 32 + 64;
            here.val = 0;
        }

        incr = 1U << (len - drop);
        fill = 1U << curr;
        min = fill;
        do {
            fill -= incr;
            next[(huff >> drop) + fill] = here;
        } while (fill != 0);

        incr = 1U << (len - 1);
        while (huff & incr) {
            incr >>= 1;
        }
        if (incr != 0) {
            huff &= incr - 1;
            huff += incr;
        } else {
            huff = 0;
        }

        sym++;
        if (--(count[len]) == 0) {
            if (len == max) {
                break;
            }
            len = lens[work[sym]];
        }

        if (len > root && (huff & mask) != low) {
            if (drop == 0) {
                drop = root;
            }
            next += min;

            curr = len - drop;
            left = (s32)(1 << curr);
            while (curr + drop < max) {
                left -= count[curr + drop];
                if (left <= 0) {
                    break;
                }
                curr++;
                left <<= 1;
            }

            used += 1U << curr;
            if ((type == LENS && used >= ENOUGH_LENS) || (type == DISTS && used >= ENOUGH_DISTS)) {
                return 1;
            }

            low = huff & mask;
            (*table)[low].op = (u8)curr;
            (*table)[low].bits = (u8)root;
            (*table)[low].val = (u16)(next - *table);
        }
    }

    here.op = 64;
    here.bits = (u8)(len - drop);
    here.val = 0;
    while (huff != 0) {
        if (drop != 0 && (huff & mask) != low) {
            drop = 0;
            len = root;
            next = *table;
            here.bits = (u8)len;
        }
        next[huff >> drop] = here;

        incr = 1U << (len - 1);
        while (huff & incr) {
            incr >>= 1;
        }
        if (incr != 0) {
            huff &= incr - 1;
            huff += incr;
        } else {
            huff = 0;
        }
    }

    *table += used;
    *bits = root;
    return 0;
}

} /* extern "C" */
