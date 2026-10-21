#include "common.h"

extern "C" {

typedef struct Child00316164 Child00316164;

typedef struct Owner00316164 {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 state;
    /* 0x06 */ u8 unk06[0x12];
    /* 0x18 */ Child00316164 *child;
} Owner00316164;

extern Owner00316164 *g_shop;

void FUN_0049597c(Child00316164 *child);

/* While the shop owner is in state 0, 1 or 2, hands its child (if any) to FUN_0049597c. Always returns 0. */
u32 ownerChildNotifyEarlyState(void)
{
    Owner00316164 *owner = g_shop;

    switch (owner->state) {
    case 0:
    case 1:
    case 2:
        if (owner != NULL && owner->child != NULL) {
            FUN_0049597c(owner->child);
        }
        break;
    }
    return 0;
}

} /* extern "C" */
