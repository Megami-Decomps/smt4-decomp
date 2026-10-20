/* NON_MATCHING: the element-end pointer is loaded into r1 where retail uses r2 (it keeps the link->next value in r1 live). */
#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x00 */ struct Node *next;
} Node;

typedef struct Elem {
    u32 w0;
    u32 w1;
    u32 w2;
    u32 w3;
    u32 w4;
    u32 w5;
    u32 w6;
    u32 w7;
    u32 w8;
    u32 w9;
    u32 w10;
    u32 w11;
    u32 w12;
    u32 w13;
    u32 w14;
    u32 w15;
    u32 w16;
    u32 w17;
    u32 w18;
    u32 w19;
    u32 w20;
    u32 w21;
    u32 w22;
    u32 w23;
    u32 w24;
    u32 w25;
    u32 w26;
    u32 w27;
    u32 w28;
    u32 w29;
    u32 w30;
    u32 w31;
    u32 w32;
    u32 w33;
    u32 w34;
    u32 w35;
    u32 w36;
    u32 w37;
    u32 w38;
    u32 w39;
} Elem;                          /* 160 bytes */

typedef struct Cursor {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Node *link;       /* non-NULL: following a link chain */
    /* 0x08 */ Elem *cur;        /* current element when not on a chain */
    /* 0x0C */ Elem *end;
} Cursor;

int FUN_00132972(Cursor *cursor);

/* Post-increment of the cursor: follows the link chain if there is one, otherwise advances by one element (growing at the end); returns the previous position. */
void *FUN_002ee998(Cursor *cursor)
{
    Node *link = cursor->link;
    Elem *cur;

    if (link != NULL) {
        cursor->link = link->next;
        return link;
    }
    if (cursor->cur == cursor->end) {
        FUN_00132972(cursor);
    }
    cur = cursor->cur;
    cursor->cur = cur + 1;
    return cur;
}

} /* extern "C" */
