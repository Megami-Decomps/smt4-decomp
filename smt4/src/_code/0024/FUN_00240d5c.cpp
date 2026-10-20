#include "common.h"

extern "C" {

typedef struct Part {
    u8 state;       /* 0x00 */
    u8 unk01[15];
    u8 sub[1];      /* 0x10 */
} Part;

extern void FUN_0029e11c(void *sub);
extern void FUN_00240d74(void *sub);

/* Hands the sub-object to the handler for the part's state; state 1 is handled by the next function. */
void FUN_00240d5c(Part *part)
{
    if (part->state != 1) {
        FUN_0029e11c(part->sub);
        return;
    }
    FUN_00240d74(part->sub);
}

} /* extern "C" */
