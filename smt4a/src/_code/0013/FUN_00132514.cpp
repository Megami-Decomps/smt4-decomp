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
} Elem;                          /* 40 bytes */

typedef struct Cursor {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Node *link;       /* non-NULL: following a link chain */
    /* 0x08 */ Elem *cur;        /* current element when not on a chain */
    /* 0x0C */ Elem *end;
} Cursor;

int FUN_0013253c(Cursor *cursor);

/* Post-increment of the cursor: follows the link chain if there is one, otherwise advances by one element (growing at the end); returns the previous position. */
void *FUN_00132514(Cursor *cursor)
{
    Node *link = cursor->link;
    Elem *cur;

    if (link != NULL) {
        cursor->link = link->next;
        return link;
    }
    if (cursor->cur == cursor->end) {
        FUN_0013253c(cursor);
    }
    cur = cursor->cur;
    cursor->cur = cur + 1;
    return cur;
}

} /* extern "C" */
