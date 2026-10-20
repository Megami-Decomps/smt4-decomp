#include "common.h"

extern "C" {

u32 FUN_0020ffe0(void *inner);

typedef struct Node00335118 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ struct Node00335118 *next;
} Node00335118;

/* Forwards the object two links down (+8, +8) to FUN_0020ffe0. */
void FUN_00335118(Node00335118 *node)
{
    FUN_0020ffe0(node->next->next);
}

} /* extern "C" */
