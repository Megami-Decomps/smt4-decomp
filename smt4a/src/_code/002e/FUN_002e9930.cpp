/* NON_MATCHING: the prologue pads the stack alignment with r6 where retail saves r3 (push {r3, r4, r5, lr}). */
#include "common.h"

extern "C" {

/* Sentinel node of the container: parent at 4, left and right at 8 and 0xc, all initially pointing at itself. */
typedef struct Node {
    u8 unk00[4];
    struct Node *parent;    /* 0x04 */
    struct Node *left;      /* 0x08 */
    struct Node *right;     /* 0x0c */
} Node;

/* Ordered container: sentinel at 0x10, count at 0x14, a flag byte at 0x19. */
typedef struct {
    u32 unk00;              /* 0x00 */
    u32 unk04;              /* 0x04 */
    u32 unk08;              /* 0x08 */
    u32 unk0c;              /* 0x0c */
    Node *sentinel;         /* 0x10 */
    u32 count;              /* 0x14 */
    u8 unk18;               /* 0x18 */
    u8 flag;                /* 0x19 */
} Container;

Node *FUN_00310478(void);

/* Initialises an empty container with its self-linked sentinel node. */
Container *FUN_002e9930(Container *container, u8 flag)
{
    container->unk00 = 0;
    container->sentinel = NULL;
    container->count = 0;
    container->unk18 = 0;
    container->flag = flag;
    container->unk0c = 0;
    container->unk08 = 0;
    container->unk04 = 0;
    container->sentinel = FUN_00310478();
    container->sentinel->parent = NULL;
    container->sentinel->left = container->sentinel;
    container->sentinel->right = container->sentinel;
    return container;
}

} /* extern "C" */
