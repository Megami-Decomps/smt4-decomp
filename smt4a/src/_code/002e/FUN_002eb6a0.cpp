/* NON_MATCHING: same loads and stores as retail but scheduled in a different order/registers (retail loads *b before *a for the second store). */
#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ struct Node *next;
    /* 0x10 */ struct Node *prev;
} Node;

/* Links two nodes (given by iterator reference) so that *a's next is *b and *b's prev is *a. */
void FUN_002eb6a0(u32 unused, Node **a, Node **b)
{
    (*a)->next = *b;
    (*b)->prev = *a;
}

} /* extern "C" */
