/* zlib pqdownheap: restores the heap property below node k of the Huffman tree heap. */
#include "common.h"

typedef struct ct_data {
    u16 freq;
    u16 len;
} ct_data;

typedef struct deflate_state {
    /* 0x0000 */ u8 unk0000[0xB5C];
    /* 0x0B5C */ s32 heap[573];
    /* 0x1450 */ s32 heap_len;
    /* 0x1454 */ s32 heap_max;
    /* 0x1458 */ u8 depth[573];
} deflate_state;

#define smaller(tree, n, m, depth) \
    ((tree)[n].freq < (tree)[m].freq || ((tree)[n].freq == (tree)[m].freq && (depth)[n] <= (depth)[m]))

extern "C" {

void zlibPqDownHeap(deflate_state *s, ct_data *tree, s32 k)
{
    s32 v = s->heap[k];
    s32 j = k << 1;

    while (j <= s->heap_len) {
        if (j < s->heap_len && smaller(tree, s->heap[j + 1], s->heap[j], s->depth)) {
            j++;
        }
        if (smaller(tree, v, s->heap[j], s->depth)) {
            break;
        }
        s->heap[k] = s->heap[j];
        k = j;
        j <<= 1;
    }
    s->heap[k] = v;
}

} /* extern "C" */
